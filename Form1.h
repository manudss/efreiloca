#pragma once


namespace efreiloca {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Prénom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Naissance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Location;
















	protected: 


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->aideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TabPage = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Adresse = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_Ville = (gcnew System::Windows::Forms::TextBox());
			this->label_New_Ville = (gcnew System::Windows::Forms::Label());
			this->TextBox_CodePostal = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_New_Codepostal = (gcnew System::Windows::Forms::Label());
			this->label_New_Rue = (gcnew System::Windows::Forms::Label());
			this->textBox_rue = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Num = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_New_Num = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->Prénom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Naissance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Location = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_listeE_ListeEmprunteur = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->menuhaut->SuspendLayout();
			this->TabPage->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->Adresse->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
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
			this->voitureToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->voitureToolStripMenuItem->Text = L"Voiture";
			// 
			// motoToolStripMenuItem
			// 
			this->motoToolStripMenuItem->Name = L"motoToolStripMenuItem";
			this->motoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->motoToolStripMenuItem->Text = L"Moto";
			// 
			// autreToolStripMenuItem
			// 
			this->autreToolStripMenuItem->Name = L"autreToolStripMenuItem";
			this->autreToolStripMenuItem->Size = System::Drawing::Size(152, 22);
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
			this->outilsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->editionDevisToolStripMenuItem, 
				this->facturesToolStripMenuItem});
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
			this->tabPage2->Controls->Add(this->Adresse);
			this->tabPage2->Controls->Add(this->dateTimePicker1);
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
			this->Adresse->Location = System::Drawing::Point(195, 215);
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
			this->label_New_Ville->Click += gcnew System::EventHandler(this, &Form1::label1_Click_2);
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
			this->label_New_Codepostal->Click += gcnew System::EventHandler(this, &Form1::label_New_Codepostal_Click);
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
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::SystemColors::HotTrack;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(375, 163);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// label_New_DateNaissance
			// 
			this->label_New_DateNaissance->AutoSize = true;
			this->label_New_DateNaissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_New_DateNaissance->Location = System::Drawing::Point(191, 158);
			this->label_New_DateNaissance->Name = L"label_New_DateNaissance";
			this->label_New_DateNaissance->Size = System::Drawing::Size(178, 24);
			this->label_New_DateNaissance->TabIndex = 5;
			this->label_New_DateNaissance->Text = L"Date de Naissance :";
			// 
			// textBox_Prenom
			// 
			this->textBox_Prenom->Location = System::Drawing::Point(572, 100);
			this->textBox_Prenom->Name = L"textBox_Prenom";
			this->textBox_Prenom->Size = System::Drawing::Size(216, 20);
			this->textBox_Prenom->TabIndex = 4;
			// 
			// textBox_Nom
			// 
			this->textBox_Nom->Location = System::Drawing::Point(258, 100);
			this->textBox_Nom->Name = L"textBox_Nom";
			this->textBox_Nom->Size = System::Drawing::Size(204, 20);
			this->textBox_Nom->TabIndex = 3;
			this->textBox_Nom->TextChanged += gcnew System::EventHandler(this, &Form1::textBox_Nom_TextChanged);
			// 
			// label_New_Prenom
			// 
			this->label_New_Prenom->AutoSize = true;
			this->label_New_Prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_New_Prenom->Location = System::Drawing::Point(479, 100);
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
			this->Label_New_Nom->Location = System::Drawing::Point(191, 100);
			this->Label_New_Nom->Name = L"Label_New_Nom";
			this->Label_New_Nom->Size = System::Drawing::Size(61, 24);
			this->Label_New_Nom->TabIndex = 1;
			this->Label_New_Nom->Text = L"Nom :";
			this->Label_New_Nom->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// NouvelEmprunteur
			// 
			this->NouvelEmprunteur->AutoSize = true;
			this->NouvelEmprunteur->Font = (gcnew System::Drawing::Font(L"Arial Black", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->NouvelEmprunteur->Location = System::Drawing::Point(312, 14);
			this->NouvelEmprunteur->Name = L"NouvelEmprunteur";
			this->NouvelEmprunteur->Size = System::Drawing::Size(354, 45);
			this->NouvelEmprunteur->TabIndex = 0;
			this->NouvelEmprunteur->Text = L"Nouvel Emprunteur";
			this->NouvelEmprunteur->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->NouvelEmprunteur->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
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
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->ID, this->Nom, 
				this->Prénom, this->Naissance, this->Location});
			this->dataGridView1->Location = System::Drawing::Point(13, 102);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(969, 545);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 10;
			// 
			// Nom
			// 
			this->Nom->HeaderText = L"Nom";
			this->Nom->Name = L"Nom";
			// 
			// Prénom
			// 
			this->Prénom->HeaderText = L"Prénom";
			this->Prénom->Name = L"Prénom";
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
			this->Adresse->ResumeLayout(false);
			this->Adresse->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void voitureToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label_New_Codepostal_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click_2(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listeDesEmprunteursToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 this->TabPage->SelectedIndex = 1;
		 }
private: System::Void nouvelEmprunteurToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //TabPage->;
			 this->TabPage->SelectedIndex = 0;
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void textBox_Nom_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

