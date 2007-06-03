#pragma once
#include "StdAfx.h"
#include "listeEmprunteur.h"
#include "GestionEmprunteurs.h"
#include "Adresse.h"
#include "Date.h"



namespace efreiloca {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Description résumée de Form1
	///
	/// AVERTISSEMENT : si vous modifiez le nom de cette classe, vous devrez modifier la
	///          propriété 'Nom du fichier de ressources' de l'outil de compilation de ressource managée
	///          pour tous les fichiers .resx dont dépend cette classe. Dans le cas contraire,
	///          les concepteurs ne pourront pas interagir correctement avec les ressources
	///          localisées associées à ce formulaire.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		

		Form1(void)  
		{
			InitializeComponent();
			//
			//TODO : ajoutez ici le code du constructeur
			//
		}

		


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuhaut;
	protected: 

	private: System::Windows::Forms::ToolStripMenuItem^  emprunteurToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nouvelEmprunteurToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  listeDesEmprunteursToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vehiculeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  listeDesVéhiculesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  voitureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  motoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  listeDesVéhiculesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  voitureToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  motosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tousToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  locationEnCoursToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nouveauToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  retourLocationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  locationsEnCoursToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  outilsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editionDevisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  facturesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aideToolStripMenuItem;
	public: System::Windows::Forms::TabControl^  TabPage;
	private: 

	private: 


	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  NouvelEmprunteur;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::Label^  Label_New_Nom;
	private: System::Windows::Forms::Label^  label_New_Prenom;
	private: System::Windows::Forms::DateTimePicker^  date_Naissance;

	private: System::Windows::Forms::Label^  label_New_DateNaissance;
	private: System::Windows::Forms::TextBox^  textBox_Prenom;
	private: System::Windows::Forms::TextBox^  textBox_Nom;
	private: System::Windows::Forms::GroupBox^  Groupebox_Adresse;



	private: System::Windows::Forms::MaskedTextBox^  TextBox_Num;

	private: System::Windows::Forms::Label^  label_New_Num;
	private: System::Windows::Forms::Label^  label_New_Rue;
	private: System::Windows::Forms::TextBox^  textBox_rue;
	private: System::Windows::Forms::MaskedTextBox^  TextBox_CodePostal;


	private: System::Windows::Forms::Label^  label_New_Codepostal;
	private: System::Windows::Forms::Label^  label_New_Ville;
	private: System::Windows::Forms::TextBox^  textBox_Ville;
	private: System::Windows::Forms::Label^  label_listeE_ListeEmprunteur;
	private: System::Windows::Forms::DataGridView^  dataListeEmprunteur;
	private: System::Windows::Forms::CheckBox^  checkBox_permismoto;







	private: System::Windows::Forms::CheckBox^  checkBox_permisvoiture;
	private: System::Windows::Forms::GroupBox^  groupBox_permisvoiture;


	private: System::Windows::Forms::TextBox^  textBox_permisdeconduire;
	private: System::Windows::Forms::Label^  Numpermisdeconduire;
private: System::Windows::Forms::GroupBox^  groupBox_locationeffectue;
private: System::Windows::Forms::GroupBox^  groupBox_locationencours;


	private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_expirepermisvoiture;

private: System::Windows::Forms::DateTimePicker^  dateTimePicker_delivrepermisvoiture;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStripMenuItem^  configurationToolStripMenuItem;
	private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::GroupBox^  groupBox_permismoto;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_expirepermismoto;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_delivrepermismoto;



	private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TextBox^  textBox_numpermismoto;

private: System::Windows::Forms::TabControl^  conducteuraditionnel;
private: System::Windows::Forms::TabPage^  conducteur1;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur1_naissance;




private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  textBox_conducteur1_nom;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TabPage^  conducteur2;
private: System::Windows::Forms::TextBox^  textBox_conducteur1_prenom;



private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur1_expirepermis;

private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur1_delivrepermis;

private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TextBox^  textBox_conducteur1_numpermis;

private: System::Windows::Forms::CheckBox^  checkBox_conducteur1_permisvoiture;
private: System::Windows::Forms::CheckBox^  checkBox_conduteur1_permismoto;


private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::CheckBox^  checkBox_conducteur2_permismoto;

private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur2_expirepermis;

private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur2_delivrepermis;

private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  textBox_conducteur2_numpermis;

private: System::Windows::Forms::CheckBox^  checkBox_conducteur2_permisvoiture;

private: System::Windows::Forms::TextBox^  textBox_conducteur2_prenom;

private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur2_naissance;

private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  textBox_conducteur2_nom;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TabPage^  conducteur3;

private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::CheckBox^  checkBox_conducteur3_permismoto;

private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur3_expirepermis;

private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur3_delivrepermis;

private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  textBox_conducteur3_numpermis;

private: System::Windows::Forms::CheckBox^  checkBox_conducteur3_permisvoiture;

private: System::Windows::Forms::TextBox^  textBox_conducteur3_prenom;

private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur3_naissance;

private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  textBox_conducteur3_nom;

private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TabPage^  conducteur4;

private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::CheckBox^  checkBox_conducteur4_permismoto;

private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur4_expirepermis;

private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur4_delivrepermis;

private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TextBox^  textBox_conducteur4_numpermis;

private: System::Windows::Forms::CheckBox^  checkBox_conducteur4_permisvoiture;

private: System::Windows::Forms::TextBox^  textBox_conducteur4_prenom;

private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker_conducteur4_naissance;

private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  textBox_conducteur4_nom;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Button^  validationEmprunteur;
private: System::Windows::Forms::DataGridView^  dataGridView_locationeffetue;


private: System::Windows::Forms::BindingSource^  adresseBindingSource1;
private: System::Windows::Forms::BindingSource^  adresseBindingSource;
private: System::Windows::Forms::DataGridView^  dataGridView_locationencours;

private: System::Windows::Forms::TextBox^  textBox_numero_carte_didentite;

private: System::Windows::Forms::Label^  label_numero_carte_didentite;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nom;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Prénom;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Naissance;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Location;
private: System::Windows::Forms::BindingSource^  emprunteurBindingSource;
private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::Button^  button_precedent;
private: System::Windows::Forms::Button^  button_suivant;






private: System::ComponentModel::IContainer^  components;





















	protected: 


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuhaut = (gcnew System::Windows::Forms::MenuStrip());
			this->emprunteurToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouvelEmprunteurToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listeDesEmprunteursToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vehiculeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listeDesVéhiculesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->voitureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->motoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listeDesVéhiculesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->voitureToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->motosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tousToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->locationEnCoursToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouveauToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->retourLocationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->locationsEnCoursToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->outilsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editionDevisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configurationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TabPage = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button_precedent = (gcnew System::Windows::Forms::Button());
			this->button_suivant = (gcnew System::Windows::Forms::Button());
			this->textBox_numero_carte_didentite = (gcnew System::Windows::Forms::TextBox());
			this->label_numero_carte_didentite = (gcnew System::Windows::Forms::Label());
			this->validationEmprunteur = (gcnew System::Windows::Forms::Button());
			this->conducteuraditionnel = (gcnew System::Windows::Forms::TabControl());
			this->conducteur1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_conduteur1_permismoto = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_conducteur1_expirepermis = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_conducteur1_delivrepermis = (gcnew System::Windows::Forms::DateTimePicker());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox_conducteur1_numpermis = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_conducteur1_permisvoiture = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_conducteur1_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_conducteur1_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_conducteur1_nom = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->conducteur2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_conducteur2_permismoto = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_conducteur2_expirepermis = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_conducteur2_delivrepermis = (gcnew System::Windows::Forms::DateTimePicker());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox_conducteur2_numpermis = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_conducteur2_permisvoiture = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_conducteur2_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_conducteur2_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox_conducteur2_nom = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->conducteur3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_conducteur3_permismoto = (gcnew System::Windows::Forms::CheckBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_conducteur3_expirepermis = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_conducteur3_delivrepermis = (gcnew System::Windows::Forms::DateTimePicker());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox_conducteur3_numpermis = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_conducteur3_permisvoiture = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_conducteur3_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_conducteur3_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox_conducteur3_nom = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->conducteur4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_conducteur4_permismoto = (gcnew System::Windows::Forms::CheckBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_conducteur4_expirepermis = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_conducteur4_delivrepermis = (gcnew System::Windows::Forms::DateTimePicker());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox_conducteur4_numpermis = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_conducteur4_permisvoiture = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_conducteur4_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_conducteur4_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox_conducteur4_nom = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->groupBox_permismoto = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_expirepermismoto = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_delivrepermismoto = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox_permismoto = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_numpermismoto = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_locationeffectue = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView_locationeffetue = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox_locationencours = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView_locationencours = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox_permisvoiture = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_expirepermisvoiture = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_delivrepermisvoiture = (gcnew System::Windows::Forms::DateTimePicker());
			this->Numpermisdeconduire = (gcnew System::Windows::Forms::Label());
			this->textBox_permisdeconduire = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_permisvoiture = (gcnew System::Windows::Forms::CheckBox());
			this->Groupebox_Adresse = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_Ville = (gcnew System::Windows::Forms::TextBox());
			this->label_New_Ville = (gcnew System::Windows::Forms::Label());
			this->TextBox_CodePostal = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_New_Codepostal = (gcnew System::Windows::Forms::Label());
			this->label_New_Rue = (gcnew System::Windows::Forms::Label());
			this->textBox_rue = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Num = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_New_Num = (gcnew System::Windows::Forms::Label());
			this->date_Naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_New_DateNaissance = (gcnew System::Windows::Forms::Label());
			this->textBox_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Nom = (gcnew System::Windows::Forms::TextBox());
			this->label_New_Prenom = (gcnew System::Windows::Forms::Label());
			this->Label_New_Nom = (gcnew System::Windows::Forms::Label());
			this->NouvelEmprunteur = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataListeEmprunteur = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prénom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Naissance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Location = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_listeE_ListeEmprunteur = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->emprunteurBindingSource = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->adresseBindingSource = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->adresseBindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->menuhaut->SuspendLayout();
			this->TabPage->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->conducteuraditionnel->SuspendLayout();
			this->conducteur1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->conducteur2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->conducteur3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->conducteur4->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox_permismoto->SuspendLayout();
			this->groupBox_locationeffectue->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_locationeffetue))->BeginInit();
			this->groupBox_locationencours->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_locationencours))->BeginInit();
			this->groupBox_permisvoiture->SuspendLayout();
			this->Groupebox_Adresse->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataListeEmprunteur))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->emprunteurBindingSource))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->adresseBindingSource))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->adresseBindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuhaut
			// 
			this->menuhaut->BackColor = System::Drawing::SystemColors::HotTrack;
			this->menuhaut->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"menuhaut.BackgroundImage")));
			this->menuhaut->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menuhaut->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->emprunteurToolStripMenuItem, 
				this->vehiculeToolStripMenuItem, this->locationEnCoursToolStripMenuItem, this->outilsToolStripMenuItem, this->aideToolStripMenuItem});
			this->menuhaut->Location = System::Drawing::Point(0, 0);
			this->menuhaut->Name = L"menuhaut";
			this->menuhaut->Size = System::Drawing::Size(1009, 24);
			this->menuhaut->TabIndex = 0;
			this->menuhaut->Text = L"menuhaut";
			// 
			// emprunteurToolStripMenuItem
			// 
			this->emprunteurToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->nouvelEmprunteurToolStripMenuItem, 
				this->listeDesEmprunteursToolStripMenuItem});
			this->emprunteurToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"emprunteurToolStripMenuItem.Image")));
			this->emprunteurToolStripMenuItem->Name = L"emprunteurToolStripMenuItem";
			this->emprunteurToolStripMenuItem->Size = System::Drawing::Size(91, 20);
			this->emprunteurToolStripMenuItem->Text = L"Emprunteur";
			// 
			// nouvelEmprunteurToolStripMenuItem
			// 
			this->nouvelEmprunteurToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nouvelEmprunteurToolStripMenuItem.Image")));
			this->nouvelEmprunteurToolStripMenuItem->Name = L"nouvelEmprunteurToolStripMenuItem";
			this->nouvelEmprunteurToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->nouvelEmprunteurToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->nouvelEmprunteurToolStripMenuItem->Text = L"Nouvel Emprunteur";
			this->nouvelEmprunteurToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::nouvelEmprunteurToolStripMenuItem_Click);
			// 
			// listeDesEmprunteursToolStripMenuItem
			// 
			this->listeDesEmprunteursToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"listeDesEmprunteursToolStripMenuItem.Image")));
			this->listeDesEmprunteursToolStripMenuItem->Name = L"listeDesEmprunteursToolStripMenuItem";
			this->listeDesEmprunteursToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->listeDesEmprunteursToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->listeDesEmprunteursToolStripMenuItem->Text = L"Liste des Emprunteurs";
			this->listeDesEmprunteursToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::listeDesEmprunteursToolStripMenuItem_Click);
			// 
			// vehiculeToolStripMenuItem
			// 
			this->vehiculeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->listeDesVéhiculesToolStripMenuItem, 
				this->listeDesVéhiculesToolStripMenuItem1});
			this->vehiculeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"vehiculeToolStripMenuItem.Image")));
			this->vehiculeToolStripMenuItem->Name = L"vehiculeToolStripMenuItem";
			this->vehiculeToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->vehiculeToolStripMenuItem->Text = L"Vehicules";
			// 
			// listeDesVéhiculesToolStripMenuItem
			// 
			this->listeDesVéhiculesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->voitureToolStripMenuItem, 
				this->motoToolStripMenuItem, this->autreToolStripMenuItem});
			this->listeDesVéhiculesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"listeDesVéhiculesToolStripMenuItem.Image")));
			this->listeDesVéhiculesToolStripMenuItem->Name = L"listeDesVéhiculesToolStripMenuItem";
			this->listeDesVéhiculesToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F9;
			this->listeDesVéhiculesToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->listeDesVéhiculesToolStripMenuItem->Text = L"Nouveau";
			// 
			// voitureToolStripMenuItem
			// 
			this->voitureToolStripMenuItem->Name = L"voitureToolStripMenuItem";
			this->voitureToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->voitureToolStripMenuItem->Text = L"Voiture";
			// 
			// motoToolStripMenuItem
			// 
			this->motoToolStripMenuItem->Name = L"motoToolStripMenuItem";
			this->motoToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->motoToolStripMenuItem->Text = L"Moto";
			// 
			// autreToolStripMenuItem
			// 
			this->autreToolStripMenuItem->Name = L"autreToolStripMenuItem";
			this->autreToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->autreToolStripMenuItem->Text = L"autre";
			// 
			// listeDesVéhiculesToolStripMenuItem1
			// 
			this->listeDesVéhiculesToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->voitureToolStripMenuItem1, 
				this->motosToolStripMenuItem, this->tousToolStripMenuItem});
			this->listeDesVéhiculesToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"listeDesVéhiculesToolStripMenuItem1.Image")));
			this->listeDesVéhiculesToolStripMenuItem1->Name = L"listeDesVéhiculesToolStripMenuItem1";
			this->listeDesVéhiculesToolStripMenuItem1->ShortcutKeys = System::Windows::Forms::Keys::F4;
			this->listeDesVéhiculesToolStripMenuItem1->Size = System::Drawing::Size(193, 22);
			this->listeDesVéhiculesToolStripMenuItem1->Text = L"Liste des véhicules";
			// 
			// voitureToolStripMenuItem1
			// 
			this->voitureToolStripMenuItem1->Name = L"voitureToolStripMenuItem1";
			this->voitureToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->voitureToolStripMenuItem1->Text = L"Voitures";
			this->voitureToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::voitureToolStripMenuItem1_Click);
			// 
			// motosToolStripMenuItem
			// 
			this->motosToolStripMenuItem->Name = L"motosToolStripMenuItem";
			this->motosToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->motosToolStripMenuItem->Text = L"Motos";
			// 
			// tousToolStripMenuItem
			// 
			this->tousToolStripMenuItem->Name = L"tousToolStripMenuItem";
			this->tousToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->tousToolStripMenuItem->Text = L"Tous";
			// 
			// locationEnCoursToolStripMenuItem
			// 
			this->locationEnCoursToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->locationEnCoursToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->nouveauToolStripMenuItem, 
				this->retourLocationToolStripMenuItem, this->locationsEnCoursToolStripMenuItem});
			this->locationEnCoursToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"locationEnCoursToolStripMenuItem.Image")));
			this->locationEnCoursToolStripMenuItem->Name = L"locationEnCoursToolStripMenuItem";
			this->locationEnCoursToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->locationEnCoursToolStripMenuItem->Text = L"Location";
			// 
			// nouveauToolStripMenuItem
			// 
			this->nouveauToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nouveauToolStripMenuItem.Image")));
			this->nouveauToolStripMenuItem->Name = L"nouveauToolStripMenuItem";
			this->nouveauToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F5;
			this->nouveauToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->nouveauToolStripMenuItem->Text = L"Nouvel Location";
			// 
			// retourLocationToolStripMenuItem
			// 
			this->retourLocationToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"retourLocationToolStripMenuItem.Image")));
			this->retourLocationToolStripMenuItem->Name = L"retourLocationToolStripMenuItem";
			this->retourLocationToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F6;
			this->retourLocationToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->retourLocationToolStripMenuItem->Text = L"Retour Location";
			// 
			// locationsEnCoursToolStripMenuItem
			// 
			this->locationsEnCoursToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"locationsEnCoursToolStripMenuItem.Image")));
			this->locationsEnCoursToolStripMenuItem->Name = L"locationsEnCoursToolStripMenuItem";
			this->locationsEnCoursToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F7;
			this->locationsEnCoursToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->locationsEnCoursToolStripMenuItem->Text = L"Locations en cours";
			// 
			// outilsToolStripMenuItem
			// 
			this->outilsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->editionDevisToolStripMenuItem, 
				this->facturesToolStripMenuItem, this->configurationToolStripMenuItem});
			this->outilsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"outilsToolStripMenuItem.Image")));
			this->outilsToolStripMenuItem->Name = L"outilsToolStripMenuItem";
			this->outilsToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->outilsToolStripMenuItem->Text = L"Outils";
			// 
			// editionDevisToolStripMenuItem
			// 
			this->editionDevisToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"editionDevisToolStripMenuItem.Image")));
			this->editionDevisToolStripMenuItem->Name = L"editionDevisToolStripMenuItem";
			this->editionDevisToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F3;
			this->editionDevisToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->editionDevisToolStripMenuItem->Text = L"Edition devis/Factures";
			// 
			// facturesToolStripMenuItem
			// 
			this->facturesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"facturesToolStripMenuItem.Image")));
			this->facturesToolStripMenuItem->Name = L"facturesToolStripMenuItem";
			this->facturesToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F8;
			this->facturesToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->facturesToolStripMenuItem->Text = L"Statistiques";
			// 
			// configurationToolStripMenuItem
			// 
			this->configurationToolStripMenuItem->Name = L"configurationToolStripMenuItem";
			this->configurationToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->configurationToolStripMenuItem->Text = L"Configuration";
			// 
			// aideToolStripMenuItem
			// 
			this->aideToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"aideToolStripMenuItem.Image")));
			this->aideToolStripMenuItem->Name = L"aideToolStripMenuItem";
			this->aideToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F10;
			this->aideToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->aideToolStripMenuItem->Text = L"Aide ";
			// 
			// TabPage
			// 
			this->TabPage->Alignment = System::Windows::Forms::TabAlignment::Left;
			this->TabPage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->TabPage->Controls->Add(this->tabPage2);
			this->TabPage->Controls->Add(this->tabPage3);
			this->TabPage->Controls->Add(this->tabPage4);
			this->TabPage->Controls->Add(this->tabPage5);
			this->TabPage->Controls->Add(this->tabPage6);
			this->TabPage->Controls->Add(this->tabPage7);
			this->TabPage->Controls->Add(this->tabPage8);
			this->TabPage->HotTrack = true;
			this->TabPage->ItemSize = System::Drawing::Size(10, 10);
			this->TabPage->Location = System::Drawing::Point(3, 27);
			this->TabPage->Multiline = true;
			this->TabPage->Name = L"TabPage";
			this->TabPage->SelectedIndex = 1;
			this->TabPage->Size = System::Drawing::Size(1006, 661);
			this->TabPage->TabIndex = 2;
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->Controls->Add(this->button_precedent);
			this->tabPage2->Controls->Add(this->button_suivant);
			this->tabPage2->Controls->Add(this->textBox_numero_carte_didentite);
			this->tabPage2->Controls->Add(this->label_numero_carte_didentite);
			this->tabPage2->Controls->Add(this->validationEmprunteur);
			this->tabPage2->Controls->Add(this->conducteuraditionnel);
			this->tabPage2->Controls->Add(this->groupBox_permismoto);
			this->tabPage2->Controls->Add(this->groupBox_locationeffectue);
			this->tabPage2->Controls->Add(this->groupBox_locationencours);
			this->tabPage2->Controls->Add(this->groupBox_permisvoiture);
			this->tabPage2->Controls->Add(this->Groupebox_Adresse);
			this->tabPage2->Controls->Add(this->date_Naissance);
			this->tabPage2->Controls->Add(this->label_New_DateNaissance);
			this->tabPage2->Controls->Add(this->textBox_Prenom);
			this->tabPage2->Controls->Add(this->textBox_Nom);
			this->tabPage2->Controls->Add(this->label_New_Prenom);
			this->tabPage2->Controls->Add(this->Label_New_Nom);
			this->tabPage2->Controls->Add(this->NouvelEmprunteur);
			this->tabPage2->Location = System::Drawing::Point(14, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(988, 653);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button_precedent
			// 
			this->button_precedent->Location = System::Drawing::Point(39, 591);
			this->button_precedent->Name = L"button_precedent";
			this->button_precedent->Size = System::Drawing::Size(67, 22);
			this->button_precedent->TabIndex = 22;
			this->button_precedent->Text = L"Precedent";
			this->button_precedent->UseVisualStyleBackColor = true;
			this->button_precedent->Click += gcnew System::EventHandler(this, &Form1::button_precedent_Click);
			// 
			// button_suivant
			// 
			this->button_suivant->Location = System::Drawing::Point(112, 591);
			this->button_suivant->Name = L"button_suivant";
			this->button_suivant->Size = System::Drawing::Size(62, 22);
			this->button_suivant->TabIndex = 21;
			this->button_suivant->Text = L"Suivant";
			this->button_suivant->UseVisualStyleBackColor = true;
			this->button_suivant->Click += gcnew System::EventHandler(this, &Form1::button_suivant_Click);
			// 
			// textBox_numero_carte_didentite
			// 
			this->textBox_numero_carte_didentite->Location = System::Drawing::Point(274, 170);
			this->textBox_numero_carte_didentite->Name = L"textBox_numero_carte_didentite";
			this->textBox_numero_carte_didentite->Size = System::Drawing::Size(216, 20);
			this->textBox_numero_carte_didentite->TabIndex = 20;
			// 
			// label_numero_carte_didentite
			// 
			this->label_numero_carte_didentite->AutoSize = true;
			this->label_numero_carte_didentite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_numero_carte_didentite->Location = System::Drawing::Point(45, 165);
			this->label_numero_carte_didentite->Name = L"label_numero_carte_didentite";
			this->label_numero_carte_didentite->Size = System::Drawing::Size(218, 24);
			this->label_numero_carte_didentite->TabIndex = 19;
			this->label_numero_carte_didentite->Text = L"Numéro Carte d\'identité :";
			// 
			// validationEmprunteur
			// 
			this->validationEmprunteur->Location = System::Drawing::Point(497, 573);
			this->validationEmprunteur->Name = L"validationEmprunteur";
			this->validationEmprunteur->Size = System::Drawing::Size(143, 40);
			this->validationEmprunteur->TabIndex = 18;
			this->validationEmprunteur->Text = L"Valider";
			this->validationEmprunteur->UseVisualStyleBackColor = true;
			this->validationEmprunteur->Click += gcnew System::EventHandler(this, &Form1::validationEmprunteur_Click);
			// 
			// conducteuraditionnel
			// 
			this->conducteuraditionnel->Controls->Add(this->conducteur1);
			this->conducteuraditionnel->Controls->Add(this->conducteur2);
			this->conducteuraditionnel->Controls->Add(this->conducteur3);
			this->conducteuraditionnel->Controls->Add(this->conducteur4);
			this->conducteuraditionnel->Location = System::Drawing::Point(674, 338);
			this->conducteuraditionnel->Name = L"conducteuraditionnel";
			this->conducteuraditionnel->SelectedIndex = 0;
			this->conducteuraditionnel->Size = System::Drawing::Size(304, 295);
			this->conducteuraditionnel->TabIndex = 17;
			// 
			// conducteur1
			// 
			this->conducteur1->Controls->Add(this->groupBox5);
			this->conducteur1->Controls->Add(this->textBox_conducteur1_prenom);
			this->conducteur1->Controls->Add(this->label11);
			this->conducteur1->Controls->Add(this->dateTimePicker_conducteur1_naissance);
			this->conducteur1->Controls->Add(this->label8);
			this->conducteur1->Controls->Add(this->textBox2);
			this->conducteur1->Controls->Add(this->textBox_conducteur1_nom);
			this->conducteur1->Controls->Add(this->label9);
			this->conducteur1->Controls->Add(this->label10);
			this->conducteur1->Location = System::Drawing::Point(4, 22);
			this->conducteur1->Name = L"conducteur1";
			this->conducteur1->Padding = System::Windows::Forms::Padding(3);
			this->conducteur1->Size = System::Drawing::Size(296, 269);
			this->conducteur1->TabIndex = 0;
			this->conducteur1->Text = L"Conducteur 1";
			this->conducteur1->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->checkBox_conduteur1_permismoto);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->dateTimePicker_conducteur1_expirepermis);
			this->groupBox5->Controls->Add(this->dateTimePicker_conducteur1_delivrepermis);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->textBox_conducteur1_numpermis);
			this->groupBox5->Controls->Add(this->checkBox_conducteur1_permisvoiture);
			this->groupBox5->Location = System::Drawing::Point(22, 99);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(257, 145);
			this->groupBox5->TabIndex = 15;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Permis";
			// 
			// checkBox_conduteur1_permismoto
			// 
			this->checkBox_conduteur1_permismoto->AutoSize = true;
			this->checkBox_conduteur1_permismoto->Location = System::Drawing::Point(107, 27);
			this->checkBox_conduteur1_permismoto->Name = L"checkBox_conduteur1_permismoto";
			this->checkBox_conduteur1_permismoto->Size = System::Drawing::Size(84, 17);
			this->checkBox_conduteur1_permismoto->TabIndex = 18;
			this->checkBox_conduteur1_permismoto->Text = L"Permis Moto";
			this->checkBox_conduteur1_permismoto->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(5, 96);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(106, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L" Date de délivrance :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 121);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(113, 13);
			this->label13->TabIndex = 16;
			this->label13->Text = L"  Date de d\'expiration :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(393, 66);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 15;
			// 
			// dateTimePicker_conducteur1_expirepermis
			// 
			this->dateTimePicker_conducteur1_expirepermis->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur1_expirepermis->Location = System::Drawing::Point(144, 117);
			this->dateTimePicker_conducteur1_expirepermis->Name = L"dateTimePicker_conducteur1_expirepermis";
			this->dateTimePicker_conducteur1_expirepermis->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur1_expirepermis->TabIndex = 14;
			// 
			// dateTimePicker_conducteur1_delivrepermis
			// 
			this->dateTimePicker_conducteur1_delivrepermis->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur1_delivrepermis->Location = System::Drawing::Point(144, 92);
			this->dateTimePicker_conducteur1_delivrepermis->Name = L"dateTimePicker_conducteur1_delivrepermis";
			this->dateTimePicker_conducteur1_delivrepermis->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur1_delivrepermis->TabIndex = 13;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(5, 47);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(163, 13);
			this->label15->TabIndex = 12;
			this->label15->Text = L" Numéro de permis de conduire : ";
			// 
			// textBox_conducteur1_numpermis
			// 
			this->textBox_conducteur1_numpermis->Location = System::Drawing::Point(15, 66);
			this->textBox_conducteur1_numpermis->Name = L"textBox_conducteur1_numpermis";
			this->textBox_conducteur1_numpermis->Size = System::Drawing::Size(224, 20);
			this->textBox_conducteur1_numpermis->TabIndex = 11;
			// 
			// checkBox_conducteur1_permisvoiture
			// 
			this->checkBox_conducteur1_permisvoiture->AutoSize = true;
			this->checkBox_conducteur1_permisvoiture->Location = System::Drawing::Point(8, 27);
			this->checkBox_conducteur1_permisvoiture->Name = L"checkBox_conducteur1_permisvoiture";
			this->checkBox_conducteur1_permisvoiture->Size = System::Drawing::Size(93, 17);
			this->checkBox_conducteur1_permisvoiture->TabIndex = 10;
			this->checkBox_conducteur1_permisvoiture->Text = L"Permis Voiture";
			this->checkBox_conducteur1_permisvoiture->UseVisualStyleBackColor = true;
			// 
			// textBox_conducteur1_prenom
			// 
			this->textBox_conducteur1_prenom->Location = System::Drawing::Point(94, 32);
			this->textBox_conducteur1_prenom->Name = L"textBox_conducteur1_prenom";
			this->textBox_conducteur1_prenom->Size = System::Drawing::Size(196, 20);
			this->textBox_conducteur1_prenom->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(19, 32);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 18);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Prénom :";
			// 
			// dateTimePicker_conducteur1_naissance
			// 
			this->dateTimePicker_conducteur1_naissance->CalendarTitleBackColor = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker_conducteur1_naissance->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur1_naissance->Location = System::Drawing::Point(166, 61);
			this->dateTimePicker_conducteur1_naissance->Name = L"dateTimePicker_conducteur1_naissance";
			this->dateTimePicker_conducteur1_naissance->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur1_naissance->TabIndex = 12;
			this->dateTimePicker_conducteur1_naissance->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker6_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(19, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 18);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Date de Naissance :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(400, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox_conducteur1_nom
			// 
			this->textBox_conducteur1_nom->Location = System::Drawing::Point(94, 6);
			this->textBox_conducteur1_nom->Name = L"textBox_conducteur1_nom";
			this->textBox_conducteur1_nom->Size = System::Drawing::Size(196, 20);
			this->textBox_conducteur1_nom->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(307, 6);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 24);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Prénom :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(19, 6);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 18);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Nom :";
			// 
			// conducteur2
			// 
			this->conducteur2->Controls->Add(this->groupBox6);
			this->conducteur2->Controls->Add(this->textBox_conducteur2_prenom);
			this->conducteur2->Controls->Add(this->label20);
			this->conducteur2->Controls->Add(this->dateTimePicker_conducteur2_naissance);
			this->conducteur2->Controls->Add(this->label21);
			this->conducteur2->Controls->Add(this->textBox_conducteur2_nom);
			this->conducteur2->Controls->Add(this->label22);
			this->conducteur2->Location = System::Drawing::Point(4, 22);
			this->conducteur2->Name = L"conducteur2";
			this->conducteur2->Padding = System::Windows::Forms::Padding(3);
			this->conducteur2->Size = System::Drawing::Size(296, 269);
			this->conducteur2->TabIndex = 1;
			this->conducteur2->Text = L"Conducteur 2";
			this->conducteur2->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->checkBox_conducteur2_permismoto);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Controls->Add(this->label17);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Controls->Add(this->dateTimePicker_conducteur2_expirepermis);
			this->groupBox6->Controls->Add(this->dateTimePicker_conducteur2_delivrepermis);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->textBox_conducteur2_numpermis);
			this->groupBox6->Controls->Add(this->checkBox_conducteur2_permisvoiture);
			this->groupBox6->Location = System::Drawing::Point(16, 108);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(257, 145);
			this->groupBox6->TabIndex = 22;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Permis";
			// 
			// checkBox_conducteur2_permismoto
			// 
			this->checkBox_conducteur2_permismoto->AutoSize = true;
			this->checkBox_conducteur2_permismoto->Location = System::Drawing::Point(107, 27);
			this->checkBox_conducteur2_permismoto->Name = L"checkBox_conducteur2_permismoto";
			this->checkBox_conducteur2_permismoto->Size = System::Drawing::Size(84, 17);
			this->checkBox_conducteur2_permismoto->TabIndex = 18;
			this->checkBox_conducteur2_permismoto->Text = L"Permis Moto";
			this->checkBox_conducteur2_permismoto->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(5, 96);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(106, 13);
			this->label16->TabIndex = 17;
			this->label16->Text = L" Date de délivrance :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(4, 121);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(110, 13);
			this->label17->TabIndex = 16;
			this->label17->Text = L" Date de d\'expiration :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(393, 66);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 13);
			this->label18->TabIndex = 15;
			// 
			// dateTimePicker_conducteur2_expirepermis
			// 
			this->dateTimePicker_conducteur2_expirepermis->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur2_expirepermis->Location = System::Drawing::Point(144, 117);
			this->dateTimePicker_conducteur2_expirepermis->Name = L"dateTimePicker_conducteur2_expirepermis";
			this->dateTimePicker_conducteur2_expirepermis->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur2_expirepermis->TabIndex = 14;
			// 
			// dateTimePicker_conducteur2_delivrepermis
			// 
			this->dateTimePicker_conducteur2_delivrepermis->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur2_delivrepermis->Location = System::Drawing::Point(144, 92);
			this->dateTimePicker_conducteur2_delivrepermis->Name = L"dateTimePicker_conducteur2_delivrepermis";
			this->dateTimePicker_conducteur2_delivrepermis->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur2_delivrepermis->TabIndex = 13;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(5, 47);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(163, 13);
			this->label19->TabIndex = 12;
			this->label19->Text = L" Numéro de permis de conduire : ";
			// 
			// textBox_conducteur2_numpermis
			// 
			this->textBox_conducteur2_numpermis->Location = System::Drawing::Point(15, 66);
			this->textBox_conducteur2_numpermis->Name = L"textBox_conducteur2_numpermis";
			this->textBox_conducteur2_numpermis->Size = System::Drawing::Size(224, 20);
			this->textBox_conducteur2_numpermis->TabIndex = 11;
			// 
			// checkBox_conducteur2_permisvoiture
			// 
			this->checkBox_conducteur2_permisvoiture->AutoSize = true;
			this->checkBox_conducteur2_permisvoiture->Location = System::Drawing::Point(8, 27);
			this->checkBox_conducteur2_permisvoiture->Name = L"checkBox_conducteur2_permisvoiture";
			this->checkBox_conducteur2_permisvoiture->Size = System::Drawing::Size(93, 17);
			this->checkBox_conducteur2_permisvoiture->TabIndex = 10;
			this->checkBox_conducteur2_permisvoiture->Text = L"Permis Voiture";
			this->checkBox_conducteur2_permisvoiture->UseVisualStyleBackColor = true;
			// 
			// textBox_conducteur2_prenom
			// 
			this->textBox_conducteur2_prenom->Location = System::Drawing::Point(88, 41);
			this->textBox_conducteur2_prenom->Name = L"textBox_conducteur2_prenom";
			this->textBox_conducteur2_prenom->Size = System::Drawing::Size(196, 20);
			this->textBox_conducteur2_prenom->TabIndex = 21;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(13, 41);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(69, 18);
			this->label20->TabIndex = 20;
			this->label20->Text = L"Prénom :";
			// 
			// dateTimePicker_conducteur2_naissance
			// 
			this->dateTimePicker_conducteur2_naissance->CalendarTitleBackColor = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker_conducteur2_naissance->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur2_naissance->Location = System::Drawing::Point(160, 70);
			this->dateTimePicker_conducteur2_naissance->Name = L"dateTimePicker_conducteur2_naissance";
			this->dateTimePicker_conducteur2_naissance->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur2_naissance->TabIndex = 19;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(13, 72);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(141, 18);
			this->label21->TabIndex = 18;
			this->label21->Text = L"Date de Naissance :";
			// 
			// textBox_conducteur2_nom
			// 
			this->textBox_conducteur2_nom->Location = System::Drawing::Point(88, 15);
			this->textBox_conducteur2_nom->Name = L"textBox_conducteur2_nom";
			this->textBox_conducteur2_nom->Size = System::Drawing::Size(196, 20);
			this->textBox_conducteur2_nom->TabIndex = 17;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(13, 15);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 18);
			this->label22->TabIndex = 16;
			this->label22->Text = L"Nom :";
			// 
			// conducteur3
			// 
			this->conducteur3->Controls->Add(this->groupBox7);
			this->conducteur3->Controls->Add(this->textBox_conducteur3_prenom);
			this->conducteur3->Controls->Add(this->label27);
			this->conducteur3->Controls->Add(this->dateTimePicker_conducteur3_naissance);
			this->conducteur3->Controls->Add(this->label28);
			this->conducteur3->Controls->Add(this->textBox_conducteur3_nom);
			this->conducteur3->Controls->Add(this->label29);
			this->conducteur3->Location = System::Drawing::Point(4, 22);
			this->conducteur3->Name = L"conducteur3";
			this->conducteur3->Padding = System::Windows::Forms::Padding(3);
			this->conducteur3->Size = System::Drawing::Size(296, 269);
			this->conducteur3->TabIndex = 2;
			this->conducteur3->Text = L"Conducteur 3";
			this->conducteur3->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->checkBox_conducteur3_permismoto);
			this->groupBox7->Controls->Add(this->label23);
			this->groupBox7->Controls->Add(this->label24);
			this->groupBox7->Controls->Add(this->label25);
			this->groupBox7->Controls->Add(this->dateTimePicker_conducteur3_expirepermis);
			this->groupBox7->Controls->Add(this->dateTimePicker_conducteur3_delivrepermis);
			this->groupBox7->Controls->Add(this->label26);
			this->groupBox7->Controls->Add(this->textBox_conducteur3_numpermis);
			this->groupBox7->Controls->Add(this->checkBox_conducteur3_permisvoiture);
			this->groupBox7->Location = System::Drawing::Point(16, 108);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(257, 145);
			this->groupBox7->TabIndex = 22;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Permis";
			// 
			// checkBox_conducteur3_permismoto
			// 
			this->checkBox_conducteur3_permismoto->AutoSize = true;
			this->checkBox_conducteur3_permismoto->Location = System::Drawing::Point(107, 27);
			this->checkBox_conducteur3_permismoto->Name = L"checkBox_conducteur3_permismoto";
			this->checkBox_conducteur3_permismoto->Size = System::Drawing::Size(84, 17);
			this->checkBox_conducteur3_permismoto->TabIndex = 18;
			this->checkBox_conducteur3_permismoto->Text = L"Permis Moto";
			this->checkBox_conducteur3_permismoto->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(5, 96);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(106, 13);
			this->label23->TabIndex = 17;
			this->label23->Text = L" Date de délivrance :";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(3, 121);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(116, 13);
			this->label24->TabIndex = 16;
			this->label24->Text = L"   Date de d\'expiration :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(393, 66);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 13);
			this->label25->TabIndex = 15;
			// 
			// dateTimePicker_conducteur3_expirepermis
			// 
			this->dateTimePicker_conducteur3_expirepermis->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur3_expirepermis->Location = System::Drawing::Point(144, 117);
			this->dateTimePicker_conducteur3_expirepermis->Name = L"dateTimePicker_conducteur3_expirepermis";
			this->dateTimePicker_conducteur3_expirepermis->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur3_expirepermis->TabIndex = 14;
			// 
			// dateTimePicker_conducteur3_delivrepermis
			// 
			this->dateTimePicker_conducteur3_delivrepermis->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur3_delivrepermis->Location = System::Drawing::Point(144, 92);
			this->dateTimePicker_conducteur3_delivrepermis->Name = L"dateTimePicker_conducteur3_delivrepermis";
			this->dateTimePicker_conducteur3_delivrepermis->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur3_delivrepermis->TabIndex = 13;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(5, 47);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(163, 13);
			this->label26->TabIndex = 12;
			this->label26->Text = L" Numéro de permis de conduire : ";
			// 
			// textBox_conducteur3_numpermis
			// 
			this->textBox_conducteur3_numpermis->Location = System::Drawing::Point(15, 66);
			this->textBox_conducteur3_numpermis->Name = L"textBox_conducteur3_numpermis";
			this->textBox_conducteur3_numpermis->Size = System::Drawing::Size(224, 20);
			this->textBox_conducteur3_numpermis->TabIndex = 11;
			// 
			// checkBox_conducteur3_permisvoiture
			// 
			this->checkBox_conducteur3_permisvoiture->AutoSize = true;
			this->checkBox_conducteur3_permisvoiture->Location = System::Drawing::Point(8, 27);
			this->checkBox_conducteur3_permisvoiture->Name = L"checkBox_conducteur3_permisvoiture";
			this->checkBox_conducteur3_permisvoiture->Size = System::Drawing::Size(93, 17);
			this->checkBox_conducteur3_permisvoiture->TabIndex = 10;
			this->checkBox_conducteur3_permisvoiture->Text = L"Permis Voiture";
			this->checkBox_conducteur3_permisvoiture->UseVisualStyleBackColor = true;
			// 
			// textBox_conducteur3_prenom
			// 
			this->textBox_conducteur3_prenom->Location = System::Drawing::Point(88, 41);
			this->textBox_conducteur3_prenom->Name = L"textBox_conducteur3_prenom";
			this->textBox_conducteur3_prenom->Size = System::Drawing::Size(196, 20);
			this->textBox_conducteur3_prenom->TabIndex = 21;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(13, 41);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(69, 18);
			this->label27->TabIndex = 20;
			this->label27->Text = L"Prénom :";
			// 
			// dateTimePicker_conducteur3_naissance
			// 
			this->dateTimePicker_conducteur3_naissance->CalendarTitleBackColor = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker_conducteur3_naissance->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur3_naissance->Location = System::Drawing::Point(160, 70);
			this->dateTimePicker_conducteur3_naissance->Name = L"dateTimePicker_conducteur3_naissance";
			this->dateTimePicker_conducteur3_naissance->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur3_naissance->TabIndex = 19;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(13, 72);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(141, 18);
			this->label28->TabIndex = 18;
			this->label28->Text = L"Date de Naissance :";
			// 
			// textBox_conducteur3_nom
			// 
			this->textBox_conducteur3_nom->Location = System::Drawing::Point(88, 15);
			this->textBox_conducteur3_nom->Name = L"textBox_conducteur3_nom";
			this->textBox_conducteur3_nom->Size = System::Drawing::Size(196, 20);
			this->textBox_conducteur3_nom->TabIndex = 17;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(13, 15);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(49, 18);
			this->label29->TabIndex = 16;
			this->label29->Text = L"Nom :";
			// 
			// conducteur4
			// 
			this->conducteur4->Controls->Add(this->groupBox8);
			this->conducteur4->Controls->Add(this->textBox_conducteur4_prenom);
			this->conducteur4->Controls->Add(this->label34);
			this->conducteur4->Controls->Add(this->dateTimePicker_conducteur4_naissance);
			this->conducteur4->Controls->Add(this->label35);
			this->conducteur4->Controls->Add(this->textBox_conducteur4_nom);
			this->conducteur4->Controls->Add(this->label36);
			this->conducteur4->Location = System::Drawing::Point(4, 22);
			this->conducteur4->Name = L"conducteur4";
			this->conducteur4->Padding = System::Windows::Forms::Padding(3);
			this->conducteur4->Size = System::Drawing::Size(296, 269);
			this->conducteur4->TabIndex = 3;
			this->conducteur4->Text = L"Conducteur 4";
			this->conducteur4->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->checkBox_conducteur4_permismoto);
			this->groupBox8->Controls->Add(this->label30);
			this->groupBox8->Controls->Add(this->label31);
			this->groupBox8->Controls->Add(this->label32);
			this->groupBox8->Controls->Add(this->dateTimePicker_conducteur4_expirepermis);
			this->groupBox8->Controls->Add(this->dateTimePicker_conducteur4_delivrepermis);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->textBox_conducteur4_numpermis);
			this->groupBox8->Controls->Add(this->checkBox_conducteur4_permisvoiture);
			this->groupBox8->Location = System::Drawing::Point(16, 108);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(257, 145);
			this->groupBox8->TabIndex = 22;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Permis";
			// 
			// checkBox_conducteur4_permismoto
			// 
			this->checkBox_conducteur4_permismoto->AutoSize = true;
			this->checkBox_conducteur4_permismoto->Location = System::Drawing::Point(107, 27);
			this->checkBox_conducteur4_permismoto->Name = L"checkBox_conducteur4_permismoto";
			this->checkBox_conducteur4_permismoto->Size = System::Drawing::Size(84, 17);
			this->checkBox_conducteur4_permismoto->TabIndex = 18;
			this->checkBox_conducteur4_permismoto->Text = L"Permis Moto";
			this->checkBox_conducteur4_permismoto->UseVisualStyleBackColor = true;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(5, 96);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(106, 13);
			this->label30->TabIndex = 17;
			this->label30->Text = L" Date de délivrance :";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(4, 121);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(106, 13);
			this->label31->TabIndex = 16;
			this->label31->Text = L" Date de délivrance :";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(393, 66);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(0, 13);
			this->label32->TabIndex = 15;
			// 
			// dateTimePicker_conducteur4_expirepermis
			// 
			this->dateTimePicker_conducteur4_expirepermis->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur4_expirepermis->Location = System::Drawing::Point(144, 117);
			this->dateTimePicker_conducteur4_expirepermis->Name = L"dateTimePicker_conducteur4_expirepermis";
			this->dateTimePicker_conducteur4_expirepermis->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur4_expirepermis->TabIndex = 14;
			// 
			// dateTimePicker_conducteur4_delivrepermis
			// 
			this->dateTimePicker_conducteur4_delivrepermis->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur4_delivrepermis->Location = System::Drawing::Point(144, 92);
			this->dateTimePicker_conducteur4_delivrepermis->Name = L"dateTimePicker_conducteur4_delivrepermis";
			this->dateTimePicker_conducteur4_delivrepermis->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur4_delivrepermis->TabIndex = 13;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(5, 47);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(163, 13);
			this->label33->TabIndex = 12;
			this->label33->Text = L" Numéro de permis de conduire : ";
			// 
			// textBox_conducteur4_numpermis
			// 
			this->textBox_conducteur4_numpermis->Location = System::Drawing::Point(15, 66);
			this->textBox_conducteur4_numpermis->Name = L"textBox_conducteur4_numpermis";
			this->textBox_conducteur4_numpermis->Size = System::Drawing::Size(224, 20);
			this->textBox_conducteur4_numpermis->TabIndex = 11;
			// 
			// checkBox_conducteur4_permisvoiture
			// 
			this->checkBox_conducteur4_permisvoiture->AutoSize = true;
			this->checkBox_conducteur4_permisvoiture->Location = System::Drawing::Point(8, 27);
			this->checkBox_conducteur4_permisvoiture->Name = L"checkBox_conducteur4_permisvoiture";
			this->checkBox_conducteur4_permisvoiture->Size = System::Drawing::Size(93, 17);
			this->checkBox_conducteur4_permisvoiture->TabIndex = 10;
			this->checkBox_conducteur4_permisvoiture->Text = L"Permis Voiture";
			this->checkBox_conducteur4_permisvoiture->UseVisualStyleBackColor = true;
			// 
			// textBox_conducteur4_prenom
			// 
			this->textBox_conducteur4_prenom->Location = System::Drawing::Point(88, 41);
			this->textBox_conducteur4_prenom->Name = L"textBox_conducteur4_prenom";
			this->textBox_conducteur4_prenom->Size = System::Drawing::Size(196, 20);
			this->textBox_conducteur4_prenom->TabIndex = 21;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(13, 41);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(69, 18);
			this->label34->TabIndex = 20;
			this->label34->Text = L"Prénom :";
			// 
			// dateTimePicker_conducteur4_naissance
			// 
			this->dateTimePicker_conducteur4_naissance->CalendarTitleBackColor = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker_conducteur4_naissance->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_conducteur4_naissance->Location = System::Drawing::Point(160, 70);
			this->dateTimePicker_conducteur4_naissance->Name = L"dateTimePicker_conducteur4_naissance";
			this->dateTimePicker_conducteur4_naissance->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_conducteur4_naissance->TabIndex = 19;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(13, 72);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(141, 18);
			this->label35->TabIndex = 18;
			this->label35->Text = L"Date de Naissance :";
			// 
			// textBox_conducteur4_nom
			// 
			this->textBox_conducteur4_nom->Location = System::Drawing::Point(88, 15);
			this->textBox_conducteur4_nom->Name = L"textBox_conducteur4_nom";
			this->textBox_conducteur4_nom->Size = System::Drawing::Size(196, 20);
			this->textBox_conducteur4_nom->TabIndex = 17;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(13, 15);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(49, 18);
			this->label36->TabIndex = 16;
			this->label36->Text = L"Nom :";
			// 
			// groupBox_permismoto
			// 
			this->groupBox_permismoto->Controls->Add(this->label4);
			this->groupBox_permismoto->Controls->Add(this->label5);
			this->groupBox_permismoto->Controls->Add(this->label6);
			this->groupBox_permismoto->Controls->Add(this->dateTimePicker_expirepermismoto);
			this->groupBox_permismoto->Controls->Add(this->dateTimePicker_delivrepermismoto);
			this->groupBox_permismoto->Controls->Add(this->label7);
			this->groupBox_permismoto->Controls->Add(this->checkBox_permismoto);
			this->groupBox_permismoto->Controls->Add(this->textBox_numpermismoto);
			this->groupBox_permismoto->Location = System::Drawing::Point(49, 452);
			this->groupBox_permismoto->Name = L"groupBox_permismoto";
			this->groupBox_permismoto->Size = System::Drawing::Size(591, 93);
			this->groupBox_permismoto->TabIndex = 16;
			this->groupBox_permismoto->TabStop = false;
			this->groupBox_permismoto->Text = L"Permis Moto";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(171, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L" Date de délivrance :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(376, 66);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L" Date de d\'expiration :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(393, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 15;
			// 
			// dateTimePicker_expirepermismoto
			// 
			this->dateTimePicker_expirepermismoto->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_expirepermismoto->Location = System::Drawing::Point(488, 62);
			this->dateTimePicker_expirepermismoto->Name = L"dateTimePicker_expirepermismoto";
			this->dateTimePicker_expirepermismoto->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_expirepermismoto->TabIndex = 14;
			// 
			// dateTimePicker_delivrepermismoto
			// 
			this->dateTimePicker_delivrepermismoto->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_delivrepermismoto->Location = System::Drawing::Point(283, 62);
			this->dateTimePicker_delivrepermismoto->Name = L"dateTimePicker_delivrepermismoto";
			this->dateTimePicker_delivrepermismoto->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_delivrepermismoto->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(147, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(163, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L" Numéro de permis de conduire : ";
			// 
			// checkBox_permismoto
			// 
			this->checkBox_permismoto->AutoSize = true;
			this->checkBox_permismoto->Location = System::Drawing::Point(7, 27);
			this->checkBox_permismoto->Name = L"checkBox_permismoto";
			this->checkBox_permismoto->Size = System::Drawing::Size(84, 17);
			this->checkBox_permismoto->TabIndex = 9;
			this->checkBox_permismoto->Text = L"Permis Moto";
			this->checkBox_permismoto->UseVisualStyleBackColor = true;
			// 
			// textBox_numpermismoto
			// 
			this->textBox_numpermismoto->Location = System::Drawing::Point(316, 24);
			this->textBox_numpermismoto->Name = L"textBox_numpermismoto";
			this->textBox_numpermismoto->Size = System::Drawing::Size(258, 20);
			this->textBox_numpermismoto->TabIndex = 11;
			// 
			// groupBox_locationeffectue
			// 
			this->groupBox_locationeffectue->Controls->Add(this->dataGridView_locationeffetue);
			this->groupBox_locationeffectue->Location = System::Drawing::Point(674, 165);
			this->groupBox_locationeffectue->Name = L"groupBox_locationeffectue";
			this->groupBox_locationeffectue->Size = System::Drawing::Size(306, 161);
			this->groupBox_locationeffectue->TabIndex = 14;
			this->groupBox_locationeffectue->TabStop = false;
			this->groupBox_locationeffectue->Text = L"Locations effectuées";
			// 
			// dataGridView_locationeffetue
			// 
			this->dataGridView_locationeffetue->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_locationeffetue->Location = System::Drawing::Point(9, 20);
			this->dataGridView_locationeffetue->Name = L"dataGridView_locationeffetue";
			this->dataGridView_locationeffetue->Size = System::Drawing::Size(291, 130);
			this->dataGridView_locationeffetue->TabIndex = 0;
			// 
			// groupBox_locationencours
			// 
			this->groupBox_locationencours->Controls->Add(this->dataGridView_locationencours);
			this->groupBox_locationencours->Location = System::Drawing::Point(674, 1);
			this->groupBox_locationencours->Name = L"groupBox_locationencours";
			this->groupBox_locationencours->Size = System::Drawing::Size(306, 161);
			this->groupBox_locationencours->TabIndex = 13;
			this->groupBox_locationencours->TabStop = false;
			this->groupBox_locationencours->Text = L"Locations en cours";
			// 
			// dataGridView_locationencours
			// 
			this->dataGridView_locationencours->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_locationencours->Location = System::Drawing::Point(8, 17);
			this->dataGridView_locationencours->Name = L"dataGridView_locationencours";
			this->dataGridView_locationencours->Size = System::Drawing::Size(291, 130);
			this->dataGridView_locationencours->TabIndex = 1;
			// 
			// groupBox_permisvoiture
			// 
			this->groupBox_permisvoiture->Controls->Add(this->label3);
			this->groupBox_permisvoiture->Controls->Add(this->label2);
			this->groupBox_permisvoiture->Controls->Add(this->label1);
			this->groupBox_permisvoiture->Controls->Add(this->dateTimePicker_expirepermisvoiture);
			this->groupBox_permisvoiture->Controls->Add(this->dateTimePicker_delivrepermisvoiture);
			this->groupBox_permisvoiture->Controls->Add(this->Numpermisdeconduire);
			this->groupBox_permisvoiture->Controls->Add(this->textBox_permisdeconduire);
			this->groupBox_permisvoiture->Controls->Add(this->checkBox_permisvoiture);
			this->groupBox_permisvoiture->Location = System::Drawing::Point(51, 348);
			this->groupBox_permisvoiture->Name = L"groupBox_permisvoiture";
			this->groupBox_permisvoiture->Size = System::Drawing::Size(591, 93);
			this->groupBox_permisvoiture->TabIndex = 12;
			this->groupBox_permisvoiture->TabStop = false;
			this->groupBox_permisvoiture->Text = L"Permis Voiture";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(171, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L" Date de délivrance :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(376, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L" Date de d\'expiration :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(393, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 15;
			// 
			// dateTimePicker_expirepermisvoiture
			// 
			this->dateTimePicker_expirepermisvoiture->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_expirepermisvoiture->Location = System::Drawing::Point(488, 62);
			this->dateTimePicker_expirepermisvoiture->Name = L"dateTimePicker_expirepermisvoiture";
			this->dateTimePicker_expirepermisvoiture->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_expirepermisvoiture->TabIndex = 14;
			// 
			// dateTimePicker_delivrepermisvoiture
			// 
			this->dateTimePicker_delivrepermisvoiture->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_delivrepermisvoiture->Location = System::Drawing::Point(283, 62);
			this->dateTimePicker_delivrepermisvoiture->Name = L"dateTimePicker_delivrepermisvoiture";
			this->dateTimePicker_delivrepermisvoiture->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker_delivrepermisvoiture->TabIndex = 13;
			// 
			// Numpermisdeconduire
			// 
			this->Numpermisdeconduire->AutoSize = true;
			this->Numpermisdeconduire->Location = System::Drawing::Point(147, 28);
			this->Numpermisdeconduire->Name = L"Numpermisdeconduire";
			this->Numpermisdeconduire->Size = System::Drawing::Size(163, 13);
			this->Numpermisdeconduire->TabIndex = 12;
			this->Numpermisdeconduire->Text = L" Numéro de permis de conduire : ";
			// 
			// textBox_permisdeconduire
			// 
			this->textBox_permisdeconduire->Location = System::Drawing::Point(316, 24);
			this->textBox_permisdeconduire->Name = L"textBox_permisdeconduire";
			this->textBox_permisdeconduire->Size = System::Drawing::Size(258, 20);
			this->textBox_permisdeconduire->TabIndex = 11;
			// 
			// checkBox_permisvoiture
			// 
			this->checkBox_permisvoiture->AutoSize = true;
			this->checkBox_permisvoiture->Location = System::Drawing::Point(8, 27);
			this->checkBox_permisvoiture->Name = L"checkBox_permisvoiture";
			this->checkBox_permisvoiture->Size = System::Drawing::Size(93, 17);
			this->checkBox_permisvoiture->TabIndex = 10;
			this->checkBox_permisvoiture->Text = L"Permis Voiture";
			this->checkBox_permisvoiture->UseVisualStyleBackColor = true;
			// 
			// Groupebox_Adresse
			// 
			this->Groupebox_Adresse->Controls->Add(this->textBox_Ville);
			this->Groupebox_Adresse->Controls->Add(this->label_New_Ville);
			this->Groupebox_Adresse->Controls->Add(this->TextBox_CodePostal);
			this->Groupebox_Adresse->Controls->Add(this->label_New_Codepostal);
			this->Groupebox_Adresse->Controls->Add(this->label_New_Rue);
			this->Groupebox_Adresse->Controls->Add(this->textBox_rue);
			this->Groupebox_Adresse->Controls->Add(this->TextBox_Num);
			this->Groupebox_Adresse->Controls->Add(this->label_New_Num);
			this->Groupebox_Adresse->Location = System::Drawing::Point(51, 210);
			this->Groupebox_Adresse->Name = L"Groupebox_Adresse";
			this->Groupebox_Adresse->Size = System::Drawing::Size(593, 116);
			this->Groupebox_Adresse->TabIndex = 8;
			this->Groupebox_Adresse->TabStop = false;
			this->Groupebox_Adresse->Text = L"Adresse :";
			// 
			// textBox_Ville
			// 
			this->textBox_Ville->Location = System::Drawing::Point(232, 56);
			this->textBox_Ville->Name = L"textBox_Ville";
			this->textBox_Ville->Size = System::Drawing::Size(344, 20);
			this->textBox_Ville->TabIndex = 8;
			// 
			// label_New_Ville
			// 
			this->label_New_Ville->AutoSize = true;
			this->label_New_Ville->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_New_Ville->Location = System::Drawing::Point(176, 56);
			this->label_New_Ville->Name = L"label_New_Ville";
			this->label_New_Ville->Size = System::Drawing::Size(50, 20);
			this->label_New_Ville->TabIndex = 7;
			this->label_New_Ville->Text = L"Ville  :";
			// 
			// TextBox_CodePostal
			// 
			this->TextBox_CodePostal->Location = System::Drawing::Point(119, 56);
			this->TextBox_CodePostal->Mask = L"00 000";
			this->TextBox_CodePostal->Name = L"TextBox_CodePostal";
			this->TextBox_CodePostal->Size = System::Drawing::Size(43, 20);
			this->TextBox_CodePostal->TabIndex = 6;
			// 
			// label_New_Codepostal
			// 
			this->label_New_Codepostal->AutoSize = true;
			this->label_New_Codepostal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_New_Codepostal->Location = System::Drawing::Point(6, 56);
			this->label_New_Codepostal->Name = L"label_New_Codepostal";
			this->label_New_Codepostal->Size = System::Drawing::Size(107, 20);
			this->label_New_Codepostal->TabIndex = 3;
			this->label_New_Codepostal->Text = L"Code Postal  :";
			// 
			// label_New_Rue
			// 
			this->label_New_Rue->AutoSize = true;
			this->label_New_Rue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_New_Rue->Location = System::Drawing::Point(83, 19);
			this->label_New_Rue->Name = L"label_New_Rue";
			this->label_New_Rue->Size = System::Drawing::Size(51, 20);
			this->label_New_Rue->TabIndex = 5;
			this->label_New_Rue->Text = L"Rue  :";
			// 
			// textBox_rue
			// 
			this->textBox_rue->Location = System::Drawing::Point(135, 19);
			this->textBox_rue->Name = L"textBox_rue";
			this->textBox_rue->Size = System::Drawing::Size(441, 20);
			this->textBox_rue->TabIndex = 4;
			// 
			// TextBox_Num
			// 
			this->TextBox_Num->Location = System::Drawing::Point(43, 21);
			this->TextBox_Num->Mask = L"9999";
			this->TextBox_Num->Name = L"TextBox_Num";
			this->TextBox_Num->Size = System::Drawing::Size(34, 20);
			this->TextBox_Num->TabIndex = 3;
			// 
			// label_New_Num
			// 
			this->label_New_Num->AutoSize = true;
			this->label_New_Num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_New_Num->Location = System::Drawing::Point(6, 21);
			this->label_New_Num->Name = L"label_New_Num";
			this->label_New_Num->Size = System::Drawing::Size(33, 20);
			this->label_New_Num->TabIndex = 2;
			this->label_New_Num->Text = L"N° :";
			// 
			// date_Naissance
			// 
			this->date_Naissance->CalendarTitleBackColor = System::Drawing::SystemColors::HotTrack;
			this->date_Naissance->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date_Naissance->Location = System::Drawing::Point(229, 127);
			this->date_Naissance->Name = L"date_Naissance";
			this->date_Naissance->Size = System::Drawing::Size(86, 20);
			this->date_Naissance->TabIndex = 6;
			// 
			// label_New_DateNaissance
			// 
			this->label_New_DateNaissance->AutoSize = true;
			this->label_New_DateNaissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_New_DateNaissance->Location = System::Drawing::Point(45, 122);
			this->label_New_DateNaissance->Name = L"label_New_DateNaissance";
			this->label_New_DateNaissance->Size = System::Drawing::Size(178, 24);
			this->label_New_DateNaissance->TabIndex = 5;
			this->label_New_DateNaissance->Text = L"Date de Naissance :";
			// 
			// textBox_Prenom
			// 
			this->textBox_Prenom->Location = System::Drawing::Point(426, 89);
			this->textBox_Prenom->Name = L"textBox_Prenom";
			this->textBox_Prenom->Size = System::Drawing::Size(216, 20);
			this->textBox_Prenom->TabIndex = 4;
			// 
			// textBox_Nom
			// 
			this->textBox_Nom->Location = System::Drawing::Point(112, 89);
			this->textBox_Nom->Name = L"textBox_Nom";
			this->textBox_Nom->Size = System::Drawing::Size(204, 20);
			this->textBox_Nom->TabIndex = 3;
			// 
			// label_New_Prenom
			// 
			this->label_New_Prenom->AutoSize = true;
			this->label_New_Prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_New_Prenom->Location = System::Drawing::Point(333, 89);
			this->label_New_Prenom->Name = L"label_New_Prenom";
			this->label_New_Prenom->Size = System::Drawing::Size(87, 24);
			this->label_New_Prenom->TabIndex = 2;
			this->label_New_Prenom->Text = L"Prénom :";
			// 
			// Label_New_Nom
			// 
			this->Label_New_Nom->AutoSize = true;
			this->Label_New_Nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label_New_Nom->Location = System::Drawing::Point(45, 89);
			this->Label_New_Nom->Name = L"Label_New_Nom";
			this->Label_New_Nom->Size = System::Drawing::Size(61, 24);
			this->Label_New_Nom->TabIndex = 1;
			this->Label_New_Nom->Text = L"Nom :";
			// 
			// NouvelEmprunteur
			// 
			this->NouvelEmprunteur->AutoSize = true;
			this->NouvelEmprunteur->Font = (gcnew System::Drawing::Font(L"Arial Black", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->NouvelEmprunteur->Location = System::Drawing::Point(128, 3);
			this->NouvelEmprunteur->Name = L"NouvelEmprunteur";
			this->NouvelEmprunteur->Size = System::Drawing::Size(354, 45);
			this->NouvelEmprunteur->TabIndex = 0;
			this->NouvelEmprunteur->Text = L"Nouvel Emprunteur";
			this->NouvelEmprunteur->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataListeEmprunteur);
			this->tabPage3->Controls->Add(this->label_listeE_ListeEmprunteur);
			this->tabPage3->Location = System::Drawing::Point(14, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(988, 653);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataListeEmprunteur
			// 
			this->dataListeEmprunteur->AllowUserToAddRows = false;
			this->dataListeEmprunteur->AllowUserToDeleteRows = false;
			this->dataListeEmprunteur->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataListeEmprunteur->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataListeEmprunteur->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataListeEmprunteur->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->ID, 
				this->Nom, this->Prénom, this->Naissance, this->Location});
			this->dataListeEmprunteur->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dataListeEmprunteur->Location = System::Drawing::Point(13, 102);
			this->dataListeEmprunteur->MultiSelect = false;
			this->dataListeEmprunteur->Name = L"dataListeEmprunteur";
			this->dataListeEmprunteur->ReadOnly = true;
			this->dataListeEmprunteur->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataListeEmprunteur->ShowCellErrors = false;
			this->dataListeEmprunteur->ShowEditingIcon = false;
			this->dataListeEmprunteur->ShowRowErrors = false;
			this->dataListeEmprunteur->Size = System::Drawing::Size(969, 545);
			this->dataListeEmprunteur->TabIndex = 3;
			this->dataListeEmprunteur->RowValidating += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &Form1::dataListeEmprunteur_RowValidating);
			this->dataListeEmprunteur->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataListeEmprunteur_CellClick);
			// 
			// ID
			// 
			this->ID->DataPropertyName = L"id";
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Width = 10;
			// 
			// Nom
			// 
			this->Nom->DataPropertyName = L"nom";
			this->Nom->HeaderText = L"Nom";
			this->Nom->Name = L"Nom";
			this->Nom->ReadOnly = true;
			// 
			// Prénom
			// 
			this->Prénom->DataPropertyName = L"prenom";
			this->Prénom->HeaderText = L"Prénom";
			this->Prénom->Name = L"Prénom";
			this->Prénom->ReadOnly = true;
			// 
			// Naissance
			// 
			this->Naissance->HeaderText = L"Date de Naissance";
			this->Naissance->Name = L"Naissance";
			this->Naissance->ReadOnly = true;
			// 
			// Location
			// 
			this->Location->HeaderText = L"Location";
			this->Location->Name = L"Location";
			this->Location->ReadOnly = true;
			// 
			// label_listeE_ListeEmprunteur
			// 
			this->label_listeE_ListeEmprunteur->AutoSize = true;
			this->label_listeE_ListeEmprunteur->Font = (gcnew System::Drawing::Font(L"Arial Black", 24, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_listeE_ListeEmprunteur->Location = System::Drawing::Point(283, 13);
			this->label_listeE_ListeEmprunteur->Name = L"label_listeE_ListeEmprunteur";
			this->label_listeE_ListeEmprunteur->Size = System::Drawing::Size(413, 45);
			this->label_listeE_ListeEmprunteur->TabIndex = 2;
			this->label_listeE_ListeEmprunteur->Text = L"Liste des Emprunteurs";
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(14, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(988, 653);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(14, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(988, 653);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(14, 4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(988, 653);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(14, 4);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(988, 653);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"tabPage7";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->Location = System::Drawing::Point(14, 4);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(988, 653);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"tabPage8";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1009, 686);
			this->Controls->Add(this->TabPage);
			this->Controls->Add(this->menuhaut);
			this->MainMenuStrip = this->menuhaut;
			this->Name = L"Form1";
			this->Text = L"EfreiLoca : La location de véhicule tout simplement";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuhaut->ResumeLayout(false);
			this->menuhaut->PerformLayout();
			this->TabPage->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->conducteuraditionnel->ResumeLayout(false);
			this->conducteur1->ResumeLayout(false);
			this->conducteur1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->conducteur2->ResumeLayout(false);
			this->conducteur2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->conducteur3->ResumeLayout(false);
			this->conducteur3->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->conducteur4->ResumeLayout(false);
			this->conducteur4->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox_permismoto->ResumeLayout(false);
			this->groupBox_permismoto->PerformLayout();
			this->groupBox_locationeffectue->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_locationeffetue))->EndInit();
			this->groupBox_locationencours->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_locationencours))->EndInit();
			this->groupBox_permisvoiture->ResumeLayout(false);
			this->groupBox_permisvoiture->PerformLayout();
			this->Groupebox_Adresse->ResumeLayout(false);
			this->Groupebox_Adresse->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataListeEmprunteur))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->emprunteurBindingSource))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->adresseBindingSource))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->adresseBindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void voitureToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void listeDesEmprunteursToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 AfficherListeDesEmprunteurs();
			 
		 }
private: System::Void nouvelEmprunteurToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 static bool nouv;
			 nouv = true;
			 gestionEmprunteurs::getinstance()->nouveau();
			 chargement();
			 this->TabPage->SelectedIndex = 0;
		 }


private: System::Void AfficherListeDesEmprunteurs(System::Void)
		{
			 
			//this->dataListeEmprunteur->Dispose();
			static bool charger;

			if ( charger != true )
			{
				charger = true;
				gestionEmprunteurs* emp = gestionEmprunteurs::getinstance();
				emp->chargementbegin();
				for (int i=0; i < emp->NbrEmprunteur(); i ++)
				{
					emp->chargementcour();

					String^ champ0 = gcnew String(emp->Emprunteurcourrent->get(1).c_str());
					 String^ champ1 = gcnew String(emp->Emprunteurcourrent->get(2).c_str());
					 String^ champ2 = gcnew String(emp->Emprunteurcourrent->get(3).c_str());
					 String^ champ3 = gcnew String(emp->Emprunteurcourrent->get(4).c_str());
					 
					 array<String^>^row0 = {"",champ0,champ1,champ2,""};
						 DataGridViewRowCollection^ rows = this->dataListeEmprunteur->Rows;
						rows->Add( row0 );
					 //this->dataListeEmprunteur->
						emp->chargementsuiv();
				}
			}
			
			this->TabPage->SelectedIndex = 1;
		}

		 

protected: System::Void validationEmprunteur_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			   static bool trouve;
			   // mettre au format pour l'enregistrement 
			   date_Naissance->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur1_delivrepermis->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur1_expirepermis->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur1_naissance->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur2_delivrepermis->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur2_expirepermis->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur2_naissance->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur3_delivrepermis->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur3_expirepermis->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur3_naissance->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur4_delivrepermis->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur4_expirepermis->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur4_naissance->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_conducteur4_naissance->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_delivrepermismoto->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_delivrepermisvoiture->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_expirepermismoto->CustomFormat = "ddMMyyyy";
			   this->dateTimePicker_expirepermisvoiture->CustomFormat = "ddMMyyyy";	 
			   
		//   Enregistrement dans les fichiers 
			   gestionEmprunteurs* emp = gestionEmprunteurs::getinstance();	
			   
			   emp->Emprunteurcourrent->set(1 , ConvertString (this->textBox_Nom->Text) );
			   emp->Emprunteurcourrent->set(2 , ConvertString (this->textBox_Prenom->Text) );
			   //date_Naissance->Format = DateTimePickerFormat::Custom;
				
				emp->Emprunteurcourrent->set(3 , ConvertString (this->date_Naissance->Text));
			   emp->Emprunteurcourrent->set(4 ,ConvertString (this->textBox_numero_carte_didentite->Text) );
			   emp->Emprunteurcourrent->set(5 ,ConvertString (this->TextBox_Num->Text) );
			   emp->Emprunteurcourrent->set(6 ,ConvertString (this->textBox_rue->Text) );
			   emp->Emprunteurcourrent->set(7 ,ConvertString (this->TextBox_CodePostal->Text) );
			   emp->Emprunteurcourrent->set(8 ,ConvertString (this->textBox_Ville->Text) );
			   
			   if (this->checkBox_permisvoiture->Enabled == true)
				   emp->Emprunteurcourrent->set(9 , "1" );
			   else emp->Emprunteurcourrent->set(9 , "0" );
			   emp->Emprunteurcourrent->set(10,ConvertString (this->textBox_permisdeconduire->Text) );
			   
			   emp->Emprunteurcourrent->set(11 , ConvertString (this->dateTimePicker_delivrepermisvoiture->ToString()));
			   emp->Emprunteurcourrent->set(12 , ConvertString (this->dateTimePicker_expirepermisvoiture->ToString()));
			   if (this->checkBox_permismoto->Enabled == true)
				   emp->Emprunteurcourrent->set(13 , "1" );
			   else emp->Emprunteurcourrent->set(13 , "0" );
			   emp->Emprunteurcourrent->set(14 , ConvertString (this->dateTimePicker_delivrepermismoto->ToString()));
			   emp->Emprunteurcourrent->set(15 , ConvertString (this->dateTimePicker_expirepermisvoiture->ToString()));
			   emp->Emprunteurcourrent->set( 16, ConvertString (this->textBox_numpermismoto->Text));


			   // Les conducteurs 
				   //conducteur 1
				   emp->Emprunteurcourrent->set(18 ,ConvertString (this->textBox_conducteur1_nom->Text ));
			   emp->Emprunteurcourrent->set(19 ,ConvertString (this->textBox_conducteur1_prenom->Text ));
					//date naissance	20
			   if (this->checkBox_conducteur1_permisvoiture->Enabled == true)
				   emp->Emprunteurcourrent->set(21 , "1" );
			   else emp->Emprunteurcourrent->set(21 , "0" );
   			   emp->Emprunteurcourrent->set(22 ,ConvertString (this->textBox_conducteur1_numpermis->Text ));
			   // Dates Permis   23 24
			   if (this->checkBox_conduteur1_permismoto->Enabled == true)
				   emp->Emprunteurcourrent->set(25 , "1" );
			   else emp->Emprunteurcourrent->set(25 , "0" );
			   
			    //conducteur 2
			   emp->Emprunteurcourrent->set(26 ,ConvertString (this->textBox_conducteur2_nom->Text ));
			   emp->Emprunteurcourrent->set(27 ,ConvertString (this->textBox_conducteur2_prenom->Text ));
					//date naissance	28
			   if (this->checkBox_conducteur2_permisvoiture->Enabled == true)
				   emp->Emprunteurcourrent->set(29 , "1" );
			   else emp->Emprunteurcourrent->set(29 , "0" );
			   emp->Emprunteurcourrent->set(30 ,ConvertString (this->textBox_conducteur2_numpermis->Text ));
			   // Dates Permis   31 32
			   if (this->checkBox_conducteur2_permisvoiture->Enabled == true)
				   emp->Emprunteurcourrent->set(33 , "1" );
			   else emp->Emprunteurcourrent->set(33 , "0" );

			   
			    //conducteur 3
			   emp->Emprunteurcourrent->set(34 ,ConvertString (this->textBox_conducteur3_nom->Text ));
			   emp->Emprunteurcourrent->set(35 ,ConvertString (this->textBox_conducteur3_prenom->Text ));
					 //date naissance	36
			   if (this->checkBox_conducteur3_permisvoiture->Enabled == true)
				   emp->Emprunteurcourrent->set(37 , "1" );
			   else emp->Emprunteurcourrent->set(37 , "0" );
			   emp->Emprunteurcourrent->set(38 ,ConvertString (this->textBox_conducteur3_numpermis->Text ));
			   // Dates Permis   39 40
			   if (this->checkBox_conducteur3_permisvoiture->Enabled == true)
				   emp->Emprunteurcourrent->set(41 , "1" );
			   else emp->Emprunteurcourrent->set(41 , "0" );
			   
			    //conducteur 4
			   emp->Emprunteurcourrent->set(42 ,ConvertString (this->textBox_conducteur4_nom->Text ));
			   emp->Emprunteurcourrent->set(43 ,ConvertString (this->textBox_conducteur4_prenom->Text ));
					//date naissance	44
			   if (this->checkBox_conducteur4_permisvoiture->Enabled == true)
				   emp->Emprunteurcourrent->set(45 , "1" );
			   else emp->Emprunteurcourrent->set(45 , "0" );
			   emp->Emprunteurcourrent->set(46 ,ConvertString (this->textBox_conducteur4_numpermis->Text ));
			   // Dates Permis   47 48
			   if (this->checkBox_conducteur4_permisvoiture->Enabled == true)
				   emp->Emprunteurcourrent->set(49 , "1" );
			   else emp->Emprunteurcourrent->set(49 , "0" );

				static bool nouv;
			   
			   if (nouv == true)
			   {
				   emp->ajout();
				    
					// ajout dans la liste des emprunteurs  
				   array<String^>^row0 = {"",this->textBox_Nom->Text,this->textBox_Prenom->Text,this->date_Naissance->Text,""};
						 DataGridViewRowCollection^ rows = this->dataListeEmprunteur->Rows;
						rows->Add( row0 );
						nouv = false;
			   }

			   
			   this->date_Naissance->CustomFormat = "dd/MM/yyyy";
			   this->dateTimePicker_conducteur1_delivrepermis->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur1_expirepermis->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur1_naissance->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur2_delivrepermis->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur2_expirepermis->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur2_naissance->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur3_delivrepermis->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur3_expirepermis->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur3_naissance->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur4_delivrepermis->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur4_expirepermis->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur4_naissance->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_conducteur4_naissance->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_delivrepermismoto->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_delivrepermisvoiture->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_expirepermismoto->CustomFormat =  "dd/MM/yyyy";
			   this->dateTimePicker_expirepermisvoiture->CustomFormat =  "dd/MM/yyyy";
			   AfficherListeDesEmprunteurs();
			   
			   
		 }

private: System::Void dataListeEmprunteur_RowValidating(System::Object^  sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^  e) 
		 {
			 /*int ligne = this->dataListeEmprunteur->CurrentRow->Index;
			 gestionEmprunteurs* emp = gestionEmprunteurs::getinstance();
			 emp->chargement(ligne);

			 String^ modifchamp1 = gcnew String(emp->Emprunteurcourrent->get(1).c_str());
			 this->textBox_Nom->Text = modifchamp1;
			 //this->dataListeEmprunteur->CurrentRow;
			this->TabPage->SelectedIndex = 0;	*/  
		 }
private: System::Void dataListeEmprunteur_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 int ligne = this->dataListeEmprunteur->CurrentRow->Index;
			 gestionEmprunteurs* emp = gestionEmprunteurs::getinstance();
			 emp->chargement(ligne);

			 String^ modifchamp1 = gcnew String(emp->Emprunteurcourrent->get(1).c_str());
			 chargement();
			 //this->textBox_Nom->Text = modifchamp1;
			 //this->dataListeEmprunteur->CurrentRow;
			this->TabPage->SelectedIndex = 0;	
		 }
private: System::Void dateTimePicker6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void chargement(){

				gestionEmprunteurs* emp = gestionEmprunteurs::getinstance();
				String^ S;

				static bool nouv;

				//TODO faire le chargement des Timepickers et des checkboxs:
				/*
				if (nouv != true) 
				{
					S =  gcnew String (emp->Emprunteurcourrent->get(3 ).c_str());
					this->date_Naissance->Text = S;
				}

				
				String^ S1;
					S1 =  gcnew String (emp->Emprunteurcourrent->get(23 ).c_str());
			   this->dateTimePicker_conducteur1_delivrepermis->Text = S1; 
				   S =  gcnew String (emp->Emprunteurcourrent->get(24 ).c_str());
			   this->dateTimePicker_conducteur1_expirepermis->Text = S; 
				   S = gcnew String (emp->Emprunteurcourrent->get(20 ).c_str());
			   this->dateTimePicker_conducteur1_naissance->Text = S;  
				   S =  gcnew String (emp->Emprunteurcourrent->get(31 ).c_str());
			   this->dateTimePicker_conducteur2_delivrepermis->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get( 32).c_str());
			   this->dateTimePicker_conducteur2_expirepermis->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get( 28).c_str());
			   this->dateTimePicker_conducteur2_naissance->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get(39 ).c_str());
			   this->dateTimePicker_conducteur3_delivrepermis->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get( 40).c_str());
			   this->dateTimePicker_conducteur3_expirepermis->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get(36 ).c_str());
			   this->dateTimePicker_conducteur3_naissance->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get( 47).c_str());
			   this->dateTimePicker_conducteur4_delivrepermis->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get( 48).c_str());
			   this->dateTimePicker_conducteur4_expirepermis->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get( 44).c_str());
			   this->dateTimePicker_conducteur4_naissance->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get(14 ).c_str());
			   this->dateTimePicker_delivrepermismoto->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get(11 ).c_str());
			   this->dateTimePicker_delivrepermisvoiture->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get(15 ).c_str());
			   this->dateTimePicker_expirepermismoto->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get(12 ).c_str());
			   this->dateTimePicker_expirepermisvoiture->Text = S; 
				  */
				   S =  gcnew String (emp->Emprunteurcourrent->get( 7).c_str());
			   this->TextBox_CodePostal->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get(18 ).c_str());
			   this->textBox_conducteur1_nom->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get( 22).c_str());
			   this->textBox_conducteur1_numpermis->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get(19 ).c_str());
			   this->textBox_conducteur1_prenom->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get(26 ).c_str());
			   this->textBox_conducteur2_nom->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get( 30).c_str());
			   this->textBox_conducteur2_numpermis->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get(27 ).c_str());
			   this->textBox_conducteur2_prenom->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get( 34).c_str());
			   this->textBox_conducteur3_nom->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get(38 ).c_str());
			   this->textBox_conducteur3_numpermis->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get(35 ).c_str());
			   this->textBox_conducteur3_prenom->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get( 42).c_str());
			   this->textBox_conducteur4_nom->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get(43 ).c_str());
			   this->textBox_conducteur4_numpermis->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get( 46).c_str());
			   this->textBox_conducteur4_prenom->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get(1 ).c_str());
			   this->textBox_Nom->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get( 5).c_str());
			   this->TextBox_Num->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get( 4).c_str());
			   this->textBox_numero_carte_didentite->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get( 16).c_str());
			   this->textBox_numpermismoto->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get( 10).c_str());
			   this->textBox_permisdeconduire->Text = S; 
				   S =  gcnew String (emp->Emprunteurcourrent->get(2 ).c_str());
			   this->textBox_Prenom->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get(8 ).c_str());
			   this->textBox_Ville->Text = S;
				   S =  gcnew String (emp->Emprunteurcourrent->get(6 ).c_str());
			   this->textBox_rue->Text = S; 
		 }

private: System::Void button_precedent_Click(System::Object^  sender, System::EventArgs^  e) {
			 gestionEmprunteurs* emp = gestionEmprunteurs::getinstance();
			 emp->chargementprec();
			 emp->chargementcour();
			 chargement();

		 }
private: System::Void button_suivant_Click(System::Object^  sender, System::EventArgs^  e) {
			gestionEmprunteurs* emp = gestionEmprunteurs::getinstance();
			 emp->chargementsuiv();
			 emp->chargementcour();
			 chargement();
		 }
};
}

