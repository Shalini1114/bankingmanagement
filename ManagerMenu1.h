
#include"Addemployee.h"
#include"AddCustomer.h"
#include"Account.h"
#include"Transaction.h"

   namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManagerMenu
	/// </summary>
	public ref class ManagerMenu : public System::Windows::Forms::Form
	{
	public:
		bool FromDetail, FromEdit, FromDelete, FromAccount, FromWithdraw, FromDeposit ,FromTransaction;
	private: System::Windows::Forms::Panel^ Searchsuppcuspanel;
	public:
	private: System::Windows::Forms::Button^ Cancelcusbtn;
	private: System::Windows::Forms::Button^ Searchcusbtn;
	private: System::Windows::Forms::TextBox^ Searchcustxtbox;
	private: System::Windows::Forms::Label^ Searchcuslabel;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Accountcus;
	private: System::Windows::Forms::Panel^ Accountpanelcus;
	private: System::Windows::Forms::Button^ Accountcancelbtn;
	private: System::Windows::Forms::Button^ Accountsearchbtn;
	private: System::Windows::Forms::TextBox^ Accountcustxt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ custransactionbtn;
	private: System::Windows::Forms::Panel^ transactionpanel;
	private: System::Windows::Forms::Button^ Statementbtn;
	private: System::Windows::Forms::Button^ Detailsbtn;
	private: System::Windows::Forms::Button^ Depositbtn;
	private: System::Windows::Forms::Button^ Withdrawbtn;
	private: System::Windows::Forms::Panel^ Withdrawpanel;

	private: System::Windows::Forms::Button^ Bypassbookbtn;
	private: System::Windows::Forms::Button^ Bycardbtn;
	private: System::Windows::Forms::Button^ Bycheckbtn;
	private: System::Windows::Forms::Panel^ Depositpanel;




	private: System::Windows::Forms::Button^ Bycashdepositbtn;

	private: System::Windows::Forms::Button^ Bycheckdepositbtn;
	private: System::Windows::Forms::Panel^ ManagerMenuPanel;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ OtherServicesPanel;
	private: System::Windows::Forms::Button^ UpdateKycBtn;
	private: System::Windows::Forms::Button^ UpdateMobileBtn;
	private: System::Windows::Forms::Button^ ApplyChequeBookBtn;
	private: System::Windows::Forms::Button^ ApplyCreditCardBtn;
	private: System::Windows::Forms::Button^ ApplyDebitCardBtn;
	private: System::Windows::Forms::Button^ OtherServicesBtn;
	private: System::Windows::Forms::Button^ LogoutBtn;
	private: System::Windows::Forms::Panel^ MessagePanel;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ MessageLabel;






		   int Flag;
		   Form^ MainMenu;
	private: System::Windows::Forms::Button^ ViewIdPassBtn;
	private: System::Windows::Forms::Panel^ ViewIdPassPanel;
	private: System::Windows::Forms::Label^ UsernameLabel;
	private: System::Windows::Forms::Label^ PasswordLabel;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;




		   String^ Key, ^RadioBtn = "Name";
		   String^ ConnectString = "datasource=localhost;port=3306;username=amzad786;password=Amzad@123";
		   MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		   String^ Query;

	public:
		ManagerMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		  ManagerMenu(Form^ form)
		  {
			  InitializeComponent();
			  MainMenu = form;
			  //
			  //TODO: Add the constructor code here
			  //
		  }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManagerMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ Employeebtn;
	private: System::Windows::Forms::Button^ Customerbtn;
	private: System::Windows::Forms::Panel^ Employeepanel;
	private: System::Windows::Forms::Button^ Editemployeebtn;
	private: System::Windows::Forms::Button^ Searchemployeebtn;
	private: System::Windows::Forms::Button^ Deleteemployeebtn;
	private: System::Windows::Forms::Button^ Addemployeebtn;
	private: System::Windows::Forms::Panel^ Customerpanel;
	private: System::Windows::Forms::Button^ Editcustomerbtn;
	private: System::Windows::Forms::Button^ Searchcustomerbtn;
	private: System::Windows::Forms::Button^ Deletecustomerbtn;
	private: System::Windows::Forms::Button^ Addcustomerbtn;








	private: System::Windows::Forms::Panel^ Searchcuspanel;
	private: System::Windows::Forms::Button^ Bymobcusbtn;

	private: System::Windows::Forms::Button^ Byidcusbtn;

	private: System::Windows::Forms::Button^ Bynamecusbtn;
private: System::Windows::Forms::Panel^ SearchPanel;

	private: System::Windows::Forms::Button^ Cancelempbtn;
private: System::Windows::Forms::Button^ SearchBtn;
private: System::Windows::Forms::TextBox^ SearchTextBox;


private: System::Windows::Forms::Label^ SearchLabel;
private: System::Windows::Forms::Label^ SearchPanelLabel;







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
			this->Employeebtn = (gcnew System::Windows::Forms::Button());
			this->Customerbtn = (gcnew System::Windows::Forms::Button());
			this->Employeepanel = (gcnew System::Windows::Forms::Panel());
			this->Editemployeebtn = (gcnew System::Windows::Forms::Button());
			this->Searchemployeebtn = (gcnew System::Windows::Forms::Button());
			this->Deleteemployeebtn = (gcnew System::Windows::Forms::Button());
			this->Addemployeebtn = (gcnew System::Windows::Forms::Button());
			this->Customerpanel = (gcnew System::Windows::Forms::Panel());
			this->Accountcus = (gcnew System::Windows::Forms::Button());
			this->Editcustomerbtn = (gcnew System::Windows::Forms::Button());
			this->Searchcustomerbtn = (gcnew System::Windows::Forms::Button());
			this->Deletecustomerbtn = (gcnew System::Windows::Forms::Button());
			this->Addcustomerbtn = (gcnew System::Windows::Forms::Button());
			this->Searchcuspanel = (gcnew System::Windows::Forms::Panel());
			this->Bymobcusbtn = (gcnew System::Windows::Forms::Button());
			this->Byidcusbtn = (gcnew System::Windows::Forms::Button());
			this->Bynamecusbtn = (gcnew System::Windows::Forms::Button());
			this->SearchPanel = (gcnew System::Windows::Forms::Panel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->Cancelempbtn = (gcnew System::Windows::Forms::Button());
			this->SearchBtn = (gcnew System::Windows::Forms::Button());
			this->SearchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SearchLabel = (gcnew System::Windows::Forms::Label());
			this->SearchPanelLabel = (gcnew System::Windows::Forms::Label());
			this->Searchsuppcuspanel = (gcnew System::Windows::Forms::Panel());
			this->Cancelcusbtn = (gcnew System::Windows::Forms::Button());
			this->Searchcusbtn = (gcnew System::Windows::Forms::Button());
			this->Searchcustxtbox = (gcnew System::Windows::Forms::TextBox());
			this->Searchcuslabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->custransactionbtn = (gcnew System::Windows::Forms::Button());
			this->Accountpanelcus = (gcnew System::Windows::Forms::Panel());
			this->Accountcancelbtn = (gcnew System::Windows::Forms::Button());
			this->Accountsearchbtn = (gcnew System::Windows::Forms::Button());
			this->Accountcustxt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->transactionpanel = (gcnew System::Windows::Forms::Panel());
			this->Statementbtn = (gcnew System::Windows::Forms::Button());
			this->Detailsbtn = (gcnew System::Windows::Forms::Button());
			this->Depositbtn = (gcnew System::Windows::Forms::Button());
			this->Withdrawbtn = (gcnew System::Windows::Forms::Button());
			this->Withdrawpanel = (gcnew System::Windows::Forms::Panel());
			this->Bypassbookbtn = (gcnew System::Windows::Forms::Button());
			this->Bycardbtn = (gcnew System::Windows::Forms::Button());
			this->Bycheckbtn = (gcnew System::Windows::Forms::Button());
			this->Depositpanel = (gcnew System::Windows::Forms::Panel());
			this->Bycashdepositbtn = (gcnew System::Windows::Forms::Button());
			this->Bycheckdepositbtn = (gcnew System::Windows::Forms::Button());
			this->ManagerMenuPanel = (gcnew System::Windows::Forms::Panel());
			this->LogoutBtn = (gcnew System::Windows::Forms::Button());
			this->OtherServicesPanel = (gcnew System::Windows::Forms::Panel());
			this->ViewIdPassBtn = (gcnew System::Windows::Forms::Button());
			this->UpdateKycBtn = (gcnew System::Windows::Forms::Button());
			this->UpdateMobileBtn = (gcnew System::Windows::Forms::Button());
			this->ApplyChequeBookBtn = (gcnew System::Windows::Forms::Button());
			this->ApplyCreditCardBtn = (gcnew System::Windows::Forms::Button());
			this->ApplyDebitCardBtn = (gcnew System::Windows::Forms::Button());
			this->OtherServicesBtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->MessagePanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->MessageLabel = (gcnew System::Windows::Forms::Label());
			this->ViewIdPassPanel = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->UsernameLabel = (gcnew System::Windows::Forms::Label());
			this->Employeepanel->SuspendLayout();
			this->Customerpanel->SuspendLayout();
			this->Searchcuspanel->SuspendLayout();
			this->SearchPanel->SuspendLayout();
			this->Searchsuppcuspanel->SuspendLayout();
			this->Accountpanelcus->SuspendLayout();
			this->transactionpanel->SuspendLayout();
			this->Withdrawpanel->SuspendLayout();
			this->Depositpanel->SuspendLayout();
			this->ManagerMenuPanel->SuspendLayout();
			this->OtherServicesPanel->SuspendLayout();
			this->MessagePanel->SuspendLayout();
			this->ViewIdPassPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Employeebtn
			// 
			this->Employeebtn->BackColor = System::Drawing::Color::SteelBlue;
			this->Employeebtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Employeebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Employeebtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Employeebtn->Location = System::Drawing::Point(0, 36);
			this->Employeebtn->Name = L"Employeebtn";
			this->Employeebtn->Size = System::Drawing::Size(223, 52);
			this->Employeebtn->TabIndex = 1;
			this->Employeebtn->Text = L"EMPLOYEE";
			this->Employeebtn->UseVisualStyleBackColor = false;
			this->Employeebtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Employeebtn_MouseHover);
			// 
			// Customerbtn
			// 
			this->Customerbtn->BackColor = System::Drawing::Color::SteelBlue;
			this->Customerbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Customerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customerbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Customerbtn->Location = System::Drawing::Point(0, 244);
			this->Customerbtn->Name = L"Customerbtn";
			this->Customerbtn->Size = System::Drawing::Size(223, 39);
			this->Customerbtn->TabIndex = 2;
			this->Customerbtn->Text = L"CUSTOMER";
			this->Customerbtn->UseVisualStyleBackColor = false;
			this->Customerbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Customerbtn_MouseHover);
			// 
			// Employeepanel
			// 
			this->Employeepanel->AutoScroll = true;
			this->Employeepanel->AutoSize = true;
			this->Employeepanel->Controls->Add(this->Editemployeebtn);
			this->Employeepanel->Controls->Add(this->Searchemployeebtn);
			this->Employeepanel->Controls->Add(this->Deleteemployeebtn);
			this->Employeepanel->Controls->Add(this->Addemployeebtn);
			this->Employeepanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Employeepanel->Location = System::Drawing::Point(0, 88);
			this->Employeepanel->Name = L"Employeepanel";
			this->Employeepanel->Size = System::Drawing::Size(223, 156);
			this->Employeepanel->TabIndex = 3;
			this->Employeepanel->Visible = false;
			this->Employeepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ManagerMenu::Employeepanel_Paint);
			// 
			// Editemployeebtn
			// 
			this->Editemployeebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Editemployeebtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Editemployeebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Editemployeebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Editemployeebtn->Location = System::Drawing::Point(0, 117);
			this->Editemployeebtn->Name = L"Editemployeebtn";
			this->Editemployeebtn->Size = System::Drawing::Size(223, 39);
			this->Editemployeebtn->TabIndex = 5;
			this->Editemployeebtn->Text = L"Edit Employee";
			this->Editemployeebtn->UseVisualStyleBackColor = false;
			this->Editemployeebtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Editemployeebtn_Click);
			// 
			// Searchemployeebtn
			// 
			this->Searchemployeebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Searchemployeebtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Searchemployeebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchemployeebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Searchemployeebtn->Location = System::Drawing::Point(0, 78);
			this->Searchemployeebtn->Name = L"Searchemployeebtn";
			this->Searchemployeebtn->Size = System::Drawing::Size(223, 39);
			this->Searchemployeebtn->TabIndex = 4;
			this->Searchemployeebtn->Text = L"Search Employee";
			this->Searchemployeebtn->UseVisualStyleBackColor = false;
			this->Searchemployeebtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Searchemployeebtn_Click);
			// 
			// Deleteemployeebtn
			// 
			this->Deleteemployeebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Deleteemployeebtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Deleteemployeebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Deleteemployeebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Deleteemployeebtn->Location = System::Drawing::Point(0, 39);
			this->Deleteemployeebtn->Name = L"Deleteemployeebtn";
			this->Deleteemployeebtn->Size = System::Drawing::Size(223, 39);
			this->Deleteemployeebtn->TabIndex = 3;
			this->Deleteemployeebtn->Text = L"Delete Employee";
			this->Deleteemployeebtn->UseVisualStyleBackColor = false;
			this->Deleteemployeebtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Deleteemployeebtn_Click);
			// 
			// Addemployeebtn
			// 
			this->Addemployeebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Addemployeebtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Addemployeebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addemployeebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Addemployeebtn->Location = System::Drawing::Point(0, 0);
			this->Addemployeebtn->Name = L"Addemployeebtn";
			this->Addemployeebtn->Size = System::Drawing::Size(223, 39);
			this->Addemployeebtn->TabIndex = 2;
			this->Addemployeebtn->Text = L"Add Employee";
			this->Addemployeebtn->UseVisualStyleBackColor = false;
			this->Addemployeebtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Addemployeebtn_Click);
			// 
			// Customerpanel
			// 
			this->Customerpanel->AutoSize = true;
			this->Customerpanel->Controls->Add(this->Accountcus);
			this->Customerpanel->Controls->Add(this->Editcustomerbtn);
			this->Customerpanel->Controls->Add(this->Searchcustomerbtn);
			this->Customerpanel->Controls->Add(this->Deletecustomerbtn);
			this->Customerpanel->Controls->Add(this->Addcustomerbtn);
			this->Customerpanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Customerpanel->Location = System::Drawing::Point(0, 283);
			this->Customerpanel->Name = L"Customerpanel";
			this->Customerpanel->Size = System::Drawing::Size(223, 195);
			this->Customerpanel->TabIndex = 4;
			this->Customerpanel->Visible = false;
			// 
			// Accountcus
			// 
			this->Accountcus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Accountcus->Dock = System::Windows::Forms::DockStyle::Top;
			this->Accountcus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accountcus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Accountcus->Location = System::Drawing::Point(0, 156);
			this->Accountcus->Name = L"Accountcus";
			this->Accountcus->Size = System::Drawing::Size(223, 39);
			this->Accountcus->TabIndex = 6;
			this->Accountcus->Text = L"Account Details";
			this->Accountcus->UseVisualStyleBackColor = false;
			this->Accountcus->Click += gcnew System::EventHandler(this, &ManagerMenu::Accountcus_Click);
			// 
			// Editcustomerbtn
			// 
			this->Editcustomerbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Editcustomerbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Editcustomerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Editcustomerbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Editcustomerbtn->Location = System::Drawing::Point(0, 117);
			this->Editcustomerbtn->Name = L"Editcustomerbtn";
			this->Editcustomerbtn->Size = System::Drawing::Size(223, 39);
			this->Editcustomerbtn->TabIndex = 5;
			this->Editcustomerbtn->Text = L"Edit Customer";
			this->Editcustomerbtn->UseVisualStyleBackColor = false;
			this->Editcustomerbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Editcustomerbtn_Click);
			this->Editcustomerbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Editcustomerbtn_MouseHover);
			// 
			// Searchcustomerbtn
			// 
			this->Searchcustomerbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Searchcustomerbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Searchcustomerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchcustomerbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Searchcustomerbtn->Location = System::Drawing::Point(0, 78);
			this->Searchcustomerbtn->Name = L"Searchcustomerbtn";
			this->Searchcustomerbtn->Size = System::Drawing::Size(223, 39);
			this->Searchcustomerbtn->TabIndex = 4;
			this->Searchcustomerbtn->Text = L"Search Customer";
			this->Searchcustomerbtn->UseVisualStyleBackColor = false;
			this->Searchcustomerbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Searchcustomerbtn_Click);
			this->Searchcustomerbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Searchcustomerbtn_MouseHover);
			// 
			// Deletecustomerbtn
			// 
			this->Deletecustomerbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Deletecustomerbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Deletecustomerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Deletecustomerbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Deletecustomerbtn->Location = System::Drawing::Point(0, 39);
			this->Deletecustomerbtn->Name = L"Deletecustomerbtn";
			this->Deletecustomerbtn->Size = System::Drawing::Size(223, 39);
			this->Deletecustomerbtn->TabIndex = 3;
			this->Deletecustomerbtn->Text = L"Delete Customer";
			this->Deletecustomerbtn->UseVisualStyleBackColor = false;
			this->Deletecustomerbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Deletecustomerbtn_MouseHover);
			// 
			// Addcustomerbtn
			// 
			this->Addcustomerbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Addcustomerbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Addcustomerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addcustomerbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Addcustomerbtn->Location = System::Drawing::Point(0, 0);
			this->Addcustomerbtn->Name = L"Addcustomerbtn";
			this->Addcustomerbtn->Size = System::Drawing::Size(223, 39);
			this->Addcustomerbtn->TabIndex = 2;
			this->Addcustomerbtn->Text = L"Add Customer";
			this->Addcustomerbtn->UseVisualStyleBackColor = false;
			this->Addcustomerbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Addcustomerbtn_Click);
			// 
			// Searchcuspanel
			// 
			this->Searchcuspanel->AutoSize = true;
			this->Searchcuspanel->BackColor = System::Drawing::Color::Transparent;
			this->Searchcuspanel->Controls->Add(this->Bymobcusbtn);
			this->Searchcuspanel->Controls->Add(this->Byidcusbtn);
			this->Searchcuspanel->Controls->Add(this->Bynamecusbtn);
			this->Searchcuspanel->Location = System::Drawing::Point(256, 15);
			this->Searchcuspanel->Name = L"Searchcuspanel";
			this->Searchcuspanel->Size = System::Drawing::Size(156, 120);
			this->Searchcuspanel->TabIndex = 6;
			this->Searchcuspanel->Visible = false;
			// 
			// Bymobcusbtn
			// 
			this->Bymobcusbtn->BackColor = System::Drawing::Color::Olive;
			this->Bymobcusbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Bymobcusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bymobcusbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Bymobcusbtn->Location = System::Drawing::Point(0, 78);
			this->Bymobcusbtn->Name = L"Bymobcusbtn";
			this->Bymobcusbtn->Size = System::Drawing::Size(156, 42);
			this->Bymobcusbtn->TabIndex = 4;
			this->Bymobcusbtn->Text = L"BY MOB NO";
			this->Bymobcusbtn->UseVisualStyleBackColor = false;
			this->Bymobcusbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Bymobcusbtn_Click);
			// 
			// Byidcusbtn
			// 
			this->Byidcusbtn->BackColor = System::Drawing::Color::Olive;
			this->Byidcusbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Byidcusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Byidcusbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Byidcusbtn->Location = System::Drawing::Point(0, 39);
			this->Byidcusbtn->Name = L"Byidcusbtn";
			this->Byidcusbtn->Size = System::Drawing::Size(156, 39);
			this->Byidcusbtn->TabIndex = 3;
			this->Byidcusbtn->Text = L"BY ID";
			this->Byidcusbtn->UseVisualStyleBackColor = false;
			this->Byidcusbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Byidcusbtn_Click);
			// 
			// Bynamecusbtn
			// 
			this->Bynamecusbtn->BackColor = System::Drawing::Color::Olive;
			this->Bynamecusbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Bynamecusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bynamecusbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Bynamecusbtn->Location = System::Drawing::Point(0, 0);
			this->Bynamecusbtn->Name = L"Bynamecusbtn";
			this->Bynamecusbtn->Size = System::Drawing::Size(156, 39);
			this->Bynamecusbtn->TabIndex = 2;
			this->Bynamecusbtn->Text = L"BY NAME";
			this->Bynamecusbtn->UseVisualStyleBackColor = false;
			this->Bynamecusbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Bynamecusbtn_Click);
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
			this->SearchPanel->Location = System::Drawing::Point(475, 211);
			this->SearchPanel->Name = L"SearchPanel";
			this->SearchPanel->Size = System::Drawing::Size(374, 212);
			this->SearchPanel->TabIndex = 7;
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
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &ManagerMenu::radioButton3_CheckedChanged);
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
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &ManagerMenu::radioButton2_CheckedChanged);
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
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &ManagerMenu::radioButton1_CheckedChanged);
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
			this->Cancelempbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Cancelempbtn_Click);
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
			this->SearchBtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Searchempbtn_Click);
			// 
			// SearchTextBox
			// 
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
			// Searchsuppcuspanel
			// 
			this->Searchsuppcuspanel->BackColor = System::Drawing::Color::Aqua;
			this->Searchsuppcuspanel->Controls->Add(this->Cancelcusbtn);
			this->Searchsuppcuspanel->Controls->Add(this->Searchcusbtn);
			this->Searchsuppcuspanel->Controls->Add(this->Searchcustxtbox);
			this->Searchsuppcuspanel->Controls->Add(this->Searchcuslabel);
			this->Searchsuppcuspanel->Controls->Add(this->label4);
			this->Searchsuppcuspanel->Location = System::Drawing::Point(522, 166);
			this->Searchsuppcuspanel->Name = L"Searchsuppcuspanel";
			this->Searchsuppcuspanel->Size = System::Drawing::Size(374, 165);
			this->Searchsuppcuspanel->TabIndex = 8;
			this->Searchsuppcuspanel->Visible = false;
			// 
			// Cancelcusbtn
			// 
			this->Cancelcusbtn->Location = System::Drawing::Point(239, 122);
			this->Cancelcusbtn->Name = L"Cancelcusbtn";
			this->Cancelcusbtn->Size = System::Drawing::Size(75, 23);
			this->Cancelcusbtn->TabIndex = 5;
			this->Cancelcusbtn->Text = L"Cancel";
			this->Cancelcusbtn->UseVisualStyleBackColor = true;
			this->Cancelcusbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Cancelcusbtn_Click);
			// 
			// Searchcusbtn
			// 
			this->Searchcusbtn->Location = System::Drawing::Point(39, 124);
			this->Searchcusbtn->Name = L"Searchcusbtn";
			this->Searchcusbtn->Size = System::Drawing::Size(75, 23);
			this->Searchcusbtn->TabIndex = 4;
			this->Searchcusbtn->Text = L"Search";
			this->Searchcusbtn->UseVisualStyleBackColor = true;
			this->Searchcusbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Searchcusbtn_Click);
			// 
			// Searchcustxtbox
			// 
			this->Searchcustxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchcustxtbox->Location = System::Drawing::Point(140, 70);
			this->Searchcustxtbox->Name = L"Searchcustxtbox";
			this->Searchcustxtbox->Size = System::Drawing::Size(221, 32);
			this->Searchcustxtbox->TabIndex = 3;
			// 
			// Searchcuslabel
			// 
			this->Searchcuslabel->AutoSize = true;
			this->Searchcuslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchcuslabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Searchcuslabel->Location = System::Drawing::Point(3, 74);
			this->Searchcuslabel->Name = L"Searchcuslabel";
			this->Searchcuslabel->Size = System::Drawing::Size(111, 24);
			this->Searchcuslabel->TabIndex = 2;
			this->Searchcuslabel->Text = L"Enter Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(62, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(212, 29);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Search Customer";
			// 
			// custransactionbtn
			// 
			this->custransactionbtn->BackColor = System::Drawing::Color::SteelBlue;
			this->custransactionbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->custransactionbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->custransactionbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->custransactionbtn->Location = System::Drawing::Point(0, 478);
			this->custransactionbtn->Name = L"custransactionbtn";
			this->custransactionbtn->Size = System::Drawing::Size(223, 39);
			this->custransactionbtn->TabIndex = 4;
			this->custransactionbtn->Text = L"Transaction";
			this->custransactionbtn->UseVisualStyleBackColor = false;
			this->custransactionbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::custransactionbtn_MouseHover);
			// 
			// Accountpanelcus
			// 
			this->Accountpanelcus->BackColor = System::Drawing::Color::Aqua;
			this->Accountpanelcus->Controls->Add(this->Accountcancelbtn);
			this->Accountpanelcus->Controls->Add(this->Accountsearchbtn);
			this->Accountpanelcus->Controls->Add(this->Accountcustxt);
			this->Accountpanelcus->Controls->Add(this->label3);
			this->Accountpanelcus->Controls->Add(this->label5);
			this->Accountpanelcus->Location = System::Drawing::Point(422, 325);
			this->Accountpanelcus->Name = L"Accountpanelcus";
			this->Accountpanelcus->Size = System::Drawing::Size(374, 153);
			this->Accountpanelcus->TabIndex = 9;
			this->Accountpanelcus->Visible = false;
			// 
			// Accountcancelbtn
			// 
			this->Accountcancelbtn->Location = System::Drawing::Point(239, 122);
			this->Accountcancelbtn->Name = L"Accountcancelbtn";
			this->Accountcancelbtn->Size = System::Drawing::Size(75, 23);
			this->Accountcancelbtn->TabIndex = 5;
			this->Accountcancelbtn->Text = L"Cancel";
			this->Accountcancelbtn->UseVisualStyleBackColor = true;
			this->Accountcancelbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Accountcancelbtn_Click);
			// 
			// Accountsearchbtn
			// 
			this->Accountsearchbtn->Location = System::Drawing::Point(39, 124);
			this->Accountsearchbtn->Name = L"Accountsearchbtn";
			this->Accountsearchbtn->Size = System::Drawing::Size(75, 23);
			this->Accountsearchbtn->TabIndex = 4;
			this->Accountsearchbtn->Text = L"Search";
			this->Accountsearchbtn->UseVisualStyleBackColor = true;
			this->Accountsearchbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Accountsearchbtn_Click);
			// 
			// Accountcustxt
			// 
			this->Accountcustxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accountcustxt->Location = System::Drawing::Point(140, 70);
			this->Accountcustxt->Name = L"Accountcustxt";
			this->Accountcustxt->Size = System::Drawing::Size(221, 32);
			this->Accountcustxt->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter Acc no.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(66, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(267, 29);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Account Information";
			// 
			// transactionpanel
			// 
			this->transactionpanel->AutoSize = true;
			this->transactionpanel->Controls->Add(this->Statementbtn);
			this->transactionpanel->Controls->Add(this->Detailsbtn);
			this->transactionpanel->Controls->Add(this->Depositbtn);
			this->transactionpanel->Controls->Add(this->Withdrawbtn);
			this->transactionpanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->transactionpanel->Location = System::Drawing::Point(0, 517);
			this->transactionpanel->Name = L"transactionpanel";
			this->transactionpanel->Size = System::Drawing::Size(223, 156);
			this->transactionpanel->TabIndex = 10;
			this->transactionpanel->Visible = false;
			// 
			// Statementbtn
			// 
			this->Statementbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Statementbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Statementbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Statementbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Statementbtn->Location = System::Drawing::Point(0, 117);
			this->Statementbtn->Name = L"Statementbtn";
			this->Statementbtn->Size = System::Drawing::Size(223, 39);
			this->Statementbtn->TabIndex = 5;
			this->Statementbtn->Text = L"Statement";
			this->Statementbtn->UseVisualStyleBackColor = false;
			// 
			// Detailsbtn
			// 
			this->Detailsbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Detailsbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Detailsbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Detailsbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Detailsbtn->Location = System::Drawing::Point(0, 78);
			this->Detailsbtn->Name = L"Detailsbtn";
			this->Detailsbtn->Size = System::Drawing::Size(223, 39);
			this->Detailsbtn->TabIndex = 4;
			this->Detailsbtn->Text = L"Details";
			this->Detailsbtn->UseVisualStyleBackColor = false;
			this->Detailsbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Detailsbtn_Click);
			// 
			// Depositbtn
			// 
			this->Depositbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Depositbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Depositbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Depositbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Depositbtn->Location = System::Drawing::Point(0, 39);
			this->Depositbtn->Name = L"Depositbtn";
			this->Depositbtn->Size = System::Drawing::Size(223, 39);
			this->Depositbtn->TabIndex = 3;
			this->Depositbtn->Text = L"Deposit";
			this->Depositbtn->UseVisualStyleBackColor = false;
			this->Depositbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Depositbtn_MouseHover);
			// 
			// Withdrawbtn
			// 
			this->Withdrawbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Withdrawbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Withdrawbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Withdrawbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Withdrawbtn->Location = System::Drawing::Point(0, 0);
			this->Withdrawbtn->Name = L"Withdrawbtn";
			this->Withdrawbtn->Size = System::Drawing::Size(223, 39);
			this->Withdrawbtn->TabIndex = 2;
			this->Withdrawbtn->Text = L"Withdraw";
			this->Withdrawbtn->UseVisualStyleBackColor = false;
			this->Withdrawbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Withdrawbtn_Click);
			this->Withdrawbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Withdrawbtn_MouseHover);
			// 
			// Withdrawpanel
			// 
			this->Withdrawpanel->AutoSize = true;
			this->Withdrawpanel->Controls->Add(this->Bypassbookbtn);
			this->Withdrawpanel->Controls->Add(this->Bycardbtn);
			this->Withdrawpanel->Controls->Add(this->Bycheckbtn);
			this->Withdrawpanel->Location = System::Drawing::Point(742, 12);
			this->Withdrawpanel->Name = L"Withdrawpanel";
			this->Withdrawpanel->Size = System::Drawing::Size(215, 122);
			this->Withdrawpanel->TabIndex = 11;
			this->Withdrawpanel->Visible = false;
			// 
			// Bypassbookbtn
			// 
			this->Bypassbookbtn->BackColor = System::Drawing::Color::Olive;
			this->Bypassbookbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Bypassbookbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bypassbookbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Bypassbookbtn->Location = System::Drawing::Point(0, 78);
			this->Bypassbookbtn->Name = L"Bypassbookbtn";
			this->Bypassbookbtn->Size = System::Drawing::Size(215, 44);
			this->Bypassbookbtn->TabIndex = 4;
			this->Bypassbookbtn->Text = L"By passbook";
			this->Bypassbookbtn->UseVisualStyleBackColor = false;
			this->Bypassbookbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Bypassbookbtn_Click);
			// 
			// Bycardbtn
			// 
			this->Bycardbtn->BackColor = System::Drawing::Color::Olive;
			this->Bycardbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Bycardbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bycardbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Bycardbtn->Location = System::Drawing::Point(0, 39);
			this->Bycardbtn->Name = L"Bycardbtn";
			this->Bycardbtn->Size = System::Drawing::Size(215, 39);
			this->Bycardbtn->TabIndex = 3;
			this->Bycardbtn->Text = L"By card";
			this->Bycardbtn->UseVisualStyleBackColor = false;
			// 
			// Bycheckbtn
			// 
			this->Bycheckbtn->BackColor = System::Drawing::Color::Olive;
			this->Bycheckbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Bycheckbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bycheckbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Bycheckbtn->Location = System::Drawing::Point(0, 0);
			this->Bycheckbtn->Name = L"Bycheckbtn";
			this->Bycheckbtn->Size = System::Drawing::Size(215, 39);
			this->Bycheckbtn->TabIndex = 2;
			this->Bycheckbtn->Text = L"By check";
			this->Bycheckbtn->UseVisualStyleBackColor = false;
			// 
			// Depositpanel
			// 
			this->Depositpanel->AutoSize = true;
			this->Depositpanel->Controls->Add(this->Bycashdepositbtn);
			this->Depositpanel->Controls->Add(this->Bycheckdepositbtn);
			this->Depositpanel->Location = System::Drawing::Point(241, 210);
			this->Depositpanel->Name = L"Depositpanel";
			this->Depositpanel->Size = System::Drawing::Size(200, 78);
			this->Depositpanel->TabIndex = 12;
			this->Depositpanel->Visible = false;
			// 
			// Bycashdepositbtn
			// 
			this->Bycashdepositbtn->BackColor = System::Drawing::Color::Olive;
			this->Bycashdepositbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Bycashdepositbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bycashdepositbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Bycashdepositbtn->Location = System::Drawing::Point(0, 39);
			this->Bycashdepositbtn->Name = L"Bycashdepositbtn";
			this->Bycashdepositbtn->Size = System::Drawing::Size(200, 39);
			this->Bycashdepositbtn->TabIndex = 3;
			this->Bycashdepositbtn->Text = L"By Cash";
			this->Bycashdepositbtn->UseVisualStyleBackColor = false;
			this->Bycashdepositbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Bycashdepositbtn_Click);
			// 
			// Bycheckdepositbtn
			// 
			this->Bycheckdepositbtn->BackColor = System::Drawing::Color::Olive;
			this->Bycheckdepositbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Bycheckdepositbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bycheckdepositbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Bycheckdepositbtn->Location = System::Drawing::Point(0, 0);
			this->Bycheckdepositbtn->Name = L"Bycheckdepositbtn";
			this->Bycheckdepositbtn->Size = System::Drawing::Size(200, 39);
			this->Bycheckdepositbtn->TabIndex = 2;
			this->Bycheckdepositbtn->Text = L"By Check";
			this->Bycheckdepositbtn->UseVisualStyleBackColor = false;
			// 
			// ManagerMenuPanel
			// 
			this->ManagerMenuPanel->AutoScroll = true;
			this->ManagerMenuPanel->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ManagerMenuPanel->Controls->Add(this->LogoutBtn);
			this->ManagerMenuPanel->Controls->Add(this->OtherServicesPanel);
			this->ManagerMenuPanel->Controls->Add(this->OtherServicesBtn);
			this->ManagerMenuPanel->Controls->Add(this->transactionpanel);
			this->ManagerMenuPanel->Controls->Add(this->custransactionbtn);
			this->ManagerMenuPanel->Controls->Add(this->Customerpanel);
			this->ManagerMenuPanel->Controls->Add(this->Customerbtn);
			this->ManagerMenuPanel->Controls->Add(this->Employeepanel);
			this->ManagerMenuPanel->Controls->Add(this->Employeebtn);
			this->ManagerMenuPanel->Controls->Add(this->label6);
			this->ManagerMenuPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->ManagerMenuPanel->Location = System::Drawing::Point(0, 0);
			this->ManagerMenuPanel->Name = L"ManagerMenuPanel";
			this->ManagerMenuPanel->Size = System::Drawing::Size(240, 720);
			this->ManagerMenuPanel->TabIndex = 13;
			// 
			// LogoutBtn
			// 
			this->LogoutBtn->BackColor = System::Drawing::Color::SteelBlue;
			this->LogoutBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->LogoutBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoutBtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->LogoutBtn->Location = System::Drawing::Point(0, 946);
			this->LogoutBtn->Name = L"LogoutBtn";
			this->LogoutBtn->Size = System::Drawing::Size(223, 39);
			this->LogoutBtn->TabIndex = 15;
			this->LogoutBtn->Text = L"Logout";
			this->LogoutBtn->UseVisualStyleBackColor = false;
			this->LogoutBtn->Click += gcnew System::EventHandler(this, &ManagerMenu::LogoutBtn_Click);
			// 
			// OtherServicesPanel
			// 
			this->OtherServicesPanel->AutoSize = true;
			this->OtherServicesPanel->Controls->Add(this->ViewIdPassBtn);
			this->OtherServicesPanel->Controls->Add(this->UpdateKycBtn);
			this->OtherServicesPanel->Controls->Add(this->UpdateMobileBtn);
			this->OtherServicesPanel->Controls->Add(this->ApplyChequeBookBtn);
			this->OtherServicesPanel->Controls->Add(this->ApplyCreditCardBtn);
			this->OtherServicesPanel->Controls->Add(this->ApplyDebitCardBtn);
			this->OtherServicesPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->OtherServicesPanel->Location = System::Drawing::Point(0, 712);
			this->OtherServicesPanel->Name = L"OtherServicesPanel";
			this->OtherServicesPanel->Size = System::Drawing::Size(223, 234);
			this->OtherServicesPanel->TabIndex = 14;
			// 
			// ViewIdPassBtn
			// 
			this->ViewIdPassBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ViewIdPassBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewIdPassBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewIdPassBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ViewIdPassBtn->Location = System::Drawing::Point(0, 195);
			this->ViewIdPassBtn->Name = L"ViewIdPassBtn";
			this->ViewIdPassBtn->Size = System::Drawing::Size(223, 39);
			this->ViewIdPassBtn->TabIndex = 15;
			this->ViewIdPassBtn->Text = L"View id & Pass";
			this->ViewIdPassBtn->UseVisualStyleBackColor = false;
			this->ViewIdPassBtn->Click += gcnew System::EventHandler(this, &ManagerMenu::ViewIdPassBtn_Click);
			// 
			// UpdateKycBtn
			// 
			this->UpdateKycBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->UpdateKycBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->UpdateKycBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateKycBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->UpdateKycBtn->Location = System::Drawing::Point(0, 156);
			this->UpdateKycBtn->Name = L"UpdateKycBtn";
			this->UpdateKycBtn->Size = System::Drawing::Size(223, 39);
			this->UpdateKycBtn->TabIndex = 6;
			this->UpdateKycBtn->Text = L"Update Kyc";
			this->UpdateKycBtn->UseVisualStyleBackColor = false;
			this->UpdateKycBtn->Click += gcnew System::EventHandler(this, &ManagerMenu::UpdateKycBtn_Click);
			// 
			// UpdateMobileBtn
			// 
			this->UpdateMobileBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->UpdateMobileBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->UpdateMobileBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateMobileBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->UpdateMobileBtn->Location = System::Drawing::Point(0, 117);
			this->UpdateMobileBtn->Name = L"UpdateMobileBtn";
			this->UpdateMobileBtn->Size = System::Drawing::Size(223, 39);
			this->UpdateMobileBtn->TabIndex = 5;
			this->UpdateMobileBtn->Text = L"Update Mobile No.";
			this->UpdateMobileBtn->UseVisualStyleBackColor = false;
			this->UpdateMobileBtn->Click += gcnew System::EventHandler(this, &ManagerMenu::UpdateMobileBtn_Click);
			// 
			// ApplyChequeBookBtn
			// 
			this->ApplyChequeBookBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ApplyChequeBookBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ApplyChequeBookBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ApplyChequeBookBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ApplyChequeBookBtn->Location = System::Drawing::Point(0, 78);
			this->ApplyChequeBookBtn->Name = L"ApplyChequeBookBtn";
			this->ApplyChequeBookBtn->Size = System::Drawing::Size(223, 39);
			this->ApplyChequeBookBtn->TabIndex = 7;
			this->ApplyChequeBookBtn->Text = L"Apply Cheque Book";
			this->ApplyChequeBookBtn->UseVisualStyleBackColor = false;
			this->ApplyChequeBookBtn->Click += gcnew System::EventHandler(this, &ManagerMenu::ApplyChequeBookBtn_Click);
			// 
			// ApplyCreditCardBtn
			// 
			this->ApplyCreditCardBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ApplyCreditCardBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ApplyCreditCardBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ApplyCreditCardBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ApplyCreditCardBtn->Location = System::Drawing::Point(0, 39);
			this->ApplyCreditCardBtn->Name = L"ApplyCreditCardBtn";
			this->ApplyCreditCardBtn->Size = System::Drawing::Size(223, 39);
			this->ApplyCreditCardBtn->TabIndex = 4;
			this->ApplyCreditCardBtn->Text = L"Apply Credit Card";
			this->ApplyCreditCardBtn->UseVisualStyleBackColor = false;
			this->ApplyCreditCardBtn->Click += gcnew System::EventHandler(this, &ManagerMenu::ApplyCreditCardBtn_Click);
			// 
			// ApplyDebitCardBtn
			// 
			this->ApplyDebitCardBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ApplyDebitCardBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ApplyDebitCardBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ApplyDebitCardBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ApplyDebitCardBtn->Location = System::Drawing::Point(0, 0);
			this->ApplyDebitCardBtn->Name = L"ApplyDebitCardBtn";
			this->ApplyDebitCardBtn->Size = System::Drawing::Size(223, 39);
			this->ApplyDebitCardBtn->TabIndex = 3;
			this->ApplyDebitCardBtn->Text = L"Apply Debit Card";
			this->ApplyDebitCardBtn->UseVisualStyleBackColor = false;
			this->ApplyDebitCardBtn->Click += gcnew System::EventHandler(this, &ManagerMenu::ApplyDebitCardBtn_Click);
			// 
			// OtherServicesBtn
			// 
			this->OtherServicesBtn->BackColor = System::Drawing::Color::SteelBlue;
			this->OtherServicesBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->OtherServicesBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OtherServicesBtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->OtherServicesBtn->Location = System::Drawing::Point(0, 673);
			this->OtherServicesBtn->Name = L"OtherServicesBtn";
			this->OtherServicesBtn->Size = System::Drawing::Size(223, 39);
			this->OtherServicesBtn->TabIndex = 14;
			this->OtherServicesBtn->Text = L"Other Serivces";
			this->OtherServicesBtn->UseVisualStyleBackColor = false;
			this->OtherServicesBtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::OtherServicesBtn_MouseHover);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Top;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 24, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::BlueViolet;
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(185, 36);
			this->label6->TabIndex = 1;
			this->label6->Text = L"    Manager";
			// 
			// MessagePanel
			// 
			this->MessagePanel->BackColor = System::Drawing::Color::DarkCyan;
			this->MessagePanel->Controls->Add(this->button1);
			this->MessagePanel->Controls->Add(this->button2);
			this->MessagePanel->Controls->Add(this->MessageLabel);
			this->MessagePanel->Location = System::Drawing::Point(323, 77);
			this->MessagePanel->Name = L"MessagePanel";
			this->MessagePanel->Size = System::Drawing::Size(609, 129);
			this->MessagePanel->TabIndex = 14;
			this->MessagePanel->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Crimson;
			this->button1->Location = System::Drawing::Point(371, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 37);
			this->button1->TabIndex = 7;
			this->button1->Text = L"No";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ManagerMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Crimson;
			this->button2->Location = System::Drawing::Point(120, 77);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 35);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Yes";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ManagerMenu::button2_Click);
			// 
			// MessageLabel
			// 
			this->MessageLabel->AutoSize = true;
			this->MessageLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MessageLabel->ForeColor = System::Drawing::Color::Coral;
			this->MessageLabel->Location = System::Drawing::Point(90, 24);
			this->MessageLabel->Name = L"MessageLabel";
			this->MessageLabel->Size = System::Drawing::Size(466, 34);
			this->MessageLabel->TabIndex = 0;
			this->MessageLabel->Text = L"Are You Sure Want to Logout \?";
			// 
			// ViewIdPassPanel
			// 
			this->ViewIdPassPanel->BackColor = System::Drawing::Color::DarkCyan;
			this->ViewIdPassPanel->Controls->Add(this->button3);
			this->ViewIdPassPanel->Controls->Add(this->PasswordLabel);
			this->ViewIdPassPanel->Controls->Add(this->UsernameLabel);
			this->ViewIdPassPanel->Location = System::Drawing::Point(301, 308);
			this->ViewIdPassPanel->Name = L"ViewIdPassPanel";
			this->ViewIdPassPanel->Size = System::Drawing::Size(509, 162);
			this->ViewIdPassPanel->TabIndex = 15;
			this->ViewIdPassPanel->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkMagenta;
			this->button3->Location = System::Drawing::Point(259, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(42, 35);
			this->button3->TabIndex = 7;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ManagerMenu::button3_Click);
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordLabel->ForeColor = System::Drawing::Color::Coral;
			this->PasswordLabel->Location = System::Drawing::Point(37, 65);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(181, 34);
			this->PasswordLabel->TabIndex = 0;
			this->PasswordLabel->Text = L"Password = ";
			// 
			// UsernameLabel
			// 
			this->UsernameLabel->AutoSize = true;
			this->UsernameLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameLabel->ForeColor = System::Drawing::Color::Coral;
			this->UsernameLabel->Location = System::Drawing::Point(37, 19);
			this->UsernameLabel->Name = L"UsernameLabel";
			this->UsernameLabel->Size = System::Drawing::Size(186, 34);
			this->UsernameLabel->TabIndex = 0;
			this->UsernameLabel->Text = L"Username = ";
			// 
			// ManagerMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1149, 720);
			this->Controls->Add(this->SearchPanel);
			this->Controls->Add(this->ViewIdPassPanel);
			this->Controls->Add(this->Searchsuppcuspanel);
			this->Controls->Add(this->Accountpanelcus);
			this->Controls->Add(this->Withdrawpanel);
			this->Controls->Add(this->ManagerMenuPanel);
			this->Controls->Add(this->Depositpanel);
			this->Controls->Add(this->Searchcuspanel);
			this->Controls->Add(this->MessagePanel);
			this->DoubleBuffered = true;
			this->Name = L"ManagerMenu";
			this->Text = L"ManagerMenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ManagerMenu::ManagerMenu_Load);
			this->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::ManagerMenu_MouseHover);
			this->Employeepanel->ResumeLayout(false);
			this->Customerpanel->ResumeLayout(false);
			this->Searchcuspanel->ResumeLayout(false);
			this->SearchPanel->ResumeLayout(false);
			this->SearchPanel->PerformLayout();
			this->Searchsuppcuspanel->ResumeLayout(false);
			this->Searchsuppcuspanel->PerformLayout();
			this->Accountpanelcus->ResumeLayout(false);
			this->Accountpanelcus->PerformLayout();
			this->transactionpanel->ResumeLayout(false);
			this->Withdrawpanel->ResumeLayout(false);
			this->Depositpanel->ResumeLayout(false);
			this->ManagerMenuPanel->ResumeLayout(false);
			this->ManagerMenuPanel->PerformLayout();
			this->OtherServicesPanel->ResumeLayout(false);
			this->MessagePanel->ResumeLayout(false);
			this->MessagePanel->PerformLayout();
			this->ViewIdPassPanel->ResumeLayout(false);
			this->ViewIdPassPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void HideAllSubMenu() {

		Searchcuspanel->Visible = false;
		Withdrawpanel->Visible = false;
		Depositpanel->Visible = false;
		Employeepanel->Visible = false;
		Customerpanel->Visible = false;
		transactionpanel->Visible = false;
		OtherServicesPanel->Visible = false;
		
	}

private: System::Void Employeebtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		
		HideAllSubMenu();
		Employeepanel->Visible = true;
}


private: System::Void Customerbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	
	HideAllSubMenu();
	Customerpanel->Visible = true;
}
private: System::Void Employeepanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Customerpanel->Visible = false;
	
}
	private: System::Void Addcustomerbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Employeepanel->Visible = false;
		FromDetail = false;
		AddCustomer^ mEnu = gcnew AddCustomer(this,FromDetail);
		mEnu->Show();
		this->Hide();
	}

private: System::Void ManagerMenu_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	HideAllSubMenu();
}

private: System::Void Addemployeebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Key = "FromAdd";
	Addemployee^ Menu = gcnew Addemployee(this,Key);
	Menu->Show();
	this->Hide();
	
}


private: System::Void Searchcustomerbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchcuspanel->Visible = true;
}
private: System::Void Searchcustomerbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	HideAllSubMenu();
	Customerpanel->Visible = true;
	Searchcuspanel->Visible = true;
	Searchcuspanel->Location.X = 240;
	Searchcuspanel->Location.Y = 170;
	FromEdit = false;
	FromDetail = true;
	FromDelete = false;
}




private: System::Void Cancelempbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	ManagerMenuPanel->Visible = true;
	SearchPanel->Visible = false;
}
private: System::Void Searchempbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Key == "FromDelete" || Key == "FromSearch" || Key == "FromEdit")
	{
		Query = "SELECT " + RadioBtn + " FROM Banking.Employee WHERE " + RadioBtn + " = '" + SearchTextBox->Text + "'";
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			Connect->Open();
			MySqlDataReader^ reader = cmd->ExecuteReader();
			if (reader->Read())
			{
				Connect->Close();
				Addemployee^ form = gcnew Addemployee(this, SearchTextBox->Text, Key, RadioBtn);
				form->Show();
				this->Hide();
			}
			else
			{
				Connect->Close();
				MessagePanel->Visible = true;
				SearchPanel->Visible = false;
				MessageLabel->Text = "Data Not Found";
				button1->Visible = false;
				button2->Text = "OK";
			}
		}
		catch (Exception^ ex)
		{
			MessagePanel->Visible = true;
			MessageLabel->Text = ex->Message;
			button1->Visible = false;
			button2->Text = "OK";
		}
	}
	else
	{
		
		Query = "SELECT Username, Password FROM Banking.Employee WHERE "+RadioBtn+" = '" + SearchTextBox->Text + "'";
		MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
		Connect->Open();
		MySqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read())
		{
			ViewIdPassPanel->Visible = true;
			SearchPanel->Visible = false;
			UsernameLabel->Text = "Username = "+reader[0]->ToString();
			PasswordLabel->Text = "Password = "+reader[1]->ToString();
		}
		else
		{
			ViewIdPassPanel->Visible = true;
			SearchPanel->Visible = false;
			UsernameLabel->Text = "Username = Data Not Found";
			PasswordLabel->Text = "Password = Data Not Found";
		}
		Connect->Close();
	}
	
}
private: System::Void Searchemployeebtn_Click(System::Object^ sender, System::EventArgs^ e) {


	Key = "FromSearch";
	SearchPanel->Visible = true;
	ManagerMenuPanel->Visible = false;
	SearchTextBox->Focus();
}
private: System::Void Bynamecusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchsuppcuspanel->Visible = true;
	Searchcuslabel->Text = "Enter Name";
	ManagerMenuPanel->Visible = false;
	Customerpanel->Visible = false;
	Searchcuspanel->Visible = false;
	Flag = 1;
}
private: System::Void Byidcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchsuppcuspanel->Visible = true;
	Searchcuslabel->Text = "Enter id";
	ManagerMenuPanel->Visible = false;
	Customerpanel->Visible = false;
	Searchcuspanel->Visible = false;
	Flag = 2;
}
private: System::Void Bymobcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchsuppcuspanel->Visible = true;
	Searchcuslabel->Text = "Enter Mob";
	ManagerMenuPanel->Visible = false;
	Customerpanel->Visible = false;
	Searchcuspanel->Visible = false;
	Flag = 3;

}
private: System::Void Searchcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if(FromDetail==true||FromEdit==true||FromDelete==true)
	{ 
		AddCustomer^ form = gcnew AddCustomer(this, FromDetail, Searchcustxtbox->Text, Flag, FromEdit, FromDelete);
		form->Show();
		this->Hide();
	}

	if (Key == "FromUpdateMob"||Key=="FromKyc")
	{
		AddCustomer^ form = gcnew AddCustomer(this, Searchcustxtbox->Text, Key);
		form->Show();
		this->Hide();

	}


	

}
private: System::Void Cancelcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	ManagerMenuPanel->Visible = true;
	Searchsuppcuspanel->Visible = false;




}


private: System::Void Deletecustomerbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	HideAllSubMenu();
	Customerpanel->Visible = true;
	Searchcuspanel->Visible = true;
	Searchcuspanel->Location.X = 240;
	Searchcuspanel->Location.Y = 170;
	
	FromEdit = false;
	FromDetail = false;
	FromDelete = true;
}
private: System::Void Editcustomerbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	HideAllSubMenu();
	Customerpanel->Visible = true;
	Searchcuspanel->Visible = true;
	Searchcuspanel->Location.X = 240;
	Searchcuspanel->Location.Y = 170;
	FromEdit = true;
	FromDetail = false;
	FromDelete = false;
}
private: System::Void Editcustomerbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Accountcus_Click(System::Object^ sender, System::EventArgs^ e) {
	FromDeposit = false;
	FromWithdraw = false;
	FromAccount = true;
	Accountpanelcus->Visible = true;
}

private: System::Void Accountsearchbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Key == "FromDebitCard" || Key == "FromCreditCard" || Key == "FromChequeBook"/* || Key == "FromKyc"*/ )
	{
		FromAccount = false;
		Account^ Form = gcnew Account(this,  Accountcustxt->Text,Key);

		Form->Show();
		this->Hide();

	}
	if(FromWithdraw==true||FromDeposit==true||FromAccount==true)
	{
		FromAccount = true;
		Account^ Form = gcnew Account(this, FromAccount, Accountcustxt->Text, FromWithdraw, FromDeposit);

		Form->Show();
		this->Hide();
	
	}
	else if(FromTransaction)
	{
		FromTransaction = true;
		Transaction^ Form = gcnew Transaction(this, FromTransaction, Accountcustxt->Text);
		Form->Show();
		this->Hide();


	}

	
}
private: System::Void Accountcancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	ManagerMenuPanel->Visible = true;
	Accountpanelcus->Visible = false;
}
private: System::Void Withdrawbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	HideAllSubMenu();
	transactionpanel->Visible = true;
	Withdrawpanel->Location.X = 240;
	Withdrawpanel->Location.Y = 170;
	Withdrawpanel->Visible = true;
}
private: System::Void Bypassbookbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	FromWithdraw = true;
	FromDeposit = false;
	Accountpanelcus->Visible = true;

}
private: System::Void custransactionbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	HideAllSubMenu();
	transactionpanel->Visible = true;
}

private: System::Void Depositbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	HideAllSubMenu();
	transactionpanel->Visible = true;
	Depositpanel->Location.X = 240;
	Depositpanel->Location.Y = 210;
	Depositpanel->Visible = true;
}
private: System::Void Bycashdepositbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	FromDeposit = true;
	FromWithdraw = false;
	Accountpanelcus->Visible = true;
}


private: System::Void Detailsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	FromTransaction = true;
	Accountpanelcus->Visible = true;
}
private: System::Void OtherServicesBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	HideAllSubMenu();
	OtherServicesPanel->Visible = true;
}
private: System::Void LogoutBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromLogout";
	MessagePanel->Visible = true;
	button1->Visible = true;
	button2->Text = "Yes";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	MessagePanel->Visible = false;
	ManagerMenuPanel->Visible = true;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Key == "FromLogout")
	{
		MainMenu->Show();
		this->Close();
	}
	else
	{
		MessagePanel->Visible = false;
		ManagerMenuPanel->Visible = true;
	}
	
}
private: System::Void ApplyDebitCardBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Accountpanelcus->Visible = true;
	Key = "FromDebitCard";
}
private: System::Void ApplyCreditCardBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Accountpanelcus->Visible = true;
	Key = "FromCreditCard";
}
private: System::Void ApplyChequeBookBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Accountpanelcus->Visible = true;
	Key = "FromChequeBook";
}
private: System::Void UpdateMobileBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Searchsuppcuspanel->Visible = true;
	Key = "FromUpdateMob";
}
private: System::Void UpdateKycBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchsuppcuspanel->Visible = true;
	/* Accountpanelcus->Visible = true;*/
	Key = "FromKyc";
}
private: System::Void Withdrawbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ManagerMenu_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ViewIdPassBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	SearchPanel->Visible = true;
	Key = "FromViewIdPass";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	ViewIdPassPanel->Visible = false;
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	RadioBtn = "Name";
	SearchLabel->Text = "Enter Name";
	SearchTextBox->Focus();
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	RadioBtn = "Username";
	SearchLabel->Text = "Enter ID";
	SearchTextBox->Focus();
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	RadioBtn = "Aadhar";
	SearchLabel->Text = "Enter Aadhar";
	SearchTextBox->Focus();
}
private: System::Void Deleteemployeebtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromDelete";
	SearchPanel->Visible = true;
	ManagerMenuPanel->Visible = false;
	SearchTextBox->Focus();
}
private: System::Void Editemployeebtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Key = "FromEdit";
	SearchPanel->Visible = true;
	ManagerMenuPanel->Visible = false;
	SearchTextBox->Focus();
}
};
}
