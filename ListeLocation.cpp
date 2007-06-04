#include "StdAfx.h"
#include "ListeLocation.h"
#include "ListeEmprunteur.h"
#include "Flotte.h"



ListeLocation* ListeLocation::instance = 0;

ListeLocation::ListeLocation(void)
{
}

ListeLocation::~ListeLocation(void)
{
}

ListeLocation* ListeLocation::getinstance()
{
	if ( instance == 0)
		instance = new ListeLocation();
	return instance;
}

// devis :
void ListeLocation::devis (Location * loc)
{

	std::string s;
	ofstream f;
	//ifstream i;
	
	if (f.bad()==0 && loc != 0)
		{
			f.open("devis.rtf",  ios::out | ios::trunc);
			
			f << "\t\t\t\t EfreiLoca Devis\n\n\n" ;
			f << "Nom : " ;
			s=loc->get_myEmprunteur()->get(1);
			f << s << "\n";
			f << "Prenom : " ;
			f << loc->get_myEmprunteur()->get(2) << "\n\n" ;
			f << " Adresse : \n -------- \n" ; 
			f << loc->get_myEmprunteur()->get(5)<< " rue " << loc->get_myEmprunteur()->get(6)<< "\n";
			f << loc->get_myEmprunteur()->get (8)<< " - " << loc->get_myEmprunteur()->get(6) << "\n\n\n";
			f << "===================================================================== \n\n\n" ;
			f << "Vehicule loué : " ;
			f << "\t" <<loc->get_myExemplaire()->get(5) << "\t||\t" << loc->get_myExemplaire()->get (6) << "\t||\t" << loc->get_myExemplaire()->get(11) << "\n\n" ;
			f << "Prix par jour :\n " ;
			f << loc->get_myExemplaire()->get(10) << "Euros" ;
			
			
			f << "\n\n\n===================================================================== \n\n\n" ;
			f << "EfreiLoca vous remercie de votre confiance " ; 




			
		}

	f.close();
}





///////////
Location* ListeLocation::returnLocationCour()
{
	
	return this->iter_cour->second;
}
void ListeLocation::Locationbegin()
{
	iter_cour = tabLocation.begin( ); 
}
void ListeLocation::Locationsuiv()
{
	iter_cour ++;
	if (iter_cour  == tabLocation.end( )  )
	{	
		iter_cour --;
	}
	//else iter_cour ++;
}
void ListeLocation::Locationprec()
{
	if (iter_cour != tabLocation.begin( )	 )
     iter_cour --;
}


int ListeLocation::nbrLocation()
{
	return tabLocation.size();
}
//////////////

int ListeLocation::ajout_tab(string s, Location * loc)
{
 Emprunteur* Emp;
 Emp=loc->get_myEmprunteur();
 if (Emp != 0)
	Emp->set_hash_TabLocation_insert(s,loc); // accede tab de hash ..

 Exemplaire* Ex;
 Ex=loc->get_myExemplaire();
 if (Ex != 0)
	Ex->TabLocation.insert(Int_Pair(s,loc));

 return 1;
}




int ListeLocation::ajout(Location* nouvelle_loc)
{
	Date ddebut;
	Date dfin;
	
	ddebut=nouvelle_loc->getdebut(); // recup date debut et fin
	dfin=nouvelle_loc->getfin();
	
	
	
	//mise en forme ..
	

	int jd = ddebut.getjj();
	int md = ddebut.getmm();
	int ad = ddebut.getaaaa();


	int jf = dfin.getjj();
	int mf = dfin.getmm();
	int af = dfin.getaaaa();

	
int mois=0;


	
		do
		{
		
			std::string s,s1,s2,s3;
			char buf[10];
			s1 = itoa(jd,buf,10);
			s2 = itoa(md,buf,10);
			s3 = itoa(ad,buf,10);
			s= s1 + s2 + s3;
			tabLocation.insert(Int_Pair(s,nouvelle_loc));
			this->ajout_tab(s,nouvelle_loc);

			if (jd==30)
			{
				jd=1;
				md++; 
			}
			else jd++;
			
			
			if(md==12) md =1 ;
		
		
		} while (jd != jf && md == mf || md < mf);
			

return 1;
}


int ListeLocation::chargement ()
{
ifstream infile("locations.txt");

if (infile) // test de succès d'ouverture
	{
		int a =0;
		int fin =0;//
		Location *nouv;
		char chaine[500];
		
		string chp;
		while (infile.peek() != EOF) // parcours de la loc
		{
		
			
			
			nouv = new Location;
			while (infile.peek() != '\n' && fin==0) // parcours chp loc
			{
				
				fin=0;//
				infile.getline(chaine, 500, ';');
				
				chp = chaine;
				cout << chp;

				nouv->set ( a, chp);
				/*
				if (a==16 && infile.peek()=='0')
				{
				fin =1;
				}
				*/
				if(infile.peek() != '\n')a++;
			}
			if (infile.peek() == '\n')
			{
				infile.get();
				a=0;
				
				// recuperations des adresses de l'emprunteur & de l'exemplaire
				ListeEmprunteur* emp = ListeEmprunteur::getinstance();
	            
				if ((emp->recup_emprunteur (nouv->get(7))) != 0)
				{
					nouv->set_myEmprunteur(emp -> recup_emprunteur (nouv->get(7)));
				}

				Flotte * flo = Flotte::getinstance ();
				if ((flo->recup_exemplaire (nouv->get(8))) != 0)
				{
				nouv->set_myExemplaire(flo->recup_exemplaire (nouv->get(8)));
				}

				ajout (nouv);
				//TEST DEVIS :
				if (nouv->get_myEmprunteur() != 0)
				devis (nouv);
			
			}
			
		}
	}
else
	{
	cout << "erreur d'ouverture";
	}

return 1;
}



/////////////////////////////////////
//Enregistement
int ListeLocation::enregistrement ()
{

ofstream outfile;

if (outfile.bad()==0)
{
outfile.open("locations.txt",  ios::out | ios::trunc);




for ( hash_iter = tabLocation.begin( ); hash_iter != tabLocation.end( ); hash_iter++ )
	{
		for (int i=0; i<9 ; i++)
		{
			outfile << hash_iter->second->get(i);
			outfile << ';';
		}	
	outfile << endl ;
	}

}

else
{
cout << "erreur ouverture";
}

return 1;
}
