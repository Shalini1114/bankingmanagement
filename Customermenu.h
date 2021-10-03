#pragma once
#include"AddCustomer.h"

namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Customermenu
	/// </summary>
	public ref class Customermenu : public System::Windows::Forms::Form
	{
	public:
		Form^ EMenu;
		String^ Key;
		String^ RadioBtn;
		String^ Data,^ Name;
		String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";
		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ CustomerName;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ NavigationPanel;

	private: System::Windows::Forms::Button^ LogoutBtn;
	private: System::Windows::Forms::Button^ OtherServicesBtn;
	private: System::Windows::Forms::Button^ TransactionBtn;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ FormLabel;
	private: System::Windows::Forms::Panel^ FormLoaderPanel;
	private: System::Windows::Forms::Button^ AccountBtn;
	private: System::Windows::Forms::Panel^ TransactionPanel;
	private: System::Windows::Forms::TextBox^ AccountTxt;



	private: System::Windows::Forms::Label^ TransactionTypeLabel;


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ DescriptionTxt;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ Cancelproceedbtn;
	private: System::Windows::Forms::Button^ ProceedBtn;
	private: System::Windows::Forms::TextBox^ Ammounttxt;
	private: System::Windows::Forms::TextBox^ NameTxt;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ BalanceTxt;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ AccountNoTxt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label14;


	public:
		





		Customermenu(void)
		{
			InitializeComponent();
			NavigationPanel->Height = DashboardBtn->Height;
			NavigationPanel->Top = DashboardBtn->Top;
			NavigationPanel->Left = DashboardBtn->Left;
			//
			//TODO: Add the constructor code here
			//
		}
		Customermenu(Form^ obj, String^ data, String^ name, String^ account, String^ balance)
		{
			InitializeComponent();
			NavigationPanel->Height = DashboardBtn->Height;
			NavigationPanel->Top = DashboardBtn->Top;
			NavigationPanel->Left = DashboardBtn->Left;
			EMenu = obj;
			Data = data;
			Name = name;
			CustomerName->Text = name;
			AccountNoTxt->Text = account;
			BalanceTxt->Text = balance;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Customermenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ CustomerPanel;
	protected:

	protected:



	private: System::Windows::Forms::Button^ DashboardBtn;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Customermenu::typeid));
			this->CustomerPanel = (gcnew System::Windows::Forms::Panel());
			this->NavigationPanel = (gcnew System::Windows::Forms::Panel());
			this->LogoutBtn = (gcnew System::Windows::Forms::Button());
			this->OtherServicesBtn = (gcnew System::Windows::Forms::Button());
			this->TransactionBtn = (gcnew System::Windows::Forms::Button());
			this->AccountBtn = (gcnew System::Windows::Forms::Button());
			this->DashboardBtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->CustomerName = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->BalanceTxt = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FormLabel = (gcnew System::Windows::Forms::Label());
			this->FormLoaderPanel = (gcnew System::Windows::Forms::Panel());
			this->TransactionPanel = (gcnew System::Windows::Forms::Panel());
			this->NameTxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AccountTxt = (gcnew System::Windows::Forms::TextBox());
			this->TransactionTypeLabel = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->DescriptionTxt = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Cancelproceedbtn = (gcnew System::Windows::Forms::Button());
			this->ProceedBtn = (gcnew System::Windows::Forms::Button());
			this->Ammounttxt = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AccountNoTxt = (gcnew System::Windows::Forms::Label());
			this->CustomerPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->FormLoaderPanel->SuspendLayout();
			this->TransactionPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// CustomerPanel
			// 
			this->CustomerPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->CustomerPanel->Controls->Add(this->NavigationPanel);
			this->CustomerPanel->Controls->Add(this->LogoutBtn);
			this->CustomerPanel->Controls->Add(this->OtherServicesBtn);
			this->CustomerPanel->Controls->Add(this->TransactionBtn);
			this->CustomerPanel->Controls->Add(this->AccountBtn);
			this->CustomerPanel->Controls->Add(this->DashboardBtn);
			this->CustomerPanel->Controls->Add(this->panel1);
			this->CustomerPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->CustomerPanel->Location = System::Drawing::Point(0, 0);
			this->CustomerPanel->Name = L"CustomerPanel";
			this->CustomerPanel->Size = System::Drawing::Size(186, 577);
			this->CustomerPanel->TabIndex = 0;
			// 
			// NavigationPanel
			// 
			this->NavigationPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->NavigationPanel->Location = System::Drawing::Point(0, 193);
			this->NavigationPanel->Name = L"NavigationPanel";
			this->NavigationPanel->Size = System::Drawing::Size(3, 100);
			this->NavigationPanel->TabIndex = 2;
			// 
			// LogoutBtn
			// 
			this->LogoutBtn->BackColor = System::Drawing::Color::Transparent;
			this->LogoutBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->LogoutBtn->FlatAppearance->BorderSize = 0;
			this->LogoutBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogoutBtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoutBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->LogoutBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogoutBtn.Image")));
			this->LogoutBtn->Location = System::Drawing::Point(0, 312);
			this->LogoutBtn->Name = L"LogoutBtn";
			this->LogoutBtn->Size = System::Drawing::Size(186, 42);
			this->LogoutBtn->TabIndex = 1;
			this->LogoutBtn->Text = L"Logout";
			this->LogoutBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->LogoutBtn->UseVisualStyleBackColor = false;
			this->LogoutBtn->Click += gcnew System::EventHandler(this, &Customermenu::LogoutBtn_Click);
			// 
			// OtherServicesBtn
			// 
			this->OtherServicesBtn->BackColor = System::Drawing::Color::Transparent;
			this->OtherServicesBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->OtherServicesBtn->FlatAppearance->BorderSize = 0;
			this->OtherServicesBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OtherServicesBtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OtherServicesBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->OtherServicesBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OtherServicesBtn.Image")));
			this->OtherServicesBtn->Location = System::Drawing::Point(0, 270);
			this->OtherServicesBtn->Name = L"OtherServicesBtn";
			this->OtherServicesBtn->Size = System::Drawing::Size(186, 42);
			this->OtherServicesBtn->TabIndex = 1;
			this->OtherServicesBtn->Text = L"Other Services";
			this->OtherServicesBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->OtherServicesBtn->UseVisualStyleBackColor = false;
			this->OtherServicesBtn->Click += gcnew System::EventHandler(this, &Customermenu::OtherServicesBtn_Click);
			// 
			// TransactionBtn
			// 
			this->TransactionBtn->BackColor = System::Drawing::Color::Transparent;
			this->TransactionBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->TransactionBtn->FlatAppearance->BorderSize = 0;
			this->TransactionBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TransactionBtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TransactionBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->TransactionBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TransactionBtn.Image")));
			this->TransactionBtn->Location = System::Drawing::Point(0, 228);
			this->TransactionBtn->Name = L"TransactionBtn";
			this->TransactionBtn->Size = System::Drawing::Size(186, 42);
			this->TransactionBtn->TabIndex = 1;
			this->TransactionBtn->Text = L"Transaction";
			this->TransactionBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->TransactionBtn->UseVisualStyleBackColor = false;
			this->TransactionBtn->Click += gcnew System::EventHandler(this, &Customermenu::TransactionBtn_Click);
			// 
			// AccountBtn
			// 
			this->AccountBtn->BackColor = System::Drawing::Color::Transparent;
			this->AccountBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->AccountBtn->FlatAppearance->BorderSize = 0;
			this->AccountBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AccountBtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccountBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->AccountBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AccountBtn.Image")));
			this->AccountBtn->Location = System::Drawing::Point(0, 186);
			this->AccountBtn->Name = L"AccountBtn";
			this->AccountBtn->Size = System::Drawing::Size(186, 42);
			this->AccountBtn->TabIndex = 3;
			this->AccountBtn->Text = L"Account";
			this->AccountBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->AccountBtn->UseVisualStyleBackColor = false;
			this->AccountBtn->Click += gcnew System::EventHandler(this, &Customermenu::AccountBtn_Click);
			// 
			// DashboardBtn
			// 
			this->DashboardBtn->BackColor = System::Drawing::Color::Transparent;
			this->DashboardBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->DashboardBtn->FlatAppearance->BorderSize = 0;
			this->DashboardBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DashboardBtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DashboardBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->DashboardBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DashboardBtn.Image")));
			this->DashboardBtn->Location = System::Drawing::Point(0, 144);
			this->DashboardBtn->Name = L"DashboardBtn";
			this->DashboardBtn->Size = System::Drawing::Size(186, 42);
			this->DashboardBtn->TabIndex = 1;
			this->DashboardBtn->Text = L"Dashboard";
			this->DashboardBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->DashboardBtn->UseVisualStyleBackColor = false;
			this->DashboardBtn->Click += gcnew System::EventHandler(this, &Customermenu::DashboardBtn_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->CustomerName);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 144);
			this->panel1->TabIndex = 0;
			// 
			// CustomerName
			// 
			this->CustomerName->AutoSize = true;
			this->CustomerName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->CustomerName->Location = System::Drawing::Point(32, 107);
			this->CustomerName->Name = L"CustomerName";
			this->CustomerName->Size = System::Drawing::Size(49, 16);
			this->CustomerName->TabIndex = 1;
			this->CustomerName->Text = L"Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(60, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(63, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->AccountNoTxt);
			this->panel2->Controls->Add(this->BalanceTxt);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->FormLabel);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(186, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(765, 69);
			this->panel2->TabIndex = 1;
			// 
			// BalanceTxt
			// 
			this->BalanceTxt->AutoSize = true;
			this->BalanceTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BalanceTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->BalanceTxt->Location = System::Drawing::Point(647, 37);
			this->BalanceTxt->Name = L"BalanceTxt";
			this->BalanceTxt->Size = System::Drawing::Size(21, 24);
			this->BalanceTxt->TabIndex = 2;
			this->BalanceTxt->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->label2->Location = System::Drawing::Point(514, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Balance :";
			// 
			// FormLabel
			// 
			this->FormLabel->AutoSize = true;
			this->FormLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->FormLabel->Location = System::Drawing::Point(20, 17);
			this->FormLabel->Name = L"FormLabel";
			this->FormLabel->Size = System::Drawing::Size(156, 31);
			this->FormLabel->TabIndex = 0;
			this->FormLabel->Text = L"Dashboard";
			// 
			// FormLoaderPanel
			// 
			this->FormLoaderPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->FormLoaderPanel->Controls->Add(this->TransactionPanel);
			this->FormLoaderPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->FormLoaderPanel->Location = System::Drawing::Point(186, 69);
			this->FormLoaderPanel->Name = L"FormLoaderPanel";
			this->FormLoaderPanel->Size = System::Drawing::Size(765, 508);
			this->FormLoaderPanel->TabIndex = 2;
			// 
			// TransactionPanel
			// 
			this->TransactionPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TransactionPanel->BackColor = System::Drawing::SystemColors::Control;
			this->TransactionPanel->Controls->Add(this->NameTxt);
			this->TransactionPanel->Controls->Add(this->label1);
			this->TransactionPanel->Controls->Add(this->AccountTxt);
			this->TransactionPanel->Controls->Add(this->TransactionTypeLabel);
			this->TransactionPanel->Controls->Add(this->label17);
			this->TransactionPanel->Controls->Add(this->DescriptionTxt);
			this->TransactionPanel->Controls->Add(this->label15);
			this->TransactionPanel->Controls->Add(this->Cancelproceedbtn);
			this->TransactionPanel->Controls->Add(this->ProceedBtn);
			this->TransactionPanel->Controls->Add(this->Ammounttxt);
			this->TransactionPanel->Controls->Add(this->label14);
			this->TransactionPanel->Location = System::Drawing::Point(168, 68);
			this->TransactionPanel->Name = L"TransactionPanel";
			this->TransactionPanel->Size = System::Drawing::Size(413, 325);
			this->TransactionPanel->TabIndex = 27;
			this->TransactionPanel->Visible = false;
			// 
			// NameTxt
			// 
			this->NameTxt->BackColor = System::Drawing::Color::Cornsilk;
			this->NameTxt->Enabled = false;
			this->NameTxt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->NameTxt->Location = System::Drawing::Point(210, 150);
			this->NameTxt->Name = L"NameTxt";
			this->NameTxt->Size = System::Drawing::Size(180, 25);
			this->NameTxt->TabIndex = 24;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label1->Location = System::Drawing::Point(23, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 22);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Name";
			// 
			// AccountTxt
			// 
			this->AccountTxt->BackColor = System::Drawing::Color::Cornsilk;
			this->AccountTxt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccountTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->AccountTxt->Location = System::Drawing::Point(210, 73);
			this->AccountTxt->Name = L"AccountTxt";
			this->AccountTxt->Size = System::Drawing::Size(180, 25);
			this->AccountTxt->TabIndex = 24;
			this->AccountTxt->Leave += gcnew System::EventHandler(this, &Customermenu::AccountTxt_Leave);
			// 
			// TransactionTypeLabel
			// 
			this->TransactionTypeLabel->AutoSize = true;
			this->TransactionTypeLabel->BackColor = System::Drawing::Color::Transparent;
			this->TransactionTypeLabel->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TransactionTypeLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->TransactionTypeLabel->Location = System::Drawing::Point(23, 73);
			this->TransactionTypeLabel->Name = L"TransactionTypeLabel";
			this->TransactionTypeLabel->Size = System::Drawing::Size(161, 22);
			this->TransactionTypeLabel->TabIndex = 23;
			this->TransactionTypeLabel->Text = L"Enter Account No.";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 25, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label17->Location = System::Drawing::Point(85, 14);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(249, 35);
			this->label17->TabIndex = 21;
			this->label17->Text = L"Money Transafer";
			// 
			// DescriptionTxt
			// 
			this->DescriptionTxt->BackColor = System::Drawing::Color::Cornsilk;
			this->DescriptionTxt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DescriptionTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->DescriptionTxt->Location = System::Drawing::Point(210, 189);
			this->DescriptionTxt->Multiline = true;
			this->DescriptionTxt->Name = L"DescriptionTxt";
			this->DescriptionTxt->Size = System::Drawing::Size(180, 63);
			this->DescriptionTxt->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label15->Location = System::Drawing::Point(23, 192);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(104, 22);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Description";
			// 
			// Cancelproceedbtn
			// 
			this->Cancelproceedbtn->BackColor = System::Drawing::Color::Purple;
			this->Cancelproceedbtn->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelproceedbtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->Cancelproceedbtn->Location = System::Drawing::Point(375, 2);
			this->Cancelproceedbtn->Name = L"Cancelproceedbtn";
			this->Cancelproceedbtn->Size = System::Drawing::Size(35, 33);
			this->Cancelproceedbtn->TabIndex = 18;
			this->Cancelproceedbtn->Text = L"X";
			this->Cancelproceedbtn->UseVisualStyleBackColor = false;
			this->Cancelproceedbtn->Click += gcnew System::EventHandler(this, &Customermenu::Cancelproceedbtn_Click);
			// 
			// ProceedBtn
			// 
			this->ProceedBtn->BackColor = System::Drawing::Color::Purple;
			this->ProceedBtn->Enabled = false;
			this->ProceedBtn->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProceedBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->ProceedBtn->Location = System::Drawing::Point(136, 275);
			this->ProceedBtn->Name = L"ProceedBtn";
			this->ProceedBtn->Size = System::Drawing::Size(123, 33);
			this->ProceedBtn->TabIndex = 17;
			this->ProceedBtn->Text = L"Proceed";
			this->ProceedBtn->UseVisualStyleBackColor = false;
			this->ProceedBtn->Click += gcnew System::EventHandler(this, &Customermenu::ProceedBtn_Click);
			// 
			// Ammounttxt
			// 
			this->Ammounttxt->BackColor = System::Drawing::Color::Cornsilk;
			this->Ammounttxt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ammounttxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->Ammounttxt->Location = System::Drawing::Point(210, 115);
			this->Ammounttxt->Name = L"Ammounttxt";
			this->Ammounttxt->Size = System::Drawing::Size(79, 25);
			this->Ammounttxt->TabIndex = 16;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label14->Location = System::Drawing::Point(23, 115);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(142, 22);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Enter Ammount";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->label3->Location = System::Drawing::Point(514, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Account No :";
			// 
			// AccountNoTxt
			// 
			this->AccountNoTxt->AutoSize = true;
			this->AccountNoTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccountNoTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->AccountNoTxt->Location = System::Drawing::Point(647, 9);
			this->AccountNoTxt->Name = L"AccountNoTxt";
			this->AccountNoTxt->Size = System::Drawing::Size(87, 24);
			this->AccountNoTxt->TabIndex = 2;
			this->AccountNoTxt->Text = L"Account";
			// 
			// Customermenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(951, 577);
			this->Controls->Add(this->FormLoaderPanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->CustomerPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Customermenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Customermenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Customermenu::Customermenu_Load);
			this->CustomerPanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->FormLoaderPanel->ResumeLayout(false);
			this->TransactionPanel->ResumeLayout(false);
			this->TransactionPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: void Transaction(String^ FromAccountNo, String^ ToAccountNo)
	{
		// Setting Transactionid
		String^ Transactionid = "8765";
		//Setting Date and Time
		DateTime date = DateTime::Now;
		String^ dateandTime = date.ToString();
		

		// Setting Transaction Type
		String^ Transactiontype;

		// Setting Description
		String^ Description = DescriptionTxt->Text;
		// Setting Balance
		int Amount = System::Convert::ToInt16(Ammounttxt->Text);
		int Balance = System::Convert::ToInt16(BalanceTxt->Text);
	
		Transactiontype = "Withdraw";
		Query = "update Banking.Account set Accountbalance ='" + System::Convert::ToString(Balance - Amount) + "' WHERE Accountno ='" + FromAccountNo + "'";
		Balance = Balance - Amount;
		BalanceTxt->Text = Balance.ToString();
		MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
		try
		{
			Connect->Open();
			MySqlDataReader^ reader = cmd->ExecuteReader();
			MessageBox::Show("Amount Debited.");
			Connect->Close();
			Account obj;
			Transactionid += obj.GenerateNumber("Banking.Transaction", "Transactionid");

			Query = "insert into Banking.Transaction (Transactionid,DateandTime,Accountno,Amount,TransactionType,Description,Balance) values ('" +
				Transactionid + "','" + dateandTime + "','" +
				FromAccountNo + "','" + Amount.ToString() + "', '" +
				Transactiontype + "', '" + Description + "', '" +
				Balance + "')";



			// Inserting into database code...
			cmd = gcnew MySqlCommand(Query, Connect);

			Connect->Open();
			reader = cmd->ExecuteReader();
			MessageBox::Show("1st Transaction update");
			Connect->Close();

			// Code for Deposite to other account.
			Transactionid = "8765";
			Transactiontype = "Deposite";
			Description = "Receive From " + NameTxt->Text + " Account No - " + FromAccountNo + "";
			Query = "Select Accountbalance from Banking.Account where Accountno = '" + ToAccountNo + "'";
			cmd = gcnew MySqlCommand(Query, Connect);
			Connect->Open();
			reader = cmd->ExecuteReader();
			reader->Read();
			MessageBox::Show("Balance Fetched");
			Balance = System::Convert::ToInt16(reader->GetString(0)) + Amount;
			Connect->Close();
			Transactionid += obj.GenerateNumber("Banking.Transaction", "Transactionid");
			Query = "update Banking.Account set Accountbalance ='" + System::Convert::ToString(Balance) + "' WHERE Accountno ='" + ToAccountNo + "'";
			cmd = gcnew MySqlCommand(Query, Connect);
			Connect->Open();
			reader = cmd->ExecuteReader();
			MessageBox::Show("amount credited");
			Connect->Close();

			

			Query = "insert into Banking.Transaction (Transactionid,DateandTime,Accountno,Amount,TransactionType,Description,Balance) values ('" + 
				Transactionid + "','" + dateandTime + "','" + ToAccountNo + "','" + 
				Amount.ToString() + "', '" + Transactiontype + "', '" + 
				Description +"', '" + Balance + "')";

			// Inserting into database code...
			cmd = gcnew MySqlCommand(Query, Connect);

			Connect->Open();
			reader = cmd->ExecuteReader();

			MessageBox::Show("Transaction Successfull...");
			Connect->Close();
		}
		catch (Exception^ ex)
		{
			Connect->Close();
			MessageBox::Show(ex->Message);
		}

	}

	private: void FormLoad(Form^ form)
	{
		if (FormLoaderPanel->Controls->Count > 0)
			FormLoaderPanel->Controls->RemoveAt(0);
		FormLoaderPanel->Controls->Clear();
		form->Dock = DockStyle::Fill;
		form->TopLevel = false;
		form->TopMost = true;
		FormLoaderPanel->Controls->Add(form);
		form->Show();
	}
	private: System::Void Customermenu_Load(System::Object^ sender, System::EventArgs^ e) {
	
		
	}
	

private: System::Void DashboardBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	

	NavigationPanel->Height = DashboardBtn->Height;
	NavigationPanel->Top = DashboardBtn->Top;
	NavigationPanel->Left = DashboardBtn->Left;
	FormLabel->Text = "Dashboard";
	FormLoad(gcnew AddCustomer(this, Data, "FromSearch Customer", "Username"));
	
	
}
private: System::Void TransactionBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	NavigationPanel->Height = TransactionBtn->Height;
	NavigationPanel->Top = TransactionBtn->Top;
	NavigationPanel->Left = TransactionBtn->Left;
	if (FormLoaderPanel->Controls->Count > 0)
		FormLoaderPanel->Controls->RemoveAt(0);
	TransactionPanel->Visible = true;
	FormLoaderPanel->Controls->Clear();
	FormLoaderPanel->Controls->Add(TransactionPanel);
}
private: System::Void OtherServicesBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	NavigationPanel->Height = OtherServicesBtn->Height;
	NavigationPanel->Top = OtherServicesBtn->Top;
	NavigationPanel->Left = OtherServicesBtn->Left;
}
private: System::Void LogoutBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MessageBox::Show("Are you sure want to logout?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		NavigationPanel->Height = OtherServicesBtn->Height;
		NavigationPanel->Top = OtherServicesBtn->Top;
		NavigationPanel->Left = OtherServicesBtn->Left;
		EMenu->Show();
		this->Close();
	}
	
}
private: System::Void AccountBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	NavigationPanel->Height = AccountBtn->Height;
	NavigationPanel->Top = AccountBtn->Top;
	NavigationPanel->Left = AccountBtn->Left;
	FormLabel->Text = "Account";
	FormLoad(gcnew Account(this, Data, "FromDetail Customer", "Username"));
}
private: System::Void Cancelproceedbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	TransactionPanel->Visible = false;
}
private: System::Void ProceedBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Ammounttxt->Text == "")
	{
		MessageBox::Show("Please Enter amount!");
		
	}
	else if(System::Convert::ToInt16(Ammounttxt->Text) <= System::Convert::ToInt16(BalanceTxt->Text))
	{
		Transaction(AccountNoTxt->Text, AccountTxt->Text);
	}
	else
	{
		MessageBox::Show("Insufficient Balance...");
	}
}
private: System::Void AccountTxt_Leave(System::Object^ sender, System::EventArgs^ e) {

	Query = "select Name from Banking.Account where Accountno = '" + AccountTxt->Text + "'";
	MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
	try
	{
		Connect->Open();
		MySqlDataReader^ reader = cmd->ExecuteReader();
		if (reader->Read())
		{
			NameTxt->Text = reader->GetString(0);
			ProceedBtn->Enabled = true;
			
		}
		else
		{
			NameTxt->Text = "Invalid Account No.";
			ProceedBtn->Enabled = false;
		}
		Connect->Close();
	}
	catch (Exception^ ex)
	{
		Connect->Close();
		MessageBox::Show(ex->Message);
	}

}
};
}
