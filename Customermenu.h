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
	using namespace System::Collections::Generic;
	using namespace System::Net;
	using namespace System::Collections::Specialized;
	using namespace System::IO;

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
		String^ Otp;

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
	private: System::Windows::Forms::TextBox^ UpdateTxt;

	private: System::Windows::Forms::Label^ UpdateLabel;






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
	private: System::Windows::Forms::Panel^ OtherServicesPanel;
	private: System::Windows::Forms::Button^ ChangePasswordBtn;
	private: System::Windows::Forms::Button^ UpdateMobileBtn;
	private: System::Windows::Forms::Button^ ApplyChequeBtn;
	private: System::Windows::Forms::Panel^ UpdatePanel;
	private: System::Windows::Forms::Label^ UpdatePanelHeading;
	private: System::Windows::Forms::Label^ MessageLabel;
	private: System::Windows::Forms::Button^ UpdateProceedBtn;
	private: System::Windows::Forms::Label^ OtpLabel;
	private: System::Windows::Forms::TextBox^ OtpTxt;
	private: System::Windows::Forms::Button^ UpdateCancelBtn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ AccountTxt;
	private: System::Windows::Forms::Button^ CountryCode;
	private: System::Windows::Forms::Button^ SendOtpBtn;




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
			this->OtherServicesPanel = (gcnew System::Windows::Forms::Panel());
			this->ChangePasswordBtn = (gcnew System::Windows::Forms::Button());
			this->UpdateMobileBtn = (gcnew System::Windows::Forms::Button());
			this->ApplyChequeBtn = (gcnew System::Windows::Forms::Button());
			this->OtherServicesBtn = (gcnew System::Windows::Forms::Button());
			this->TransactionBtn = (gcnew System::Windows::Forms::Button());
			this->AccountBtn = (gcnew System::Windows::Forms::Button());
			this->DashboardBtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->CustomerName = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->AccountNoTxt = (gcnew System::Windows::Forms::Label());
			this->BalanceTxt = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FormLabel = (gcnew System::Windows::Forms::Label());
			this->FormLoaderPanel = (gcnew System::Windows::Forms::Panel());
			this->UpdatePanel = (gcnew System::Windows::Forms::Panel());
			this->CountryCode = (gcnew System::Windows::Forms::Button());
			this->MessageLabel = (gcnew System::Windows::Forms::Label());
			this->OtpLabel = (gcnew System::Windows::Forms::Label());
			this->OtpTxt = (gcnew System::Windows::Forms::TextBox());
			this->UpdateLabel = (gcnew System::Windows::Forms::Label());
			this->UpdateCancelBtn = (gcnew System::Windows::Forms::Button());
			this->UpdatePanelHeading = (gcnew System::Windows::Forms::Label());
			this->UpdateTxt = (gcnew System::Windows::Forms::TextBox());
			this->SendOtpBtn = (gcnew System::Windows::Forms::Button());
			this->UpdateProceedBtn = (gcnew System::Windows::Forms::Button());
			this->TransactionPanel = (gcnew System::Windows::Forms::Panel());
			this->NameTxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->DescriptionTxt = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Cancelproceedbtn = (gcnew System::Windows::Forms::Button());
			this->AccountTxt = (gcnew System::Windows::Forms::TextBox());
			this->ProceedBtn = (gcnew System::Windows::Forms::Button());
			this->Ammounttxt = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->CustomerPanel->SuspendLayout();
			this->OtherServicesPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->FormLoaderPanel->SuspendLayout();
			this->UpdatePanel->SuspendLayout();
			this->TransactionPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// CustomerPanel
			// 
			this->CustomerPanel->AutoScroll = true;
			this->CustomerPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->CustomerPanel->Controls->Add(this->NavigationPanel);
			this->CustomerPanel->Controls->Add(this->LogoutBtn);
			this->CustomerPanel->Controls->Add(this->OtherServicesPanel);
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
			this->CustomerPanel->MouseHover += gcnew System::EventHandler(this, &Customermenu::CustomerPanel_MouseHover);
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
			this->LogoutBtn->Location = System::Drawing::Point(0, 438);
			this->LogoutBtn->Name = L"LogoutBtn";
			this->LogoutBtn->Size = System::Drawing::Size(186, 42);
			this->LogoutBtn->TabIndex = 1;
			this->LogoutBtn->Text = L"Logout";
			this->LogoutBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->LogoutBtn->UseVisualStyleBackColor = false;
			this->LogoutBtn->Click += gcnew System::EventHandler(this, &Customermenu::LogoutBtn_Click);
			this->LogoutBtn->MouseHover += gcnew System::EventHandler(this, &Customermenu::LogoutBtn_MouseHover);
			// 
			// OtherServicesPanel
			// 
			this->OtherServicesPanel->AutoSize = true;
			this->OtherServicesPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->OtherServicesPanel->Controls->Add(this->ChangePasswordBtn);
			this->OtherServicesPanel->Controls->Add(this->UpdateMobileBtn);
			this->OtherServicesPanel->Controls->Add(this->ApplyChequeBtn);
			this->OtherServicesPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->OtherServicesPanel->Location = System::Drawing::Point(0, 312);
			this->OtherServicesPanel->Name = L"OtherServicesPanel";
			this->OtherServicesPanel->Size = System::Drawing::Size(186, 126);
			this->OtherServicesPanel->TabIndex = 28;
			this->OtherServicesPanel->Visible = false;
			// 
			// ChangePasswordBtn
			// 
			this->ChangePasswordBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ChangePasswordBtn->FlatAppearance->BorderSize = 0;
			this->ChangePasswordBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChangePasswordBtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChangePasswordBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ChangePasswordBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ChangePasswordBtn.Image")));
			this->ChangePasswordBtn->Location = System::Drawing::Point(0, 84);
			this->ChangePasswordBtn->Name = L"ChangePasswordBtn";
			this->ChangePasswordBtn->Size = System::Drawing::Size(186, 42);
			this->ChangePasswordBtn->TabIndex = 30;
			this->ChangePasswordBtn->Text = L"Change Password";
			this->ChangePasswordBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->ChangePasswordBtn->UseVisualStyleBackColor = false;
			this->ChangePasswordBtn->Click += gcnew System::EventHandler(this, &Customermenu::ChangePasswordBtn_Click);
			// 
			// UpdateMobileBtn
			// 
			this->UpdateMobileBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->UpdateMobileBtn->FlatAppearance->BorderSize = 0;
			this->UpdateMobileBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdateMobileBtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateMobileBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->UpdateMobileBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UpdateMobileBtn.Image")));
			this->UpdateMobileBtn->Location = System::Drawing::Point(0, 42);
			this->UpdateMobileBtn->Name = L"UpdateMobileBtn";
			this->UpdateMobileBtn->Size = System::Drawing::Size(186, 42);
			this->UpdateMobileBtn->TabIndex = 29;
			this->UpdateMobileBtn->Text = L"Update Mobile No.";
			this->UpdateMobileBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->UpdateMobileBtn->UseVisualStyleBackColor = false;
			this->UpdateMobileBtn->Click += gcnew System::EventHandler(this, &Customermenu::UpdateMobileBtn_Click);
			// 
			// ApplyChequeBtn
			// 
			this->ApplyChequeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ApplyChequeBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ApplyChequeBtn->FlatAppearance->BorderSize = 0;
			this->ApplyChequeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ApplyChequeBtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ApplyChequeBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ApplyChequeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ApplyChequeBtn.Image")));
			this->ApplyChequeBtn->Location = System::Drawing::Point(0, 0);
			this->ApplyChequeBtn->Name = L"ApplyChequeBtn";
			this->ApplyChequeBtn->Size = System::Drawing::Size(186, 42);
			this->ApplyChequeBtn->TabIndex = 28;
			this->ApplyChequeBtn->Text = L"Apply Cheque Book";
			this->ApplyChequeBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->ApplyChequeBtn->UseVisualStyleBackColor = false;
			this->ApplyChequeBtn->Click += gcnew System::EventHandler(this, &Customermenu::ApplyChequeBtn_Click);
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
			this->OtherServicesBtn->MouseHover += gcnew System::EventHandler(this, &Customermenu::OtherServicesBtn_MouseHover);
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
			this->TransactionBtn->MouseHover += gcnew System::EventHandler(this, &Customermenu::TransactionBtn_MouseHover);
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
			this->AccountBtn->MouseHover += gcnew System::EventHandler(this, &Customermenu::AccountBtn_MouseHover);
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
			this->DashboardBtn->MouseHover += gcnew System::EventHandler(this, &Customermenu::DashboardBtn_MouseHover);
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
			this->FormLoaderPanel->Controls->Add(this->UpdatePanel);
			this->FormLoaderPanel->Controls->Add(this->TransactionPanel);
			this->FormLoaderPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->FormLoaderPanel->Location = System::Drawing::Point(186, 69);
			this->FormLoaderPanel->Name = L"FormLoaderPanel";
			this->FormLoaderPanel->Size = System::Drawing::Size(765, 508);
			this->FormLoaderPanel->TabIndex = 2;
			this->FormLoaderPanel->MouseHover += gcnew System::EventHandler(this, &Customermenu::FormLoaderPanel_MouseHover);
			// 
			// UpdatePanel
			// 
			this->UpdatePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->UpdatePanel->Controls->Add(this->CountryCode);
			this->UpdatePanel->Controls->Add(this->MessageLabel);
			this->UpdatePanel->Controls->Add(this->OtpLabel);
			this->UpdatePanel->Controls->Add(this->OtpTxt);
			this->UpdatePanel->Controls->Add(this->UpdateLabel);
			this->UpdatePanel->Controls->Add(this->UpdateCancelBtn);
			this->UpdatePanel->Controls->Add(this->UpdatePanelHeading);
			this->UpdatePanel->Controls->Add(this->UpdateTxt);
			this->UpdatePanel->Controls->Add(this->SendOtpBtn);
			this->UpdatePanel->Controls->Add(this->UpdateProceedBtn);
			this->UpdatePanel->Location = System::Drawing::Point(138, 49);
			this->UpdatePanel->Name = L"UpdatePanel";
			this->UpdatePanel->Size = System::Drawing::Size(505, 249);
			this->UpdatePanel->TabIndex = 28;
			this->UpdatePanel->Visible = false;
			// 
			// CountryCode
			// 
			this->CountryCode->BackColor = System::Drawing::Color::Transparent;
			this->CountryCode->Enabled = false;
			this->CountryCode->FlatAppearance->BorderSize = 0;
			this->CountryCode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CountryCode->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CountryCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->CountryCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CountryCode.Image")));
			this->CountryCode->Location = System::Drawing::Point(198, 114);
			this->CountryCode->Name = L"CountryCode";
			this->CountryCode->Size = System::Drawing::Size(83, 35);
			this->CountryCode->TabIndex = 25;
			this->CountryCode->Text = L"+91";
			this->CountryCode->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->CountryCode->UseVisualStyleBackColor = false;
			// 
			// MessageLabel
			// 
			this->MessageLabel->AutoSize = true;
			this->MessageLabel->BackColor = System::Drawing::Color::Transparent;
			this->MessageLabel->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MessageLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->MessageLabel->Location = System::Drawing::Point(56, 75);
			this->MessageLabel->Name = L"MessageLabel";
			this->MessageLabel->Size = System::Drawing::Size(269, 18);
			this->MessageLabel->TabIndex = 23;
			this->MessageLabel->Text = L"OTP Sent to Registered Mobile Number.";
			this->MessageLabel->Visible = false;
			// 
			// OtpLabel
			// 
			this->OtpLabel->AutoSize = true;
			this->OtpLabel->BackColor = System::Drawing::Color::Transparent;
			this->OtpLabel->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OtpLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->OtpLabel->Location = System::Drawing::Point(44, 155);
			this->OtpLabel->Name = L"OtpLabel";
			this->OtpLabel->Size = System::Drawing::Size(114, 22);
			this->OtpLabel->TabIndex = 23;
			this->OtpLabel->Text = L"Emter OTP :";
			this->OtpLabel->Visible = false;
			// 
			// OtpTxt
			// 
			this->OtpTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->OtpTxt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OtpTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->OtpTxt->Location = System::Drawing::Point(231, 155);
			this->OtpTxt->Name = L"OtpTxt";
			this->OtpTxt->Size = System::Drawing::Size(138, 25);
			this->OtpTxt->TabIndex = 24;
			this->OtpTxt->Visible = false;
			this->OtpTxt->Leave += gcnew System::EventHandler(this, &Customermenu::AccountTxt_Leave);
			// 
			// UpdateLabel
			// 
			this->UpdateLabel->AutoSize = true;
			this->UpdateLabel->BackColor = System::Drawing::Color::Transparent;
			this->UpdateLabel->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->UpdateLabel->Location = System::Drawing::Point(14, 119);
			this->UpdateLabel->Name = L"UpdateLabel";
			this->UpdateLabel->Size = System::Drawing::Size(190, 22);
			this->UpdateLabel->TabIndex = 23;
			this->UpdateLabel->Text = L"Enter New Mobile No.";
			// 
			// UpdateCancelBtn
			// 
			this->UpdateCancelBtn->BackColor = System::Drawing::Color::Purple;
			this->UpdateCancelBtn->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateCancelBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->UpdateCancelBtn->Location = System::Drawing::Point(467, 3);
			this->UpdateCancelBtn->Name = L"UpdateCancelBtn";
			this->UpdateCancelBtn->Size = System::Drawing::Size(35, 33);
			this->UpdateCancelBtn->TabIndex = 18;
			this->UpdateCancelBtn->Text = L"X";
			this->UpdateCancelBtn->UseVisualStyleBackColor = false;
			this->UpdateCancelBtn->Click += gcnew System::EventHandler(this, &Customermenu::UpdateCancelBtn_Click);
			// 
			// UpdatePanelHeading
			// 
			this->UpdatePanelHeading->AutoSize = true;
			this->UpdatePanelHeading->BackColor = System::Drawing::Color::Transparent;
			this->UpdatePanelHeading->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 25, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdatePanelHeading->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->UpdatePanelHeading->Location = System::Drawing::Point(122, 26);
			this->UpdatePanelHeading->Name = L"UpdatePanelHeading";
			this->UpdatePanelHeading->Size = System::Drawing::Size(189, 35);
			this->UpdatePanelHeading->TabIndex = 21;
			this->UpdatePanelHeading->Text = L"Update Info.";
			// 
			// UpdateTxt
			// 
			this->UpdateTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->UpdateTxt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->UpdateTxt->Location = System::Drawing::Point(287, 119);
			this->UpdateTxt->Name = L"UpdateTxt";
			this->UpdateTxt->Size = System::Drawing::Size(180, 25);
			this->UpdateTxt->TabIndex = 24;
			this->UpdateTxt->Leave += gcnew System::EventHandler(this, &Customermenu::UpdateTxt_Leave);
			// 
			// SendOtpBtn
			// 
			this->SendOtpBtn->BackColor = System::Drawing::Color::Purple;
			this->SendOtpBtn->Enabled = false;
			this->SendOtpBtn->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SendOtpBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->SendOtpBtn->Location = System::Drawing::Point(375, 147);
			this->SendOtpBtn->Name = L"SendOtpBtn";
			this->SendOtpBtn->Size = System::Drawing::Size(92, 33);
			this->SendOtpBtn->TabIndex = 17;
			this->SendOtpBtn->Text = L"Send OTP";
			this->SendOtpBtn->UseVisualStyleBackColor = false;
			this->SendOtpBtn->Click += gcnew System::EventHandler(this, &Customermenu::SendOtpBtn_Click);
			// 
			// UpdateProceedBtn
			// 
			this->UpdateProceedBtn->BackColor = System::Drawing::Color::Purple;
			this->UpdateProceedBtn->Enabled = false;
			this->UpdateProceedBtn->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateProceedBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->UpdateProceedBtn->Location = System::Drawing::Point(158, 198);
			this->UpdateProceedBtn->Name = L"UpdateProceedBtn";
			this->UpdateProceedBtn->Size = System::Drawing::Size(123, 33);
			this->UpdateProceedBtn->TabIndex = 17;
			this->UpdateProceedBtn->Text = L"Proceed";
			this->UpdateProceedBtn->UseVisualStyleBackColor = false;
			this->UpdateProceedBtn->Click += gcnew System::EventHandler(this, &Customermenu::UpdateProceedBtn_Click);
			// 
			// TransactionPanel
			// 
			this->TransactionPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TransactionPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->TransactionPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TransactionPanel->Controls->Add(this->NameTxt);
			this->TransactionPanel->Controls->Add(this->label1);
			this->TransactionPanel->Controls->Add(this->label17);
			this->TransactionPanel->Controls->Add(this->label4);
			this->TransactionPanel->Controls->Add(this->DescriptionTxt);
			this->TransactionPanel->Controls->Add(this->label15);
			this->TransactionPanel->Controls->Add(this->Cancelproceedbtn);
			this->TransactionPanel->Controls->Add(this->AccountTxt);
			this->TransactionPanel->Controls->Add(this->ProceedBtn);
			this->TransactionPanel->Controls->Add(this->Ammounttxt);
			this->TransactionPanel->Controls->Add(this->label14);
			this->TransactionPanel->Location = System::Drawing::Point(164, 44);
			this->TransactionPanel->Name = L"TransactionPanel";
			this->TransactionPanel->Size = System::Drawing::Size(413, 325);
			this->TransactionPanel->TabIndex = 27;
			this->TransactionPanel->Visible = false;
			// 
			// NameTxt
			// 
			this->NameTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->NameTxt->Enabled = false;
			this->NameTxt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label4->Location = System::Drawing::Point(24, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 22);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Enter Account No.";
			// 
			// DescriptionTxt
			// 
			this->DescriptionTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->DescriptionTxt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DescriptionTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
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
			// AccountTxt
			// 
			this->AccountTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->AccountTxt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccountTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->AccountTxt->Location = System::Drawing::Point(210, 79);
			this->AccountTxt->Name = L"AccountTxt";
			this->AccountTxt->Size = System::Drawing::Size(180, 25);
			this->AccountTxt->TabIndex = 24;
			this->AccountTxt->Leave += gcnew System::EventHandler(this, &Customermenu::AccountTxt_Leave);
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
			this->Ammounttxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->Ammounttxt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ammounttxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
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
			this->CustomerPanel->PerformLayout();
			this->OtherServicesPanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->FormLoaderPanel->ResumeLayout(false);
			this->UpdatePanel->ResumeLayout(false);
			this->UpdatePanel->PerformLayout();
			this->TransactionPanel->ResumeLayout(false);
			this->TransactionPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: void SendOtp(String^ Mobile)
	{
		String^ result;
		String^ apiKey = "NDUzNjc2NTQzNzM3NDI2NzRmNDUzMzU1NTk1NDY2NGM=";
		String^ numbers = Mobile; // in a comma seperated list
		
		String^ sender = "PIGGYBANK";
		String^ name = CustomerName->Text;

		Random^ rnd = gcnew Random();
		Otp = rnd->Next(100000, 999999).ToString();
		String^ message;
		if(UpdatePanelHeading->Text == "Update Mobile No.")
			message = "Hey " + CustomerName->Text + " Your Otp to change mobile number is " + Otp;
		else
			message = "Hey " + CustomerName->Text + " Your Otp to change password is " + Otp;

		String^ url = "https://api.textlocal.in/send/?apikey=" + apiKey + "&numbers=" + numbers + "&message=" + message + "&sender=" + sender;
		//refer to parameters to complete correct url string

		StreamWriter^ myWriter;
		HttpWebRequest^ objRequest = (HttpWebRequest^)WebRequest::Create(url);
		
		objRequest->Method = "POST";
		objRequest->ContentLength = url->Length;//Encoding.UTF8.GetByteCount(url);
		objRequest->ContentType = "application/x-www-form-urlencoded";
		try
		{
			myWriter = gcnew StreamWriter(objRequest->GetRequestStream());
			myWriter->Write(url);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			myWriter->Close();
		}
		
		HttpWebResponse^ objResponse = (HttpWebResponse^)objRequest->GetResponse();
		StreamReader^ sr = gcnew StreamReader(objResponse->GetResponseStream());
		{
			result = sr->ReadToEnd();
			// Close and clean up the StreamReader
			sr->Close();
			
		}
		
		MessageLabel->Visible = true;
	}
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
			Balance = System::Convert::ToInt16(reader->GetString(0)) + Amount;
			Connect->Close();
			Transactionid += obj.GenerateNumber("Banking.Transaction", "Transactionid");
			Query = "update Banking.Account set Accountbalance ='" + System::Convert::ToString(Balance) + "' WHERE Accountno ='" + ToAccountNo + "'";
			cmd = gcnew MySqlCommand(Query, Connect);
			Connect->Open();
			reader = cmd->ExecuteReader();
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
private: System::Void OtherServicesBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	OtherServicesPanel->Visible = true;
}
private: System::Void DashboardBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	OtherServicesPanel->Visible = false;
}
private: System::Void AccountBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	OtherServicesPanel->Visible = false;
}
private: System::Void TransactionBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	OtherServicesPanel->Visible = false;
}
private: System::Void LogoutBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	OtherServicesPanel->Visible = false;
}
private: System::Void CustomerPanel_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	OtherServicesPanel->Visible = false;
}
private: System::Void FormLoaderPanel_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	OtherServicesPanel->Visible = false;
}
private: System::Void ApplyChequeBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	NavigationPanel->Height = ApplyChequeBtn->Height;
	NavigationPanel->Top = ApplyChequeBtn->Top;
	NavigationPanel->Left = ApplyChequeBtn->Left;
	FormLabel->Text = "Account";
	FormLoad(gcnew Account(this, Data, "FromChequeBook", "Username"));
	
}
private: System::Void UpdateMobileBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	UpdatePanelHeading->Text = "Update Mobile No.";
	UpdateLabel->Text = "Enter New Mobile No.";
	if (FormLoaderPanel->Controls->Count > 0)
		FormLoaderPanel->Controls->RemoveAt(0);
	UpdatePanel->Visible = true;
	FormLoaderPanel->Controls->Clear();
	FormLoaderPanel->Controls->Add(UpdatePanel);
	
}
private: System::Void UpdateCancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	UpdatePanel->Visible = false;
}
private: System::Void ChangePasswordBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	UpdatePanelHeading->Text = "Change Password";
	UpdateLabel->Text = "Enter New Password";
	if (FormLoaderPanel->Controls->Count > 0)
		FormLoaderPanel->Controls->RemoveAt(0);
	UpdatePanel->Visible = true;
	FormLoaderPanel->Controls->Clear();
	FormLoaderPanel->Controls->Add(UpdatePanel);
	
}
private: System::Void UpdateProceedBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (Otp == OtpTxt->Text)
	{
		if (UpdatePanelHeading->Text == "Update Mobile No.")
			Query = "update Banking.Customer set Mob = '" + UpdateTxt->Text + "' where Accountno = '" + AccountNoTxt->Text + "'";
		else
			Query = "update Banking.Customer set Password = '" + UpdateTxt->Text + "' where Accountno = '" + AccountNoTxt->Text + "'";

		MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
		MySqlDataReader^ reader;
		try
		{
			Connect->Open();
			reader = cmd->ExecuteReader();
			Connect->Close();
			MessageBox::Show("Data Updated Successfully.");
			UpdatePanel->Visible = false;
		}
		catch (Exception^ ex)
		{
			Connect->Close();
			MessageBox::Show(ex->Message);
		}

	}
	else
	{
		MessageBox::Show("Invalid OTP");
	}
	
}
private: System::Void SendOtpBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	
	OtpLabel->Visible = true;
	OtpTxt->Visible = true;
	UpdateTxt->Enabled = false;
	SendOtpBtn->Enabled = false;

	Query = "select Mob from Banking.Customer where Accountno = '" + AccountNoTxt->Text + "'";
	MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
	MySqlDataReader^ reader;
	try
	{
		Connect->Open();
		reader = cmd->ExecuteReader();
		reader->Read();
		SendOtp("+91" + reader->GetString(0));
		Connect->Close();
	}
	catch (Exception^ ex)
	{
		Connect->Close();
		MessageBox::Show(ex->Message);
	}
}
private: System::Void UpdateTxt_Leave(System::Object^ sender, System::EventArgs^ e) {

	if (UpdateTxt->Text == "" || UpdateTxt->Text->Length != 10)
	{
		MessageBox::Show("Invalid Mobile No.");
	}
	else
	{
		SendOtpBtn->Enabled = true;
	}
}
};
}
