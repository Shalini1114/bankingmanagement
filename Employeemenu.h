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

	/// <summary>
	/// Summary for Employeemenu
	 
	/// </summary>
	public ref class Employeemenu : public System::Windows::Forms::Form
	{
	public:
		Form^ EMenu;
		String^ Key;
		String^ RadioBtn;
		String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";
		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);

	private: System::Windows::Forms::Panel^ SearchPanel;
	public:
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ Cancelempbtn;
	private: System::Windows::Forms::Button^ SearchBtn;
	private: System::Windows::Forms::TextBox^ SearchTextBox;
	private: System::Windows::Forms::Label^ SearchLabel;
	private: System::Windows::Forms::Label^ SearchPanelLabel;
		   String^ Query;
			
	public:
		Employeemenu(void)
		{
			InitializeComponent();
			SearchAutoComplete();
			//
			//TODO: Add the constructor code here
			//
		}


		Employeemenu(Form^ obj)
		{
			InitializeComponent();
			SearchAutoComplete();
			EMenu = obj;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Employeemenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Employeemenupanel;
	protected:

	private: System::Windows::Forms::Label^ Employeelabelmenu;
	private: System::Windows::Forms::Button^ Customerempbtn;
	private: System::Windows::Forms::Panel^ Customeremppanel;
	private: System::Windows::Forms::Button^ Accountdetailcusempbtn;
	private: System::Windows::Forms::Button^ Searchcusempbtn;
	private: System::Windows::Forms::Button^ Editcusempbtn;
	private: System::Windows::Forms::Button^ Deletecusempbtn;
	private: System::Windows::Forms::Button^ Addcusempbtn;
	private: System::Windows::Forms::Panel^ Accountcustomerpanel;
	private: System::Windows::Forms::Button^ Statementempbtn;

	private: System::Windows::Forms::Button^ Detailsempbtn;
		

	private: System::Windows::Forms::Button^ Depositempbtn;





	private: System::Windows::Forms::Panel^ panel1;
















	private: System::Windows::Forms::Button^ Accountcustomerbtn;
	private: System::Windows::Forms::Button^ Otherservicesempbtn;
	private: System::Windows::Forms::Panel^ Otherservicesemppanel;
	private: System::Windows::Forms::Button^ Updatekycempbtn;
	private: System::Windows::Forms::Button^ Updatemobempbtn;
	private: System::Windows::Forms::Button^ Appluchequeempbtn;
	private: System::Windows::Forms::Button^ Applycreditempbtn;
	private: System::Windows::Forms::Button^ Applydebitempbtn;
	private: System::Windows::Forms::Button^ Withdrawempbtn;
	private: System::Windows::Forms::Button^ LogoutBtn;
	private: System::Windows::Forms::Panel^ MessagePanel;

	private: System::Windows::Forms::Label^ MessageLabel;
	private: System::Windows::Forms::Button^ NoBtn;
	private: System::Windows::Forms::Button^ OkBtn;
	private: System::Windows::Forms::Button^ YesBtn;











	protected:

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
			this->Employeemenupanel = (gcnew System::Windows::Forms::Panel());
			this->LogoutBtn = (gcnew System::Windows::Forms::Button());
			this->Otherservicesemppanel = (gcnew System::Windows::Forms::Panel());
			this->Updatekycempbtn = (gcnew System::Windows::Forms::Button());
			this->Updatemobempbtn = (gcnew System::Windows::Forms::Button());
			this->Appluchequeempbtn = (gcnew System::Windows::Forms::Button());
			this->Applycreditempbtn = (gcnew System::Windows::Forms::Button());
			this->Applydebitempbtn = (gcnew System::Windows::Forms::Button());
			this->Otherservicesempbtn = (gcnew System::Windows::Forms::Button());
			this->Accountcustomerpanel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Statementempbtn = (gcnew System::Windows::Forms::Button());
			this->Detailsempbtn = (gcnew System::Windows::Forms::Button());
			this->Depositempbtn = (gcnew System::Windows::Forms::Button());
			this->Withdrawempbtn = (gcnew System::Windows::Forms::Button());
			this->Accountcustomerbtn = (gcnew System::Windows::Forms::Button());
			this->Customeremppanel = (gcnew System::Windows::Forms::Panel());
			this->Accountdetailcusempbtn = (gcnew System::Windows::Forms::Button());
			this->Searchcusempbtn = (gcnew System::Windows::Forms::Button());
			this->Editcusempbtn = (gcnew System::Windows::Forms::Button());
			this->Deletecusempbtn = (gcnew System::Windows::Forms::Button());
			this->Addcusempbtn = (gcnew System::Windows::Forms::Button());
			this->Customerempbtn = (gcnew System::Windows::Forms::Button());
			this->Employeelabelmenu = (gcnew System::Windows::Forms::Label());
			this->MessagePanel = (gcnew System::Windows::Forms::Panel());
			this->NoBtn = (gcnew System::Windows::Forms::Button());
			this->OkBtn = (gcnew System::Windows::Forms::Button());
			this->YesBtn = (gcnew System::Windows::Forms::Button());
			this->MessageLabel = (gcnew System::Windows::Forms::Label());
			this->SearchPanel = (gcnew System::Windows::Forms::Panel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->Cancelempbtn = (gcnew System::Windows::Forms::Button());
			this->SearchBtn = (gcnew System::Windows::Forms::Button());
			this->SearchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SearchLabel = (gcnew System::Windows::Forms::Label());
			this->SearchPanelLabel = (gcnew System::Windows::Forms::Label());
			this->Employeemenupanel->SuspendLayout();
			this->Otherservicesemppanel->SuspendLayout();
			this->Accountcustomerpanel->SuspendLayout();
			this->Customeremppanel->SuspendLayout();
			this->MessagePanel->SuspendLayout();
			this->SearchPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Employeemenupanel
			// 
			this->Employeemenupanel->AutoScroll = true;
			this->Employeemenupanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Employeemenupanel->Controls->Add(this->LogoutBtn);
			this->Employeemenupanel->Controls->Add(this->Otherservicesemppanel);
			this->Employeemenupanel->Controls->Add(this->Otherservicesempbtn);
			this->Employeemenupanel->Controls->Add(this->Accountcustomerpanel);
			this->Employeemenupanel->Controls->Add(this->Accountcustomerbtn);
			this->Employeemenupanel->Controls->Add(this->Customeremppanel);
			this->Employeemenupanel->Controls->Add(this->Customerempbtn);
			this->Employeemenupanel->Controls->Add(this->Employeelabelmenu);
			this->Employeemenupanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->Employeemenupanel->Location = System::Drawing::Point(0, 0);
			this->Employeemenupanel->Name = L"Employeemenupanel";
			this->Employeemenupanel->Size = System::Drawing::Size(240, 446);
			this->Employeemenupanel->TabIndex = 0;
			this->Employeemenupanel->MouseHover += gcnew System::EventHandler(this, &Employeemenu::Employeemenupanel_MouseHover);
			// 
			// LogoutBtn
			// 
			this->LogoutBtn->BackColor = System::Drawing::Color::Purple;
			this->LogoutBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->LogoutBtn->Font = (gcnew System::Drawing::Font(L"Wide Latin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoutBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->LogoutBtn->Location = System::Drawing::Point(0, 751);
			this->LogoutBtn->Name = L"LogoutBtn";
			this->LogoutBtn->Size = System::Drawing::Size(223, 40);
			this->LogoutBtn->TabIndex = 20;
			this->LogoutBtn->Text = L"LOGOUT";
			this->LogoutBtn->UseVisualStyleBackColor = false;
			this->LogoutBtn->Click += gcnew System::EventHandler(this, &Employeemenu::LogoutBtn_Click);
			this->LogoutBtn->MouseHover += gcnew System::EventHandler(this, &Employeemenu::LogoutBtn_MouseHover);
			// 
			// Otherservicesemppanel
			// 
			this->Otherservicesemppanel->AutoSize = true;
			this->Otherservicesemppanel->Controls->Add(this->Updatekycempbtn);
			this->Otherservicesemppanel->Controls->Add(this->Updatemobempbtn);
			this->Otherservicesemppanel->Controls->Add(this->Appluchequeempbtn);
			this->Otherservicesemppanel->Controls->Add(this->Applycreditempbtn);
			this->Otherservicesemppanel->Controls->Add(this->Applydebitempbtn);
			this->Otherservicesemppanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Otherservicesemppanel->Location = System::Drawing::Point(0, 556);
			this->Otherservicesemppanel->Name = L"Otherservicesemppanel";
			this->Otherservicesemppanel->Size = System::Drawing::Size(223, 195);
			this->Otherservicesemppanel->TabIndex = 1;
			this->Otherservicesemppanel->Visible = false;
			// 
			// Updatekycempbtn
			// 
			this->Updatekycempbtn->BackColor = System::Drawing::Color::Tan;
			this->Updatekycempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Updatekycempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Updatekycempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Updatekycempbtn->Location = System::Drawing::Point(0, 156);
			this->Updatekycempbtn->Name = L"Updatekycempbtn";
			this->Updatekycempbtn->Size = System::Drawing::Size(223, 39);
			this->Updatekycempbtn->TabIndex = 17;
			this->Updatekycempbtn->Text = L"UPDATE KYC";
			this->Updatekycempbtn->UseVisualStyleBackColor = false;
			this->Updatekycempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Updatekycempbtn_Click);
			// 
			// Updatemobempbtn
			// 
			this->Updatemobempbtn->BackColor = System::Drawing::Color::Tan;
			this->Updatemobempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Updatemobempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Updatemobempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Updatemobempbtn->Location = System::Drawing::Point(0, 117);
			this->Updatemobempbtn->Name = L"Updatemobempbtn";
			this->Updatemobempbtn->Size = System::Drawing::Size(223, 39);
			this->Updatemobempbtn->TabIndex = 16;
			this->Updatemobempbtn->Text = L"UPDATE MOB NO";
			this->Updatemobempbtn->UseVisualStyleBackColor = false;
			this->Updatemobempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Updatemobempbtn_Click);
			// 
			// Appluchequeempbtn
			// 
			this->Appluchequeempbtn->BackColor = System::Drawing::Color::Tan;
			this->Appluchequeempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Appluchequeempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Appluchequeempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Appluchequeempbtn->Location = System::Drawing::Point(0, 78);
			this->Appluchequeempbtn->Name = L"Appluchequeempbtn";
			this->Appluchequeempbtn->Size = System::Drawing::Size(223, 39);
			this->Appluchequeempbtn->TabIndex = 15;
			this->Appluchequeempbtn->Text = L"APPLY CHEQUE BOOK";
			this->Appluchequeempbtn->UseVisualStyleBackColor = false;
			this->Appluchequeempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Appluchequeempbtn_Click);
			// 
			// Applycreditempbtn
			// 
			this->Applycreditempbtn->BackColor = System::Drawing::Color::Tan;
			this->Applycreditempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Applycreditempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Applycreditempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Applycreditempbtn->Location = System::Drawing::Point(0, 39);
			this->Applycreditempbtn->Name = L"Applycreditempbtn";
			this->Applycreditempbtn->Size = System::Drawing::Size(223, 39);
			this->Applycreditempbtn->TabIndex = 14;
			this->Applycreditempbtn->Text = L"APPLY CREDIT CARD";
			this->Applycreditempbtn->UseVisualStyleBackColor = false;
			this->Applycreditempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Applycreditempbtn_Click);
			// 
			// Applydebitempbtn
			// 
			this->Applydebitempbtn->BackColor = System::Drawing::Color::Tan;
			this->Applydebitempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Applydebitempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Applydebitempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Applydebitempbtn->Location = System::Drawing::Point(0, 0);
			this->Applydebitempbtn->Name = L"Applydebitempbtn";
			this->Applydebitempbtn->Size = System::Drawing::Size(223, 39);
			this->Applydebitempbtn->TabIndex = 13;
			this->Applydebitempbtn->Text = L"APPLY DEBIT CARD";
			this->Applydebitempbtn->UseVisualStyleBackColor = false;
			this->Applydebitempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Applydebitempbtn_Click);
			// 
			// Otherservicesempbtn
			// 
			this->Otherservicesempbtn->BackColor = System::Drawing::Color::Purple;
			this->Otherservicesempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Otherservicesempbtn->Font = (gcnew System::Drawing::Font(L"Wide Latin", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Otherservicesempbtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->Otherservicesempbtn->Location = System::Drawing::Point(0, 485);
			this->Otherservicesempbtn->Name = L"Otherservicesempbtn";
			this->Otherservicesempbtn->Size = System::Drawing::Size(223, 71);
			this->Otherservicesempbtn->TabIndex = 19;
			this->Otherservicesempbtn->Text = L"OTHER SERVICES";
			this->Otherservicesempbtn->UseVisualStyleBackColor = false;
			this->Otherservicesempbtn->MouseHover += gcnew System::EventHandler(this, &Employeemenu::Otherservicesempbtn_MouseHover);
			// 
			// Accountcustomerpanel
			// 
			this->Accountcustomerpanel->Controls->Add(this->panel1);
			this->Accountcustomerpanel->Controls->Add(this->Statementempbtn);
			this->Accountcustomerpanel->Controls->Add(this->Detailsempbtn);
			this->Accountcustomerpanel->Controls->Add(this->Depositempbtn);
			this->Accountcustomerpanel->Controls->Add(this->Withdrawempbtn);
			this->Accountcustomerpanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Accountcustomerpanel->Location = System::Drawing::Point(0, 330);
			this->Accountcustomerpanel->Name = L"Accountcustomerpanel";
			this->Accountcustomerpanel->Size = System::Drawing::Size(223, 155);
			this->Accountcustomerpanel->TabIndex = 1;
			this->Accountcustomerpanel->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 200);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 17);
			this->panel1->TabIndex = 7;
			// 
			// Statementempbtn
			// 
			this->Statementempbtn->BackColor = System::Drawing::Color::Tan;
			this->Statementempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Statementempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Statementempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Statementempbtn->Location = System::Drawing::Point(0, 117);
			this->Statementempbtn->Name = L"Statementempbtn";
			this->Statementempbtn->Size = System::Drawing::Size(223, 39);
			this->Statementempbtn->TabIndex = 12;
			this->Statementempbtn->Text = L"STATEMENT";
			this->Statementempbtn->UseVisualStyleBackColor = false;
			this->Statementempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Statementempbtn_Click);
			// 
			// Detailsempbtn
			// 
			this->Detailsempbtn->BackColor = System::Drawing::Color::Tan;
			this->Detailsempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Detailsempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Detailsempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Detailsempbtn->Location = System::Drawing::Point(0, 78);
			this->Detailsempbtn->Name = L"Detailsempbtn";
			this->Detailsempbtn->Size = System::Drawing::Size(223, 39);
			this->Detailsempbtn->TabIndex = 11;
			this->Detailsempbtn->Text = L"DETAILS";
			this->Detailsempbtn->UseVisualStyleBackColor = false;
			this->Detailsempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Detailsempbtn_Click);
			// 
			// Depositempbtn
			// 
			this->Depositempbtn->BackColor = System::Drawing::Color::Tan;
			this->Depositempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Depositempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Depositempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Depositempbtn->Location = System::Drawing::Point(0, 39);
			this->Depositempbtn->Name = L"Depositempbtn";
			this->Depositempbtn->Size = System::Drawing::Size(223, 39);
			this->Depositempbtn->TabIndex = 10;
			this->Depositempbtn->Text = L"DEPOSIT";
			this->Depositempbtn->UseVisualStyleBackColor = false;
			this->Depositempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Depositempbtn_Click);
			// 
			// Withdrawempbtn
			// 
			this->Withdrawempbtn->BackColor = System::Drawing::Color::Tan;
			this->Withdrawempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Withdrawempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Withdrawempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Withdrawempbtn->Location = System::Drawing::Point(0, 0);
			this->Withdrawempbtn->Name = L"Withdrawempbtn";
			this->Withdrawempbtn->Size = System::Drawing::Size(223, 39);
			this->Withdrawempbtn->TabIndex = 9;
			this->Withdrawempbtn->Text = L"WITHDRAW";
			this->Withdrawempbtn->UseVisualStyleBackColor = false;
			this->Withdrawempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Withdrawempbtn_Click);
			// 
			// Accountcustomerbtn
			// 
			this->Accountcustomerbtn->BackColor = System::Drawing::Color::Purple;
			this->Accountcustomerbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Accountcustomerbtn->Font = (gcnew System::Drawing::Font(L"Wide Latin", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accountcustomerbtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->Accountcustomerbtn->Location = System::Drawing::Point(0, 284);
			this->Accountcustomerbtn->Name = L"Accountcustomerbtn";
			this->Accountcustomerbtn->Size = System::Drawing::Size(223, 46);
			this->Accountcustomerbtn->TabIndex = 5;
			this->Accountcustomerbtn->Text = L"ACCOUNT";
			this->Accountcustomerbtn->UseVisualStyleBackColor = false;
			this->Accountcustomerbtn->MouseHover += gcnew System::EventHandler(this, &Employeemenu::Accountcustomerbtn_MouseHover);
			// 
			// Customeremppanel
			// 
			this->Customeremppanel->AutoSize = true;
			this->Customeremppanel->Controls->Add(this->Accountdetailcusempbtn);
			this->Customeremppanel->Controls->Add(this->Searchcusempbtn);
			this->Customeremppanel->Controls->Add(this->Editcusempbtn);
			this->Customeremppanel->Controls->Add(this->Deletecusempbtn);
			this->Customeremppanel->Controls->Add(this->Addcusempbtn);
			this->Customeremppanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Customeremppanel->Location = System::Drawing::Point(0, 70);
			this->Customeremppanel->Name = L"Customeremppanel";
			this->Customeremppanel->Size = System::Drawing::Size(223, 214);
			this->Customeremppanel->TabIndex = 4;
			this->Customeremppanel->Visible = false;
			// 
			// Accountdetailcusempbtn
			// 
			this->Accountdetailcusempbtn->BackColor = System::Drawing::Color::Tan;
			this->Accountdetailcusempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Accountdetailcusempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Accountdetailcusempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Accountdetailcusempbtn->Location = System::Drawing::Point(0, 168);
			this->Accountdetailcusempbtn->Name = L"Accountdetailcusempbtn";
			this->Accountdetailcusempbtn->Size = System::Drawing::Size(223, 46);
			this->Accountdetailcusempbtn->TabIndex = 8;
			this->Accountdetailcusempbtn->Text = L"ACCOUNT DETAILS";
			this->Accountdetailcusempbtn->UseVisualStyleBackColor = false;
			this->Accountdetailcusempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Accountdetailcusempbtn_Click);
			// 
			// Searchcusempbtn
			// 
			this->Searchcusempbtn->BackColor = System::Drawing::Color::Tan;
			this->Searchcusempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Searchcusempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchcusempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Searchcusempbtn->Location = System::Drawing::Point(0, 132);
			this->Searchcusempbtn->Name = L"Searchcusempbtn";
			this->Searchcusempbtn->Size = System::Drawing::Size(223, 36);
			this->Searchcusempbtn->TabIndex = 7;
			this->Searchcusempbtn->Text = L"SEARCH CUSTOMER";
			this->Searchcusempbtn->UseVisualStyleBackColor = false;
			this->Searchcusempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Searchcusempbtn_Click);
			// 
			// Editcusempbtn
			// 
			this->Editcusempbtn->BackColor = System::Drawing::Color::Tan;
			this->Editcusempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Editcusempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Editcusempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Editcusempbtn->Location = System::Drawing::Point(0, 90);
			this->Editcusempbtn->Name = L"Editcusempbtn";
			this->Editcusempbtn->Size = System::Drawing::Size(223, 42);
			this->Editcusempbtn->TabIndex = 6;
			this->Editcusempbtn->Text = L"EDIT CUSTOMER";
			this->Editcusempbtn->UseVisualStyleBackColor = false;
			this->Editcusempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Editcusempbtn_Click);
			// 
			// Deletecusempbtn
			// 
			this->Deletecusempbtn->BackColor = System::Drawing::Color::Tan;
			this->Deletecusempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Deletecusempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Deletecusempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Deletecusempbtn->Location = System::Drawing::Point(0, 44);
			this->Deletecusempbtn->Name = L"Deletecusempbtn";
			this->Deletecusempbtn->Size = System::Drawing::Size(223, 46);
			this->Deletecusempbtn->TabIndex = 5;
			this->Deletecusempbtn->Text = L"DELETE CUSTOMER";
			this->Deletecusempbtn->UseVisualStyleBackColor = false;
			this->Deletecusempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Deletecusempbtn_Click);
			// 
			// Addcusempbtn
			// 
			this->Addcusempbtn->BackColor = System::Drawing::Color::Tan;
			this->Addcusempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Addcusempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addcusempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Addcusempbtn->Location = System::Drawing::Point(0, 0);
			this->Addcusempbtn->Name = L"Addcusempbtn";
			this->Addcusempbtn->Size = System::Drawing::Size(223, 44);
			this->Addcusempbtn->TabIndex = 4;
			this->Addcusempbtn->Text = L"ADD CUSTOMER";
			this->Addcusempbtn->UseVisualStyleBackColor = false;
			this->Addcusempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Addcusempbtn_Click);
			// 
			// Customerempbtn
			// 
			this->Customerempbtn->BackColor = System::Drawing::Color::Purple;
			this->Customerempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Customerempbtn->Font = (gcnew System::Drawing::Font(L"Wide Latin", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customerempbtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->Customerempbtn->Location = System::Drawing::Point(0, 23);
			this->Customerempbtn->Name = L"Customerempbtn";
			this->Customerempbtn->Size = System::Drawing::Size(223, 47);
			this->Customerempbtn->TabIndex = 3;
			this->Customerempbtn->Text = L"CUSTOMER";
			this->Customerempbtn->UseVisualStyleBackColor = false;
			this->Customerempbtn->MouseHover += gcnew System::EventHandler(this, &Employeemenu::Customerempbtn_MouseHover);
			// 
			// Employeelabelmenu
			// 
			this->Employeelabelmenu->AutoSize = true;
			this->Employeelabelmenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->Employeelabelmenu->Font = (gcnew System::Drawing::Font(L"Wide Latin", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Employeelabelmenu->ForeColor = System::Drawing::Color::Purple;
			this->Employeelabelmenu->Location = System::Drawing::Point(0, 0);
			this->Employeelabelmenu->Name = L"Employeelabelmenu";
			this->Employeelabelmenu->Size = System::Drawing::Size(231, 23);
			this->Employeelabelmenu->TabIndex = 1;
			this->Employeelabelmenu->Text = L"EMPLOYEE";
			// 
			// MessagePanel
			// 
			this->MessagePanel->BackColor = System::Drawing::Color::Purple;
			this->MessagePanel->Controls->Add(this->NoBtn);
			this->MessagePanel->Controls->Add(this->OkBtn);
			this->MessagePanel->Controls->Add(this->YesBtn);
			this->MessagePanel->Controls->Add(this->MessageLabel);
			this->MessagePanel->Location = System::Drawing::Point(259, 32);
			this->MessagePanel->Name = L"MessagePanel";
			this->MessagePanel->Size = System::Drawing::Size(640, 128);
			this->MessagePanel->TabIndex = 1;
			this->MessagePanel->Visible = false;
			// 
			// NoBtn
			// 
			this->NoBtn->BackColor = System::Drawing::Color::Cornsilk;
			this->NoBtn->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NoBtn->ForeColor = System::Drawing::Color::Purple;
			this->NoBtn->Location = System::Drawing::Point(400, 72);
			this->NoBtn->Name = L"NoBtn";
			this->NoBtn->Size = System::Drawing::Size(83, 38);
			this->NoBtn->TabIndex = 1;
			this->NoBtn->Text = L"No";
			this->NoBtn->UseVisualStyleBackColor = false;
			this->NoBtn->Click += gcnew System::EventHandler(this, &Employeemenu::NoBtn_Click);
			// 
			// OkBtn
			// 
			this->OkBtn->BackColor = System::Drawing::Color::Cornsilk;
			this->OkBtn->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OkBtn->ForeColor = System::Drawing::Color::Purple;
			this->OkBtn->Location = System::Drawing::Point(235, 72);
			this->OkBtn->Name = L"OkBtn";
			this->OkBtn->Size = System::Drawing::Size(83, 38);
			this->OkBtn->TabIndex = 1;
			this->OkBtn->Text = L"OK";
			this->OkBtn->UseVisualStyleBackColor = false;
			this->OkBtn->Click += gcnew System::EventHandler(this, &Employeemenu::OkBtn_Click);
			// 
			// YesBtn
			// 
			this->YesBtn->BackColor = System::Drawing::Color::Cornsilk;
			this->YesBtn->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YesBtn->ForeColor = System::Drawing::Color::Purple;
			this->YesBtn->Location = System::Drawing::Point(81, 72);
			this->YesBtn->Name = L"YesBtn";
			this->YesBtn->Size = System::Drawing::Size(83, 38);
			this->YesBtn->TabIndex = 1;
			this->YesBtn->Text = L"Yes";
			this->YesBtn->UseVisualStyleBackColor = false;
			this->YesBtn->Click += gcnew System::EventHandler(this, &Employeemenu::YesBtn_Click);
			// 
			// MessageLabel
			// 
			this->MessageLabel->AutoSize = true;
			this->MessageLabel->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MessageLabel->ForeColor = System::Drawing::Color::Cornsilk;
			this->MessageLabel->Location = System::Drawing::Point(28, 26);
			this->MessageLabel->Name = L"MessageLabel";
			this->MessageLabel->Size = System::Drawing::Size(73, 21);
			this->MessageLabel->TabIndex = 0;
			this->MessageLabel->Text = L"Message";
			// 
			// SearchPanel
			// 
			this->SearchPanel->BackColor = System::Drawing::Color::Cornsilk;
			this->SearchPanel->Controls->Add(this->radioButton3);
			this->SearchPanel->Controls->Add(this->radioButton2);
			this->SearchPanel->Controls->Add(this->radioButton1);
			this->SearchPanel->Controls->Add(this->Cancelempbtn);
			this->SearchPanel->Controls->Add(this->SearchBtn);
			this->SearchPanel->Controls->Add(this->SearchTextBox);
			this->SearchPanel->Controls->Add(this->SearchLabel);
			this->SearchPanel->Controls->Add(this->SearchPanelLabel);
			this->SearchPanel->Location = System::Drawing::Point(384, 106);
			this->SearchPanel->Name = L"SearchPanel";
			this->SearchPanel->Size = System::Drawing::Size(374, 212);
			this->SearchPanel->TabIndex = 8;
			this->SearchPanel->Visible = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::Purple;
			this->radioButton3->Location = System::Drawing::Point(232, 61);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(89, 26);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->Text = L"Aadhar";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Employeemenu::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::Purple;
			this->radioButton2->Location = System::Drawing::Point(139, 61);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(51, 26);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->Text = L"ID";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Employeemenu::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::Purple;
			this->radioButton1->Location = System::Drawing::Point(43, 61);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(74, 26);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Name";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Employeemenu::radioButton1_CheckedChanged);
			// 
			// Cancelempbtn
			// 
			this->Cancelempbtn->BackColor = System::Drawing::Color::Purple;
			this->Cancelempbtn->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelempbtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->Cancelempbtn->Location = System::Drawing::Point(339, 1);
			this->Cancelempbtn->Name = L"Cancelempbtn";
			this->Cancelempbtn->Size = System::Drawing::Size(34, 30);
			this->Cancelempbtn->TabIndex = 5;
			this->Cancelempbtn->Text = L"X";
			this->Cancelempbtn->UseVisualStyleBackColor = false;
			this->Cancelempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Cancelempbtn_Click);
			// 
			// SearchBtn
			// 
			this->SearchBtn->BackColor = System::Drawing::Color::Purple;
			this->SearchBtn->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->SearchBtn->Location = System::Drawing::Point(139, 148);
			this->SearchBtn->Name = L"SearchBtn";
			this->SearchBtn->Size = System::Drawing::Size(122, 38);
			this->SearchBtn->TabIndex = 4;
			this->SearchBtn->Text = L"Search";
			this->SearchBtn->UseVisualStyleBackColor = false;
			this->SearchBtn->Click += gcnew System::EventHandler(this, &Employeemenu::SearchBtn_Click);
			// 
			// SearchTextBox
			// 
			this->SearchTextBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->SearchTextBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->SearchTextBox->BackColor = System::Drawing::Color::Purple;
			this->SearchTextBox->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchTextBox->ForeColor = System::Drawing::Color::Cornsilk;
			this->SearchTextBox->Location = System::Drawing::Point(140, 110);
			this->SearchTextBox->Name = L"SearchTextBox";
			this->SearchTextBox->Size = System::Drawing::Size(221, 31);
			this->SearchTextBox->TabIndex = 3;
			// 
			// SearchLabel
			// 
			this->SearchLabel->AutoSize = true;
			this->SearchLabel->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchLabel->ForeColor = System::Drawing::Color::Purple;
			this->SearchLabel->Location = System::Drawing::Point(2, 114);
			this->SearchLabel->Name = L"SearchLabel";
			this->SearchLabel->Size = System::Drawing::Size(103, 21);
			this->SearchLabel->TabIndex = 2;
			this->SearchLabel->Text = L"Enter Name";
			// 
			// SearchPanelLabel
			// 
			this->SearchPanelLabel->AutoSize = true;
			this->SearchPanelLabel->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SearchPanelLabel->ForeColor = System::Drawing::Color::Purple;
			this->SearchPanelLabel->Location = System::Drawing::Point(64, 12);
			this->SearchPanelLabel->Name = L"SearchPanelLabel";
			this->SearchPanelLabel->Size = System::Drawing::Size(219, 29);
			this->SearchPanelLabel->TabIndex = 0;
			this->SearchPanelLabel->Text = L"Search Employee";
			// 
			// Employeemenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(911, 446);
			this->Controls->Add(this->MessagePanel);
			this->Controls->Add(this->SearchPanel);
			this->Controls->Add(this->Employeemenupanel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Employeemenu";
			this->Text = L"Employeemenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Employeemenu::Employeemenu_Load);
			this->MouseHover += gcnew System::EventHandler(this, &Employeemenu::Employeemenu_MouseHover);
			this->Employeemenupanel->ResumeLayout(false);
			this->Employeemenupanel->PerformLayout();
			this->Otherservicesemppanel->ResumeLayout(false);
			this->Accountcustomerpanel->ResumeLayout(false);
			this->Customeremppanel->ResumeLayout(false);
			this->MessagePanel->ResumeLayout(false);
			this->MessagePanel->PerformLayout();
			this->SearchPanel->ResumeLayout(false);
			this->SearchPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
		public: void SearchAutoComplete()
		{
			try
			{
				AutoCompleteStringCollection^ Collection = gcnew AutoCompleteStringCollection();

				Query = "select " + RadioBtn + " from Banking.Customer";
				MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
				Connect->Open();
				MySqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read())
				{
					Collection->Add(reader->GetString(RadioBtn));
				}
				Connect->Close();
				SearchTextBox->AutoCompleteCustomSource = Collection;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
				Connect->Close();
			}
		}
		public: void HideAllSubMenu()
		{
			Customeremppanel->Visible = false;
			Accountcustomerpanel->Visible = false;
			Otherservicesemppanel->Visible = false;
		}
private: System::Void Employeemenupanel_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	HideAllSubMenu();
}
private: System::Void Employeemenu_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	HideAllSubMenu();
}
private: System::Void Customerempbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	HideAllSubMenu();
	Customeremppanel->Visible = true;
}
private: System::Void Accountcustomerbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	HideAllSubMenu();
	Accountcustomerpanel->Visible = true;
}
private: System::Void Otherservicesempbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	HideAllSubMenu();
	Otherservicesemppanel->Visible = true;
}
private: System::Void LogoutBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	HideAllSubMenu();
}
private: System::Void LogoutBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageLabel->Text = "Are you sure want to logout?";
	YesBtn->Visible = true;
	NoBtn->Visible = true;
	OkBtn->Visible = false;
	MessagePanel->Visible = true;
	Employeemenupanel->Visible = false;
}
private: System::Void YesBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	EMenu->Show();
	this->Hide();
}
private: System::Void NoBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	MessagePanel->Visible = false;
	Employeemenupanel->Visible = true;
}
private: System::Void OkBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	MessagePanel->Visible = false;
	Employeemenupanel->Visible = true;
}
private: System::Void SearchBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Key == "FromDelete Customer" || Key == "FromSearch Customer" || Key == "FromEdit Customer" || Key == "FromUpdateMob")
	{
		Query = "SELECT " + RadioBtn + " FROM Banking.Customer WHERE " + RadioBtn + " = '" + SearchTextBox->Text + "'";
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			Connect->Open();
			MySqlDataReader^ reader = cmd->ExecuteReader();
			if (reader->Read())
			{
				Connect->Close();
				AddCustomer^ form = gcnew AddCustomer(this, SearchTextBox->Text, Key, RadioBtn);
				form->Show();
				this->Hide();
			}
			else
			{
				Connect->Close();
				MessagePanel->Visible = true;
				SearchPanel->Visible = false;
				MessageLabel->Text = "Data Not Found";
				OkBtn->Visible = true;
				YesBtn->Visible = false;
				NoBtn->Visible = false;
			}
		}
		catch (Exception^ ex)
		{
			Connect->Close();
			MessagePanel->Visible = true;
			MessageLabel->Text = ex->Message;
			OkBtn->Visible = true;
			YesBtn->Visible = false;
			NoBtn->Visible = false;
		}
	}
	else if (Key == "FromDetail Customer" || Key == "FromWithdraw" || Key == "FromDeposit" || Key == "FromTransactionDetail" || Key == "FromStatement" || Key == "FromDebitCard" || Key == "FromCreditCard" || Key == "FromChequeBook")
	{
		Query = "SELECT " + RadioBtn + " FROM Banking.Account WHERE " + RadioBtn + " = '" + SearchTextBox->Text + "'";
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			Connect->Open();
			MySqlDataReader^ reader = cmd->ExecuteReader();
			if (reader->Read())
			{
				Connect->Close();
				Account^ form = gcnew Account(this, SearchTextBox->Text, Key, RadioBtn);
				form->Show();
				this->Hide();
			}
			else
			{
				Connect->Close();
				MessagePanel->Visible = true;
				SearchPanel->Visible = false;
				MessageLabel->Text = "Data Not Found";
				OkBtn->Visible = true;
				YesBtn->Visible = false;
				NoBtn->Visible = false;
			}
		}
		catch (Exception^ ex)
		{
			Connect->Close();
			MessagePanel->Visible = true;
			MessageLabel->Text = ex->Message;
			OkBtn->Visible = true;
			YesBtn->Visible = false;
			NoBtn->Visible = false;
		}
	}
	else if (Key == "FromKyc")
	{
		Query = "SELECT " + RadioBtn + " FROM Banking.Customer WHERE " + RadioBtn + " = '" + SearchTextBox->Text + "'";
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			Connect->Open();
			MySqlDataReader^ reader = cmd->ExecuteReader();
			if (reader->Read())
			{
				Connect->Close();
				Kyc^ form = gcnew Kyc(this, SearchTextBox->Text, Key, RadioBtn);
				form->Show();
				this->Hide();
			}
			else
			{
				Connect->Close();
				MessagePanel->Visible = true;
				SearchPanel->Visible = false;
				MessageLabel->Text = "Data Not Found";
				OkBtn->Visible = true;
				YesBtn->Visible = false;
				NoBtn->Visible = false;
			}
		}
		catch (Exception^ ex)
		{
			Connect->Close();
			MessagePanel->Visible = true;
			MessageLabel->Text = ex->Message;
			OkBtn->Visible = true;
			YesBtn->Visible = false;
			NoBtn->Visible = false;
		}
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	RadioBtn = "Name";
	SearchLabel->Text = "Enter Name";
	SearchTextBox->Focus();
	SearchAutoComplete();
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	
	RadioBtn = "Accountno";
	SearchLabel->Text = "Enter Account";
	SearchTextBox->Focus();
	SearchAutoComplete();
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	RadioBtn = "Aadhar";
	SearchLabel->Text = "Enter Aadhar";
	SearchTextBox->Focus();
	SearchAutoComplete();
}
private: System::Void Addcusempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Customeremppanel->Visible = false;
	Key = "FromAdd Customer";
	AddCustomer^ mEnu = gcnew AddCustomer(this, Key);
	mEnu->Show();
	this->Hide();
}
private: System::Void Deletecusempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromDelete Customer";
	Employeemenupanel->Visible = false;
	SearchPanel->Visible = true;
	SearchLabel->Text = "Search Customer";
	radioButton2->Text = "Account";
}
private: System::Void Searchcusempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromSearch Customer";
	Employeemenupanel->Visible = false;
	SearchPanel->Visible = true;
	SearchLabel->Text = "Search Customer";
	radioButton2->Text = "Account";
}
private: System::Void Editcusempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromEdit Customer";
	Employeemenupanel->Visible = false;
	SearchPanel->Visible = true;
	SearchLabel->Text = "Search Customer";
	radioButton2->Text = "Account";
}
private: System::Void Accountdetailcusempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromDetail Customer";
	SearchPanel->Visible = true;
	Employeemenupanel->Visible = false;
	radioButton2->Text = "Account";
	SearchPanelLabel->Text = "Search Customer";
	SearchLabel->Text = "Search Customer";
}
private: System::Void Withdrawempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromWithdraw";
	SearchPanel->Visible = true;
	Employeemenupanel->Visible = false;
	radioButton2->Text = "Account";
	SearchLabel->Text = "Search Customer";
}
private: System::Void Depositempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromDeposit";
	SearchPanel->Visible = true;
	Employeemenupanel->Visible = false;
	radioButton2->Text = "Account";
	SearchPanelLabel->Text = "SEARCH CUSTOMER";
	SearchLabel->Text = "Search Customer";
}
private: System::Void Detailsempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromTransactionDetail";
	SearchPanel->Visible = true;
	Employeemenupanel->Visible = false;
	radioButton2->Text = "Account";
	SearchLabel->Text = "Search Customer";
}
private: System::Void Statementempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromStatement";
	SearchPanel->Visible = true;
	Employeemenupanel->Visible = false;
	radioButton2->Text = "Account";
	SearchLabel->Text = "Search Customer";
}
private: System::Void Applydebitempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	SearchPanel->Visible = true;
	Employeemenupanel->Visible = false;
	Key = "FromDebitCard";
}
private: System::Void Applycreditempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	SearchPanel->Visible = true;
	Employeemenupanel->Visible = false;
	Key = "FromCreditCard";
}
private: System::Void Appluchequeempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	SearchPanel->Visible = true;
	Employeemenupanel->Visible = false;
	Key = "FromChequeBook";
}
private: System::Void Updatemobempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	SearchPanel->Visible = true;
	Employeemenupanel->Visible = false;
	Key = "FromUpdateMob";
}
private: System::Void Updatekycempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	SearchPanel->Visible = true;
	Employeemenupanel->Visible = false;
	Key = "FromKyc";
}
private: System::Void Cancelempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Employeemenupanel->Visible = true;
	SearchPanel->Visible = false;
}
private: System::Void Employeemenu_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}