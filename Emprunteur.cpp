#include "StdAfx.h"
#include "Emprunteur.h"

Emprunteur::Emprunteur(void)
{
}

Emprunteur::~Emprunteur(void)
{
}

Emprunteur::Emprunteur(std::string lenom, std::string leprenom, Date ladate_naissance, Adresse ladresseemprunteur, std::string lenumero_carte_identite)
:nom(lenom), prenom(leprenom), date_naissance(ladate_naissance), adresseemprunteur(ladresseemprunteur), numero_carte_identite(lenumero_carte_identite) 
{
	permis_voiture = false;
	permis_moto = false;
}

void Emprunteur::setpermisauto(std::string le_num_permisauto, Date la_delivrance_permis_voiture,	Date l_expiration_permis_voiture)
{
	permis_voiture = true;
	numero_permisauto = le_num_permisauto;
	delivrance_permis_voiture = la_delivrance_permis_voiture;
	expiration_permis_voiture =  l_expiration_permis_voiture;
}

void Emprunteur::setpermismoto(std::string le_num_permismoto, Date la_delivrance_permis_moto,	Date l_expiration_permis_moto)
{
   permis_moto = true;
	numero_permismoto = le_num_permismoto;
	delivrance_permis_moto = la_delivrance_permis_moto;
	expiration_permis_moto =  l_expiration_permis_moto;
}

void Emprunteur::set (int a, std::string chain)
{
	switch (a) 
	{
		case 0 :
			id= atoi(chain.c_str()); break;
		case 1 :
			nom = chain; break;
		case 2 :
			prenom = chain; break;
		case 3 :
			date_naissance.set( chain );break;
		case 4 :  
			numero_carte_identite= chain; break;
		case 5 : 
			adresseemprunteur.set_numero(chain); break;
		case 6 : 
			adresseemprunteur.set_rue(chain);break;
		case 7 : 
			adresseemprunteur.set_codepostale(chain);break;
		case 8 : 
			adresseemprunteur.set_ville(chain);break;
		case 9 : 
			permis_voiture=atoi (chain.c_str());break;
		case 10 :
			numero_permisauto=chain; break;
		case 11 :
			delivrance_permis_voiture.set(chain); break;
		case 12 :
			expiration_permis_voiture.set(chain); break;
		case 13 :
			permis_moto=atoi (chain.c_str()); break;
		case 14 :
			delivrance_permis_moto.set(chain); break;
		case 15 :
			expiration_permis_moto.set(chain); break;
		case 16 :
			numero_permismoto=chain; break;
		case 17 :
			
			//int nb;
			//nb = atoi (chain.c_str());
			for(int i=0 ; i < 4; i++) // CHANGER '4' pr optimisation memoire !
			{
				autre_conducteur[i]=new Conducteur;
			}
			break;


		// Debut conducteurs secondaires..
		case 18 ://1
			autre_conducteur[0]->set_nom(chain); break;
		case 19 :
			autre_conducteur[0]->set_prenom(chain); break;
		case 20 :
			autre_conducteur[0]->set_date_naissance(chain); break;
		case 21 :
			autre_conducteur[0]->set_permis_voiture(chain); break;
		case 22 :
			autre_conducteur[0]->set_num_permis(chain); break;
		case 23 :
			autre_conducteur[0]->set_delivrance_permis(chain);break;
		case 24 :
			autre_conducteur[0]->set_expiration_permis(chain); break;
		case 25 :
			autre_conducteur[0]->set_permis_moto(chain); break;
		case 26 ://2
			autre_conducteur[1]->set_nom(chain); break;
		case 27 :
			autre_conducteur[1]->set_prenom(chain); break;
		case 28 :
			autre_conducteur[1]->set_date_naissance(chain); break;
		case 29 :
			autre_conducteur[1]->set_permis_voiture(chain); break;
		case 30 :
			autre_conducteur[1]->set_num_permis(chain); break;
		case 31 :
			autre_conducteur[1]->set_delivrance_permis(chain);break;
		case 32 :
			autre_conducteur[1]->set_expiration_permis(chain); break;
		case 33 :
			autre_conducteur[1]->set_permis_moto(chain); break;
		case 34 ://3
			autre_conducteur[2]->set_nom(chain); break;
		case 35 :
			autre_conducteur[2]->set_prenom(chain); break;
		case 36 :
			autre_conducteur[2]->set_date_naissance(chain); break;
		case 37 :
			autre_conducteur[2]->set_permis_voiture(chain); break;
		case 38 :
			autre_conducteur[2]->set_num_permis(chain); break;
		case 39 :
			autre_conducteur[2]->set_delivrance_permis(chain);break;
		case 40 :
			autre_conducteur[2]->set_expiration_permis(chain); break;
		case 41 :
			autre_conducteur[2]->set_permis_moto(chain); break;
		case 42 ://4
			autre_conducteur[3]->set_nom(chain); break;
		case 43 :
			autre_conducteur[3]->set_prenom(chain); break;
		case 44 :
			autre_conducteur[3]->set_date_naissance(chain); break;
		case 45 :
			autre_conducteur[3]->set_permis_voiture(chain); break;
		case 46 :
			autre_conducteur[3]->set_num_permis(chain); break;
		case 47 :
			autre_conducteur[3]->set_delivrance_permis(chain);break;
		case 48 :
			autre_conducteur[3]->set_expiration_permis(chain); break;
		case 49 :
			autre_conducteur[3]->set_permis_moto(chain); break;





		default :
		break ;
	}

}
	
//GET Emprunteur :
	
std::string Emprunteur::get (int a)
{


switch (a) 
	{
		case 0 :
			{
			char buffer[50];
			std::string s;			
			s= itoa(id,buffer,10);
			return s; break;
			}
		case 1 :
			return nom; break;
		case 2 :
			return prenom; break;
		case 3 :
			return date_naissance.get();break;
		case 4 :  
			return numero_carte_identite; break;
		case 5 : 
			 return adresseemprunteur.get_numero();break;
		case 6 : 
			return adresseemprunteur.get_rue();break;
		case 7 : 
			return adresseemprunteur.get_codepostale();break;
		case 8 : 
			return adresseemprunteur.get_ville();break;
		case 9 : 
			if (permis_voiture)return "1";
			else return "0" ; break;
		case 10 :
			 return numero_permisauto; break;
		case 11 :
			 return delivrance_permis_voiture.get(); break;
		case 12 :
			 return expiration_permis_voiture.get(); break;
		case 13 :
			 if (permis_moto)return "1";
			else return "0" ;break;
		case 14 :
			 return delivrance_permis_moto.get();break;
		case 15 :
			 return expiration_permis_moto.get(); break;
		case 16 :
			 return numero_permismoto; break;
		case 17 :
			return "4"; break;
		// Debut conducteurs secondaires..
		case 18 ://1
			return autre_conducteur[0]->get_nom() ;break; 
		case 19 :
			return autre_conducteur[0]->get_prenom() ;break;
		case 20 :
			return autre_conducteur[0]->get_date_naissance(); break;
		case 21 :
			return autre_conducteur[0]->get_permis_voiture() ; break;
		case 22 :
			return autre_conducteur[0]->get_num_permis(); break;
		case 23 :
			return autre_conducteur[0]->get_delivrance_permis(); break;
		case 24 :
			return autre_conducteur[0]->get_expiration_permis(); break;
		case 25 :
			return autre_conducteur[0]->get_permis_moto(); break;
		case 26 ://2
			return autre_conducteur[1]->get_nom() ;break; 
		case 27 :
			return autre_conducteur[1]->get_prenom() ;break;
		case 28 :
			return autre_conducteur[1]->get_date_naissance(); break;
		case 29 :
			return autre_conducteur[1]->get_permis_voiture() ; break;
		case 30 :
			return autre_conducteur[1]->get_num_permis(); break;
		case 31 :
			return autre_conducteur[1]->get_delivrance_permis(); break;
		case 32 :
			return autre_conducteur[1]->get_expiration_permis(); break;
		case 33 :
			return autre_conducteur[1]->get_permis_moto(); break;
		case 34 ://3
			return autre_conducteur[2]->get_nom() ;break; 
		case 35 :
			return autre_conducteur[2]->get_prenom() ;break;
		case 36 :
			return autre_conducteur[2]->get_date_naissance(); break;
		case 37 :
			return autre_conducteur[2]->get_permis_voiture() ; break;
		case 38 :
			return autre_conducteur[2]->get_num_permis(); break;
		case 39 :
			return autre_conducteur[2]->get_delivrance_permis(); break;
		case 40 :
			return autre_conducteur[2]->get_expiration_permis(); break;
		case 41 :
			return autre_conducteur[2]->get_permis_moto(); break;
		case 42 ://4
			return autre_conducteur[3]->get_nom() ;break; 
		case 43 :
			return autre_conducteur[3]->get_prenom() ;break;
		case 44 :
			return autre_conducteur[3]->get_date_naissance(); break;
		case 45 :
			return autre_conducteur[3]->get_permis_voiture() ; break;
		case 46 :
			return autre_conducteur[3]->get_num_permis(); break;
		case 47 :
			return autre_conducteur[3]->get_delivrance_permis(); break;
		case 48 :
			return autre_conducteur[3]->get_expiration_permis(); break;
		case 49 :
			return autre_conducteur[3]->get_permis_moto(); break;
		
		
		default : 
			break ;

}



}