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
	/// Description r�sum�e de Form1
	///
	/// AVERTISSEMENT�: si vous modifiez le nom de cette classe, vous devrez modifier la
	///          propri�t� 'Nom du fichier de ressources' de l'outil de compilation de ressource manag�e
	///          pour tous les fichiers .resx dont d�pend cette classe. Dans le cas contraire,
	///          les concepteurs ne pourront pas interagir correctement avec les ressources
	///          localis�es associ�es � ce formulaire.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		

		Form1(void)  
		{
			InitializeComponent();
			//
			//TODO�: ajoutez ici le code du constructeur
			//
		}

		


	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
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
	private: System::Windows::Forms::ToolStripMenuItem^  listeDesV�hiculesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  voitureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  motoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  listeDesV�hiculesToolStripMenuItem1;
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


	private: System::Windows::Forms::GroupBox^  Adresse;
	private: System::Windows::Forms::MaskedTextBox^  TextBox_Num;

	private: System::Windows::Forms::Label^  label_New_Num;
	private: System::Windows::Forms::Label^  label_New_Rue;
	private: System::Windows::Forms::TextBox^  textBox_rue;
	private: System::Windows::Forms::MaskedTextBox^  TextBox_CodePostal;


	private: System::Windows::Forms::Label^  label_New_Codepostal;
	private: System::Windows::Forms::Label^  label_New_Ville;
	private: System::Windows::Forms::TextBox^  textBox_Ville;
	private: System::Windows::Forms::Label^  label_listeE_ListeEmprunteur;
	private: System::Windows::Forms::DataGridView^  dataGridView1;





	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox_permisdeconduire;
	private: System::Windows::Forms::Label^  Numpermisdeconduire;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStripMenuItem^  configurationToolStripMenuItem;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker4;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TabControl^  conducteuraditionnel;
private: System::Windows::Forms::TabPage^  conducteur1;



private: System::Windows::Forms::DateTimePicker^  dateTimePicker6;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TabPage^  conducteur2;


private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker7;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker8;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker9;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker10;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::CheckBox^  checkBox6;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker11;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TabPage^  conducteur3;

private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::CheckBox^  checkBox7;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker12;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker13;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::CheckBox^  checkBox8;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker14;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TabPage^  conducteur4;

private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::CheckBox^  checkBox9;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker15;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker16;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::CheckBox^  checkBox10;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker17;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Button^  validationEmprunteur;
private: System::Windows::Forms::DataGridView^  dataGridView2;

private: System::Windows::Forms::BindingSource^  adresseBindingSource1;
private: System::Windows::Forms::BindingSource^  adresseBindingSource;
private: System::Windows::Forms::DataGridView^  dataGridView3;
private: System::Windows::Forms::TextBox^  textBox_numero_carte_didentite;

private: System::Windows::Forms::Label^  label_numero_carte_didentite;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nom;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Pr�nom;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Naissance;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Location;
private: System::Windows::Forms::BindingSource^  emprunteurBindingSource;






private: System::ComponentModel::IContainer^  components;





















	protected: 


	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->listeDesV�hiculesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->voitureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->motoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listeDesV�hiculesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->textBox_numero_carte_didentite = (gcnew System::Windows::Forms::TextBox());
			this->label_numero_carte_didentite = (gcnew System::Windows::Forms::Label());
			this->validationEmprunteur = (gcnew System::Windows::Forms::Button());
			this->conducteuraditionnel = (gcnew System::Windows::Forms::TabControl());
			this->conducteur1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker7 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker8 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker6 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->conducteur2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker9 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker10 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker11 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->conducteur3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker12 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker13 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker14 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->conducteur4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker15 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker16 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker17 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker5 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->Numpermisdeconduire = (gcnew System::Windows::Forms::Label());
			this->textBox_permisdeconduire = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->Adresse = (gcnew System::Windows::Forms::GroupBox());
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pr�nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Naissance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Location = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->emprunteurBindingSource = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label_listeE_ListeEmprunteur = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
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
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->Adresse->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
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
			this->vehiculeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->listeDesV�hiculesToolStripMenuItem, 
				this->listeDesV�hiculesToolStripMenuItem1});
			this->vehiculeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"vehiculeToolStripMenuItem.Image")));
			this->vehiculeToolStripMenuItem->Name = L"vehiculeToolStripMenuItem";
			this->vehiculeToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->vehiculeToolStripMenuItem->Text = L"Vehicules";
			// 
			// listeDesV�hiculesToolStripMenuItem
			// 
			this->listeDesV�hiculesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->voitureToolStripMenuItem, 
				this->motoToolStripMenuItem, this->autreToolStripMenuItem});
			this->listeDesV�hiculesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"listeDesV�hiculesToolStripMenuItem.Image")));
			this->listeDesV�hiculesToolStripMenuItem->Name = L"listeDesV�hiculesToolStripMenuItem";
			this->listeDesV�hiculesToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F9;
			this->listeDesV�hiculesToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->listeDesV�hiculesToolStripMenuItem->Text = L"Nouveau";
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
			// listeDesV�hiculesToolStripMenuItem1
			// 
			this->listeDesV�hiculesToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->voitureToolStripMenuItem1, 
				this->motosToolStripMenuItem, this->tousToolStripMenuItem});
			this->listeDesV�hiculesToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"listeDesV�hiculesToolStripMenuItem1.Image")));
			this->listeDesV�hiculesToolStripMenuItem1->Name = L"listeDesV�hiculesToolStripMenuItem1";
			this->listeDesV�hiculesToolStripMenuItem1->ShortcutKeys = System::Windows::Forms::Keys::F4;
			this->listeDesV�hiculesToolStripMenuItem1->Size = System::Drawing::Size(193, 22);
			this->listeDesV�hiculesToolStripMenuItem1->Text = L"Liste des v�hicules";
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
			this->TabPage->SelectedIndex = 0;
			this->TabPage->Size = System::Drawing::Size(1006, 661);
			this->TabPage->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->Controls->Add(this->textBox_numero_carte_didentite);
			this->tabPage2->Controls->Add(this->label_numero_carte_didentite);
			this->tabPage2->Controls->Add(this->validationEmprunteur);
			this->tabPage2->Controls->Add(this->conducteuraditionnel);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->Adresse);
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
			this->label_numero_carte_didentite->Text = L"Num�ro Carte d\'identit� :";
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
			this->conducteur1->Controls->Add(this->textBox4);
			this->conducteur1->Controls->Add(this->label11);
			this->conducteur1->Controls->Add(this->dateTimePicker6);
			this->conducteur1->Controls->Add(this->label8);
			this->conducteur1->Controls->Add(this->textBox2);
			this->conducteur1->Controls->Add(this->textBox3);
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
			this->groupBox5->Controls->Add(this->checkBox4);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->dateTimePicker7);
			this->groupBox5->Controls->Add(this->dateTimePicker8);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Controls->Add(this->checkBox3);
			this->groupBox5->Location = System::Drawing::Point(22, 99);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(257, 145);
			this->groupBox5->TabIndex = 15;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Permis";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(107, 27);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(84, 17);
			this->checkBox4->TabIndex = 18;
			this->checkBox4->Text = L"Permis Moto";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(5, 96);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(106, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L" Date de d�livrance :";
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
			// dateTimePicker7
			// 
			this->dateTimePicker7->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker7->Location = System::Drawing::Point(144, 117);
			this->dateTimePicker7->Name = L"dateTimePicker7";
			this->dateTimePicker7->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker7->TabIndex = 14;
			// 
			// dateTimePicker8
			// 
			this->dateTimePicker8->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker8->Location = System::Drawing::Point(144, 92);
			this->dateTimePicker8->Name = L"dateTimePicker8";
			this->dateTimePicker8->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker8->TabIndex = 13;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(5, 47);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(163, 13);
			this->label15->TabIndex = 12;
			this->label15->Text = L" Num�ro de permis de conduire : ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(15, 66);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(224, 20);
			this->textBox5->TabIndex = 11;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(8, 27);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(93, 17);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Permis Voiture";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(94, 32);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(196, 20);
			this->textBox4->TabIndex = 14;
			
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
			this->label11->Text = L"Pr�nom :";
			
			// 
			// dateTimePicker6
			// 
			this->dateTimePicker6->CalendarTitleBackColor = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker6->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker6->Location = System::Drawing::Point(166, 61);
			this->dateTimePicker6->Name = L"dateTimePicker6";
			this->dateTimePicker6->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker6->TabIndex = 12;
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(94, 6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(196, 20);
			this->textBox3->TabIndex = 9;
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
			this->label9->Text = L"Pr�nom :";
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
			this->conducteur2->Controls->Add(this->textBox7);
			this->conducteur2->Controls->Add(this->label20);
			this->conducteur2->Controls->Add(this->dateTimePicker11);
			this->conducteur2->Controls->Add(this->label21);
			this->conducteur2->Controls->Add(this->textBox8);
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
			this->groupBox6->Controls->Add(this->checkBox5);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Controls->Add(this->label17);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Controls->Add(this->dateTimePicker9);
			this->groupBox6->Controls->Add(this->dateTimePicker10);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->textBox6);
			this->groupBox6->Controls->Add(this->checkBox6);
			this->groupBox6->Location = System::Drawing::Point(16, 108);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(257, 145);
			this->groupBox6->TabIndex = 22;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Permis";
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(107, 27);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(84, 17);
			this->checkBox5->TabIndex = 18;
			this->checkBox5->Text = L"Permis Moto";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(5, 96);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(106, 13);
			this->label16->TabIndex = 17;
			this->label16->Text = L" Date de d�livrance :";
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
			// dateTimePicker9
			// 
			this->dateTimePicker9->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker9->Location = System::Drawing::Point(144, 117);
			this->dateTimePicker9->Name = L"dateTimePicker9";
			this->dateTimePicker9->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker9->TabIndex = 14;
			// 
			// dateTimePicker10
			// 
			this->dateTimePicker10->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker10->Location = System::Drawing::Point(144, 92);
			this->dateTimePicker10->Name = L"dateTimePicker10";
			this->dateTimePicker10->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker10->TabIndex = 13;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(5, 47);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(163, 13);
			this->label19->TabIndex = 12;
			this->label19->Text = L" Num�ro de permis de conduire : ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(15, 66);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(224, 20);
			this->textBox6->TabIndex = 11;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(8, 27);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(93, 17);
			this->checkBox6->TabIndex = 10;
			this->checkBox6->Text = L"Permis Voiture";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(88, 41);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(196, 20);
			this->textBox7->TabIndex = 21;
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
			this->label20->Text = L"Pr�nom :";
			// 
			// dateTimePicker11
			// 
			this->dateTimePicker11->CalendarTitleBackColor = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker11->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker11->Location = System::Drawing::Point(160, 70);
			this->dateTimePicker11->Name = L"dateTimePicker11";
			this->dateTimePicker11->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker11->TabIndex = 19;
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
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(88, 15);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(196, 20);
			this->textBox8->TabIndex = 17;
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
			this->conducteur3->Controls->Add(this->textBox10);
			this->conducteur3->Controls->Add(this->label27);
			this->conducteur3->Controls->Add(this->dateTimePicker14);
			this->conducteur3->Controls->Add(this->label28);
			this->conducteur3->Controls->Add(this->textBox11);
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
			this->groupBox7->Controls->Add(this->checkBox7);
			this->groupBox7->Controls->Add(this->label23);
			this->groupBox7->Controls->Add(this->label24);
			this->groupBox7->Controls->Add(this->label25);
			this->groupBox7->Controls->Add(this->dateTimePicker12);
			this->groupBox7->Controls->Add(this->dateTimePicker13);
			this->groupBox7->Controls->Add(this->label26);
			this->groupBox7->Controls->Add(this->textBox9);
			this->groupBox7->Controls->Add(this->checkBox8);
			this->groupBox7->Location = System::Drawing::Point(16, 108);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(257, 145);
			this->groupBox7->TabIndex = 22;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Permis";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(107, 27);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(84, 17);
			this->checkBox7->TabIndex = 18;
			this->checkBox7->Text = L"Permis Moto";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(5, 96);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(106, 13);
			this->label23->TabIndex = 17;
			this->label23->Text = L" Date de d�livrance :";
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
			// dateTimePicker12
			// 
			this->dateTimePicker12->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker12->Location = System::Drawing::Point(144, 117);
			this->dateTimePicker12->Name = L"dateTimePicker12";
			this->dateTimePicker12->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker12->TabIndex = 14;
			// 
			// dateTimePicker13
			// 
			this->dateTimePicker13->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker13->Location = System::Drawing::Point(144, 92);
			this->dateTimePicker13->Name = L"dateTimePicker13";
			this->dateTimePicker13->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker13->TabIndex = 13;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(5, 47);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(163, 13);
			this->label26->TabIndex = 12;
			this->label26->Text = L" Num�ro de permis de conduire : ";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(15, 66);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(224, 20);
			this->textBox9->TabIndex = 11;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(8, 27);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(93, 17);
			this->checkBox8->TabIndex = 10;
			this->checkBox8->Text = L"Permis Voiture";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(88, 41);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(196, 20);
			this->textBox10->TabIndex = 21;
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
			this->label27->Text = L"Pr�nom :";
			// 
			// dateTimePicker14
			// 
			this->dateTimePicker14->CalendarTitleBackColor = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker14->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker14->Location = System::Drawing::Point(160, 70);
			this->dateTimePicker14->Name = L"dateTimePicker14";
			this->dateTimePicker14->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker14->TabIndex = 19;
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
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(88, 15);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(196, 20);
			this->textBox11->TabIndex = 17;
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
			this->conducteur4->Controls->Add(this->textBox13);
			this->conducteur4->Controls->Add(this->label34);
			this->conducteur4->Controls->Add(this->dateTimePicker17);
			this->conducteur4->Controls->Add(this->label35);
			this->conducteur4->Controls->Add(this->textBox14);
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
			this->groupBox8->Controls->Add(this->checkBox9);
			this->groupBox8->Controls->Add(this->label30);
			this->groupBox8->Controls->Add(this->label31);
			this->groupBox8->Controls->Add(this->label32);
			this->groupBox8->Controls->Add(this->dateTimePicker15);
			this->groupBox8->Controls->Add(this->dateTimePicker16);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->textBox12);
			this->groupBox8->Controls->Add(this->checkBox10);
			this->groupBox8->Location = System::Drawing::Point(16, 108);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(257, 145);
			this->groupBox8->TabIndex = 22;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Permis";
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(107, 27);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(84, 17);
			this->checkBox9->TabIndex = 18;
			this->checkBox9->Text = L"Permis Moto";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(5, 96);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(106, 13);
			this->label30->TabIndex = 17;
			this->label30->Text = L" Date de d�livrance :";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(4, 121);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(106, 13);
			this->label31->TabIndex = 16;
			this->label31->Text = L" Date de d�livrance :";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(393, 66);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(0, 13);
			this->label32->TabIndex = 15;
			// 
			// dateTimePicker15
			// 
			this->dateTimePicker15->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker15->Location = System::Drawing::Point(144, 117);
			this->dateTimePicker15->Name = L"dateTimePicker15";
			this->dateTimePicker15->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker15->TabIndex = 14;
			// 
			// dateTimePicker16
			// 
			this->dateTimePicker16->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker16->Location = System::Drawing::Point(144, 92);
			this->dateTimePicker16->Name = L"dateTimePicker16";
			this->dateTimePicker16->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker16->TabIndex = 13;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(5, 47);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(163, 13);
			this->label33->TabIndex = 12;
			this->label33->Text = L" Num�ro de permis de conduire : ";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(15, 66);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(224, 20);
			this->textBox12->TabIndex = 11;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(8, 27);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(93, 17);
			this->checkBox10->TabIndex = 10;
			this->checkBox10->Text = L"Permis Voiture";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(88, 41);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(196, 20);
			this->textBox13->TabIndex = 21;
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
			this->label34->Text = L"Pr�nom :";
			// 
			// dateTimePicker17
			// 
			this->dateTimePicker17->CalendarTitleBackColor = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker17->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker17->Location = System::Drawing::Point(160, 70);
			this->dateTimePicker17->Name = L"dateTimePicker17";
			this->dateTimePicker17->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker17->TabIndex = 19;
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
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(88, 15);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(196, 20);
			this->textBox14->TabIndex = 17;
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
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->dateTimePicker4);
			this->groupBox4->Controls->Add(this->dateTimePicker5);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->checkBox1);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Location = System::Drawing::Point(49, 452);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(591, 93);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Permis Moto";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(171, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L" Date de d�livrance :";
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
			// dateTimePicker4
			// 
			this->dateTimePicker4->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker4->Location = System::Drawing::Point(488, 62);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker4->TabIndex = 14;
			// 
			// dateTimePicker5
			// 
			this->dateTimePicker5->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker5->Location = System::Drawing::Point(283, 62);
			this->dateTimePicker5->Name = L"dateTimePicker5";
			this->dateTimePicker5->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker5->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(147, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(163, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L" Num�ro de permis de conduire : ";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(7, 27);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(84, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Permis Moto";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(316, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(258, 20);
			this->textBox1->TabIndex = 11;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView2);
			this->groupBox3->Location = System::Drawing::Point(674, 165);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(306, 161);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Locations effectu�es";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(9, 20);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(291, 130);
			this->dataGridView2->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView3);
			this->groupBox2->Location = System::Drawing::Point(674, 1);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(306, 161);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Locations en cours";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(8, 17);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(291, 130);
			this->dataGridView3->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dateTimePicker3);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->Numpermisdeconduire);
			this->groupBox1->Controls->Add(this->textBox_permisdeconduire);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Location = System::Drawing::Point(51, 348);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(591, 93);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Permis Voiture";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(171, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L" Date de d�livrance :";
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
			// dateTimePicker3
			// 
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(488, 62);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker3->TabIndex = 14;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(283, 62);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker2->TabIndex = 13;
			// 
			// Numpermisdeconduire
			// 
			this->Numpermisdeconduire->AutoSize = true;
			this->Numpermisdeconduire->Location = System::Drawing::Point(147, 28);
			this->Numpermisdeconduire->Name = L"Numpermisdeconduire";
			this->Numpermisdeconduire->Size = System::Drawing::Size(163, 13);
			this->Numpermisdeconduire->TabIndex = 12;
			this->Numpermisdeconduire->Text = L" Num�ro de permis de conduire : ";
			// 
			// textBox_permisdeconduire
			// 
			this->textBox_permisdeconduire->Location = System::Drawing::Point(316, 24);
			this->textBox_permisdeconduire->Name = L"textBox_permisdeconduire";
			this->textBox_permisdeconduire->Size = System::Drawing::Size(258, 20);
			this->textBox_permisdeconduire->TabIndex = 11;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(8, 27);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(93, 17);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"Permis Voiture";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// Adresse
			// 
			this->Adresse->Controls->Add(this->textBox_Ville);
			this->Adresse->Controls->Add(this->label_New_Ville);
			this->Adresse->Controls->Add(this->TextBox_CodePostal);
			this->Adresse->Controls->Add(this->label_New_Codepostal);
			this->Adresse->Controls->Add(this->label_New_Rue);
			this->Adresse->Controls->Add(this->textBox_rue);
			this->Adresse->Controls->Add(this->TextBox_Num);
			this->Adresse->Controls->Add(this->label_New_Num);
			this->Adresse->Location = System::Drawing::Point(51, 210);
			this->Adresse->Name = L"Adresse";
			this->Adresse->Size = System::Drawing::Size(593, 116);
			this->Adresse->TabIndex = 8;
			this->Adresse->TabStop = false;
			this->Adresse->Text = L"Adresse :";
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
			this->label_New_Num->Text = L"N� :";
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
			this->label_New_Prenom->Text = L"Pr�nom :";
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
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Controls->Add(this->label_listeE_ListeEmprunteur);
			this->tabPage3->Location = System::Drawing::Point(14, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(988, 653);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->ID, this->Nom, 
				this->Pr�nom, this->Naissance, this->Location});
			//this->dataGridView1->DataSource = this->emprunteurBindingSource;
			this->dataGridView1->Location = System::Drawing::Point(13, 102);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(969, 545);
			this->dataGridView1->TabIndex = 3;
			// 
			// ID
			// 
			this->ID->DataPropertyName = L"id";
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 10;
			// 
			// Nom
			// 
			this->Nom->DataPropertyName = L"nom";
			this->Nom->HeaderText = L"Nom";
			this->Nom->Name = L"Nom";
			// 
			// Pr�nom
			// 
			this->Pr�nom->DataPropertyName = L"prenom";
			this->Pr�nom->HeaderText = L"Pr�nom";
			this->Pr�nom->Name = L"Pr�nom";
			// 
			// Naissance
			// 
			this->Naissance->HeaderText = L"Date de Naissance";
			this->Naissance->Name = L"Naissance";
			// 
			// Location
			// 
			this->Location->HeaderText = L"Location";
			this->Location->Name = L"Location";
			// 
			// emprunteurBindingSource
			// 
			//this->emprunteurBindingSource->DataSource = Emprunteur::typeid;
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
			// adresseBindingSource1
			// 
			//this->adresseBindingSource1->DataSource = Adresse::typeid;
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
			this->Text = L"EfreiLoca : La location de v�hicule tout simplement";
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
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->Adresse->ResumeLayout(false);
			this->Adresse->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
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
			
			 this->TabPage->SelectedIndex = 1;
		 }
private: System::Void nouvelEmprunteurToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 this->TabPage->SelectedIndex = 0;
		 }

		 

protected: System::Void validationEmprunteur_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			  /* 
			   //ConvertString (this->textBox_Nom->Text, Str);
			   std::string &Str = ConvertString (this->textBox_Nom->Text);
			   String^ str2 = gcnew String(Str.c_str());
			   this->textBox_Prenom->Text = str2;
			   gestionEmprunteurs* emp = gestionEmprunteurs::getinstance();
				   
				   emp->setname(ConvertString (this->textBox_Nom->Text));

				  // String^ str3 = gcnew String(emp->setname().c_str());

				   this->textBox_numero_carte_didentite->Text = gcnew String(emp->getname().c_str());

			   //Adresse* L_Adresse;
			 //L_Adresse = new Adresse((std:string) this->TextBox_Num->Text, (std:string) this->textBox_rue->Text, (std:string) this->TextBox_CodePostal, (std:string) this->textBox_Ville);
			 //Date*   LaDate = new Date( this->date_Naissance->value.ToString() ); 
				   //emp->nouveauEmprunteurs(ConvertString (this->textBox_Nom->Text), ConvertString (this->textBox_Prenom->Text), ConvertString (this->TextBox_Num->Text), ConvertString (this->textBox_rue->Text), ConvertString (this->TextBox_CodePostal->Text), ConvertString (this->textBox_Ville->Text), ConvertString (this->textBox_numero_carte_didentite->Text));
		 
			*/
		 }
};
}

