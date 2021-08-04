
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




		   int Flag;
	public: ManagerMenu(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::Panel^ Searchemppanel;
	private: System::Windows::Forms::Button^ Byempmobbtn;



	private: System::Windows::Forms::Button^ Byidbtn;

	private: System::Windows::Forms::Button^ Bynamebtn;
	private: System::Windows::Forms::Panel^ Searchcuspanel;
	private: System::Windows::Forms::Button^ Bymobcusbtn;

	private: System::Windows::Forms::Button^ Byidcusbtn;

	private: System::Windows::Forms::Button^ Bynamecusbtn;
	private: System::Windows::Forms::Panel^ Searchsuppemppanel;
	private: System::Windows::Forms::Button^ Cancelempbtn;
	private: System::Windows::Forms::Button^ Searchempbtn;
	private: System::Windows::Forms::TextBox^ Searchemptxtbox;
	private: System::Windows::Forms::Label^ Searchemplabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ Managermenupanel;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->Searchemppanel = (gcnew System::Windows::Forms::Panel());
			this->Byempmobbtn = (gcnew System::Windows::Forms::Button());
			this->Byidbtn = (gcnew System::Windows::Forms::Button());
			this->Bynamebtn = (gcnew System::Windows::Forms::Button());
			this->Searchcuspanel = (gcnew System::Windows::Forms::Panel());
			this->Bymobcusbtn = (gcnew System::Windows::Forms::Button());
			this->Byidcusbtn = (gcnew System::Windows::Forms::Button());
			this->Bynamecusbtn = (gcnew System::Windows::Forms::Button());
			this->Searchsuppemppanel = (gcnew System::Windows::Forms::Panel());
			this->Cancelempbtn = (gcnew System::Windows::Forms::Button());
			this->Searchempbtn = (gcnew System::Windows::Forms::Button());
			this->Searchemptxtbox = (gcnew System::Windows::Forms::TextBox());
			this->Searchemplabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Managermenupanel = (gcnew System::Windows::Forms::Panel());
			this->custransactionbtn = (gcnew System::Windows::Forms::Button());
			this->Searchsuppcuspanel = (gcnew System::Windows::Forms::Panel());
			this->Cancelcusbtn = (gcnew System::Windows::Forms::Button());
			this->Searchcusbtn = (gcnew System::Windows::Forms::Button());
			this->Searchcustxtbox = (gcnew System::Windows::Forms::TextBox());
			this->Searchcuslabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->Employeepanel->SuspendLayout();
			this->Customerpanel->SuspendLayout();
			this->Searchemppanel->SuspendLayout();
			this->Searchcuspanel->SuspendLayout();
			this->Searchsuppemppanel->SuspendLayout();
			this->Managermenupanel->SuspendLayout();
			this->Searchsuppcuspanel->SuspendLayout();
			this->Accountpanelcus->SuspendLayout();
			this->transactionpanel->SuspendLayout();
			this->Withdrawpanel->SuspendLayout();
			this->Depositpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(365, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(312, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MANAGER MENU";
			// 
			// Employeebtn
			// 
			this->Employeebtn->BackColor = System::Drawing::Color::Yellow;
			this->Employeebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Employeebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Employeebtn->Location = System::Drawing::Point(18, 21);
			this->Employeebtn->Name = L"Employeebtn";
			this->Employeebtn->Size = System::Drawing::Size(148, 39);
			this->Employeebtn->TabIndex = 1;
			this->Employeebtn->Text = L"EMPLOYEE";
			this->Employeebtn->UseVisualStyleBackColor = false;
			this->Employeebtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Employeebtn_Click);
			this->Employeebtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Employeebtn_MouseHover);
			// 
			// Customerbtn
			// 
			this->Customerbtn->BackColor = System::Drawing::Color::Yellow;
			this->Customerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customerbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Customerbtn->Location = System::Drawing::Point(381, 22);
			this->Customerbtn->Name = L"Customerbtn";
			this->Customerbtn->Size = System::Drawing::Size(148, 39);
			this->Customerbtn->TabIndex = 2;
			this->Customerbtn->Text = L"CUSTOMER";
			this->Customerbtn->UseVisualStyleBackColor = false;
			this->Customerbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Customerbtn_Click);
			this->Customerbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Customerbtn_MouseHover);
			// 
			// Employeepanel
			// 
			this->Employeepanel->Controls->Add(this->Editemployeebtn);
			this->Employeepanel->Controls->Add(this->Searchemployeebtn);
			this->Employeepanel->Controls->Add(this->Deleteemployeebtn);
			this->Employeepanel->Controls->Add(this->Addemployeebtn);
			this->Employeepanel->Location = System::Drawing::Point(12, 178);
			this->Employeepanel->Name = L"Employeepanel";
			this->Employeepanel->Size = System::Drawing::Size(200, 156);
			this->Employeepanel->TabIndex = 3;
			this->Employeepanel->Visible = false;
			this->Employeepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ManagerMenu::Employeepanel_Paint);
			// 
			// Editemployeebtn
			// 
			this->Editemployeebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Editemployeebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Editemployeebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Editemployeebtn->Location = System::Drawing::Point(0, 115);
			this->Editemployeebtn->Name = L"Editemployeebtn";
			this->Editemployeebtn->Size = System::Drawing::Size(200, 39);
			this->Editemployeebtn->TabIndex = 5;
			this->Editemployeebtn->Text = L"Edit Employee";
			this->Editemployeebtn->UseVisualStyleBackColor = false;
			this->Editemployeebtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Editemployeebtn_Click);
			this->Editemployeebtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Editemployeebtn_MouseHover);
			// 
			// Searchemployeebtn
			// 
			this->Searchemployeebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Searchemployeebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchemployeebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Searchemployeebtn->Location = System::Drawing::Point(0, 76);
			this->Searchemployeebtn->Name = L"Searchemployeebtn";
			this->Searchemployeebtn->Size = System::Drawing::Size(200, 39);
			this->Searchemployeebtn->TabIndex = 4;
			this->Searchemployeebtn->Text = L"Search Employee";
			this->Searchemployeebtn->UseVisualStyleBackColor = false;
			this->Searchemployeebtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Searchemployeebtn_Click);
			this->Searchemployeebtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Searchemployeebtn_MouseHover);
			// 
			// Deleteemployeebtn
			// 
			this->Deleteemployeebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Deleteemployeebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Deleteemployeebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Deleteemployeebtn->Location = System::Drawing::Point(0, 38);
			this->Deleteemployeebtn->Name = L"Deleteemployeebtn";
			this->Deleteemployeebtn->Size = System::Drawing::Size(200, 39);
			this->Deleteemployeebtn->TabIndex = 3;
			this->Deleteemployeebtn->Text = L"Delete Employee";
			this->Deleteemployeebtn->UseVisualStyleBackColor = false;
			this->Deleteemployeebtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Deleteemployeebtn_Click);
			this->Deleteemployeebtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Deleteemployeebtn_MouseHover);
			// 
			// Addemployeebtn
			// 
			this->Addemployeebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Addemployeebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addemployeebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Addemployeebtn->Location = System::Drawing::Point(0, 0);
			this->Addemployeebtn->Name = L"Addemployeebtn";
			this->Addemployeebtn->Size = System::Drawing::Size(200, 39);
			this->Addemployeebtn->TabIndex = 2;
			this->Addemployeebtn->Text = L"Add Employee";
			this->Addemployeebtn->UseVisualStyleBackColor = false;
			this->Addemployeebtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Addemployeebtn_Click);
			// 
			// Customerpanel
			// 
			this->Customerpanel->Controls->Add(this->Accountcus);
			this->Customerpanel->Controls->Add(this->Editcustomerbtn);
			this->Customerpanel->Controls->Add(this->Searchcustomerbtn);
			this->Customerpanel->Controls->Add(this->Deletecustomerbtn);
			this->Customerpanel->Controls->Add(this->Addcustomerbtn);
			this->Customerpanel->Location = System::Drawing::Point(377, 178);
			this->Customerpanel->Name = L"Customerpanel";
			this->Customerpanel->Size = System::Drawing::Size(200, 189);
			this->Customerpanel->TabIndex = 4;
			this->Customerpanel->Visible = false;
			this->Customerpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ManagerMenu::Customerpanel_Paint);
			// 
			// Accountcus
			// 
			this->Accountcus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Accountcus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accountcus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Accountcus->Location = System::Drawing::Point(0, 149);
			this->Accountcus->Name = L"Accountcus";
			this->Accountcus->Size = System::Drawing::Size(200, 39);
			this->Accountcus->TabIndex = 6;
			this->Accountcus->Text = L"Account Details";
			this->Accountcus->UseVisualStyleBackColor = false;
			this->Accountcus->Click += gcnew System::EventHandler(this, &ManagerMenu::Accountcus_Click);
			this->Accountcus->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Accountcus_MouseHover);
			// 
			// Editcustomerbtn
			// 
			this->Editcustomerbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Editcustomerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Editcustomerbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Editcustomerbtn->Location = System::Drawing::Point(0, 113);
			this->Editcustomerbtn->Name = L"Editcustomerbtn";
			this->Editcustomerbtn->Size = System::Drawing::Size(200, 39);
			this->Editcustomerbtn->TabIndex = 5;
			this->Editcustomerbtn->Text = L"Edit Customer";
			this->Editcustomerbtn->UseVisualStyleBackColor = false;
			this->Editcustomerbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Editcustomerbtn_Click);
			this->Editcustomerbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Editcustomerbtn_MouseHover);
			// 
			// Searchcustomerbtn
			// 
			this->Searchcustomerbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Searchcustomerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchcustomerbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Searchcustomerbtn->Location = System::Drawing::Point(0, 76);
			this->Searchcustomerbtn->Name = L"Searchcustomerbtn";
			this->Searchcustomerbtn->Size = System::Drawing::Size(200, 39);
			this->Searchcustomerbtn->TabIndex = 4;
			this->Searchcustomerbtn->Text = L"Search Customer";
			this->Searchcustomerbtn->UseVisualStyleBackColor = false;
			this->Searchcustomerbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Searchcustomerbtn_Click);
			this->Searchcustomerbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Searchcustomerbtn_MouseHover);
			// 
			// Deletecustomerbtn
			// 
			this->Deletecustomerbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Deletecustomerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Deletecustomerbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Deletecustomerbtn->Location = System::Drawing::Point(0, 38);
			this->Deletecustomerbtn->Name = L"Deletecustomerbtn";
			this->Deletecustomerbtn->Size = System::Drawing::Size(200, 39);
			this->Deletecustomerbtn->TabIndex = 3;
			this->Deletecustomerbtn->Text = L"Delete Customer";
			this->Deletecustomerbtn->UseVisualStyleBackColor = false;
			this->Deletecustomerbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Deletecustomerbtn_MouseHover);
			// 
			// Addcustomerbtn
			// 
			this->Addcustomerbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Addcustomerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addcustomerbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Addcustomerbtn->Location = System::Drawing::Point(0, 0);
			this->Addcustomerbtn->Name = L"Addcustomerbtn";
			this->Addcustomerbtn->Size = System::Drawing::Size(200, 39);
			this->Addcustomerbtn->TabIndex = 2;
			this->Addcustomerbtn->Text = L"Add Customer";
			this->Addcustomerbtn->UseVisualStyleBackColor = false;
			this->Addcustomerbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Addcustomerbtn_Click);
			// 
			// Searchemppanel
			// 
			this->Searchemppanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Searchemppanel->Controls->Add(this->Byempmobbtn);
			this->Searchemppanel->Controls->Add(this->Byidbtn);
			this->Searchemppanel->Controls->Add(this->Bynamebtn);
			this->Searchemppanel->Location = System::Drawing::Point(218, 238);
			this->Searchemppanel->Name = L"Searchemppanel";
			this->Searchemppanel->Size = System::Drawing::Size(150, 116);
			this->Searchemppanel->TabIndex = 5;
			this->Searchemppanel->Visible = false;
			// 
			// Byempmobbtn
			// 
			this->Byempmobbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Byempmobbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Byempmobbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Byempmobbtn->Location = System::Drawing::Point(0, 74);
			this->Byempmobbtn->Name = L"Byempmobbtn";
			this->Byempmobbtn->Size = System::Drawing::Size(150, 42);
			this->Byempmobbtn->TabIndex = 4;
			this->Byempmobbtn->Text = L"BY MOB NO";
			this->Byempmobbtn->UseVisualStyleBackColor = false;
			this->Byempmobbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::byempmobbtn_Click);
			// 
			// Byidbtn
			// 
			this->Byidbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Byidbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Byidbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Byidbtn->Location = System::Drawing::Point(-1, 37);
			this->Byidbtn->Name = L"Byidbtn";
			this->Byidbtn->Size = System::Drawing::Size(151, 39);
			this->Byidbtn->TabIndex = 3;
			this->Byidbtn->Text = L"BY  ID";
			this->Byidbtn->UseVisualStyleBackColor = false;
			this->Byidbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Byidbtn_Click);
			// 
			// Bynamebtn
			// 
			this->Bynamebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Bynamebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bynamebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Bynamebtn->Location = System::Drawing::Point(-1, 0);
			this->Bynamebtn->Name = L"Bynamebtn";
			this->Bynamebtn->Size = System::Drawing::Size(154, 39);
			this->Bynamebtn->TabIndex = 2;
			this->Bynamebtn->Text = L"BY NAME";
			this->Bynamebtn->UseVisualStyleBackColor = false;
			this->Bynamebtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Bynamebtn_Click);
			// 
			// Searchcuspanel
			// 
			this->Searchcuspanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Searchcuspanel->Controls->Add(this->Bymobcusbtn);
			this->Searchcuspanel->Controls->Add(this->Byidcusbtn);
			this->Searchcuspanel->Controls->Add(this->Bynamecusbtn);
			this->Searchcuspanel->Location = System::Drawing::Point(573, 275);
			this->Searchcuspanel->Name = L"Searchcuspanel";
			this->Searchcuspanel->Size = System::Drawing::Size(150, 116);
			this->Searchcuspanel->TabIndex = 6;
			this->Searchcuspanel->Visible = false;
			// 
			// Bymobcusbtn
			// 
			this->Bymobcusbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Bymobcusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bymobcusbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Bymobcusbtn->Location = System::Drawing::Point(0, 74);
			this->Bymobcusbtn->Name = L"Bymobcusbtn";
			this->Bymobcusbtn->Size = System::Drawing::Size(150, 42);
			this->Bymobcusbtn->TabIndex = 4;
			this->Bymobcusbtn->Text = L"BY MOB NO";
			this->Bymobcusbtn->UseVisualStyleBackColor = false;
			this->Bymobcusbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Bymobcusbtn_Click);
			// 
			// Byidcusbtn
			// 
			this->Byidcusbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Byidcusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Byidcusbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Byidcusbtn->Location = System::Drawing::Point(-1, 37);
			this->Byidcusbtn->Name = L"Byidcusbtn";
			this->Byidcusbtn->Size = System::Drawing::Size(151, 39);
			this->Byidcusbtn->TabIndex = 3;
			this->Byidcusbtn->Text = L"BY ID";
			this->Byidcusbtn->UseVisualStyleBackColor = false;
			this->Byidcusbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Byidcusbtn_Click);
			// 
			// Bynamecusbtn
			// 
			this->Bynamecusbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Bynamecusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bynamecusbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Bynamecusbtn->Location = System::Drawing::Point(0, 0);
			this->Bynamecusbtn->Name = L"Bynamecusbtn";
			this->Bynamecusbtn->Size = System::Drawing::Size(153, 39);
			this->Bynamecusbtn->TabIndex = 2;
			this->Bynamecusbtn->Text = L"BY NAME";
			this->Bynamecusbtn->UseVisualStyleBackColor = false;
			this->Bynamecusbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Bynamecusbtn_Click);
			// 
			// Searchsuppemppanel
			// 
			this->Searchsuppemppanel->BackColor = System::Drawing::Color::Aqua;
			this->Searchsuppemppanel->Controls->Add(this->Cancelempbtn);
			this->Searchsuppemppanel->Controls->Add(this->Searchempbtn);
			this->Searchsuppemppanel->Controls->Add(this->Searchemptxtbox);
			this->Searchsuppemppanel->Controls->Add(this->Searchemplabel);
			this->Searchsuppemppanel->Controls->Add(this->label2);
			this->Searchsuppemppanel->Location = System::Drawing::Point(34, 360);
			this->Searchsuppemppanel->Name = L"Searchsuppemppanel";
			this->Searchsuppemppanel->Size = System::Drawing::Size(374, 165);
			this->Searchsuppemppanel->TabIndex = 7;
			this->Searchsuppemppanel->Visible = false;
			this->Searchsuppemppanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ManagerMenu::Searchsuppemppanel_Paint);
			// 
			// Cancelempbtn
			// 
			this->Cancelempbtn->Location = System::Drawing::Point(239, 122);
			this->Cancelempbtn->Name = L"Cancelempbtn";
			this->Cancelempbtn->Size = System::Drawing::Size(75, 23);
			this->Cancelempbtn->TabIndex = 5;
			this->Cancelempbtn->Text = L"Cancel";
			this->Cancelempbtn->UseVisualStyleBackColor = true;
			this->Cancelempbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Cancelempbtn_Click);
			// 
			// Searchempbtn
			// 
			this->Searchempbtn->Location = System::Drawing::Point(39, 124);
			this->Searchempbtn->Name = L"Searchempbtn";
			this->Searchempbtn->Size = System::Drawing::Size(75, 23);
			this->Searchempbtn->TabIndex = 4;
			this->Searchempbtn->Text = L"Search";
			this->Searchempbtn->UseVisualStyleBackColor = true;
			this->Searchempbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Searchempbtn_Click);
			// 
			// Searchemptxtbox
			// 
			this->Searchemptxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchemptxtbox->Location = System::Drawing::Point(140, 70);
			this->Searchemptxtbox->Name = L"Searchemptxtbox";
			this->Searchemptxtbox->Size = System::Drawing::Size(221, 32);
			this->Searchemptxtbox->TabIndex = 3;
			// 
			// Searchemplabel
			// 
			this->Searchemplabel->AutoSize = true;
			this->Searchemplabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchemplabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Searchemplabel->Location = System::Drawing::Point(3, 74);
			this->Searchemplabel->Name = L"Searchemplabel";
			this->Searchemplabel->Size = System::Drawing::Size(111, 24);
			this->Searchemplabel->TabIndex = 2;
			this->Searchemplabel->Text = L"Enter Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(64, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Search Employee";
			// 
			// Managermenupanel
			// 
			this->Managermenupanel->BackColor = System::Drawing::Color::Transparent;
			this->Managermenupanel->Controls->Add(this->custransactionbtn);
			this->Managermenupanel->Controls->Add(this->Customerbtn);
			this->Managermenupanel->Controls->Add(this->Employeebtn);
			this->Managermenupanel->Location = System::Drawing::Point(12, 119);
			this->Managermenupanel->Name = L"Managermenupanel";
			this->Managermenupanel->Size = System::Drawing::Size(951, 61);
			this->Managermenupanel->TabIndex = 6;
			// 
			// custransactionbtn
			// 
			this->custransactionbtn->BackColor = System::Drawing::Color::Yellow;
			this->custransactionbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->custransactionbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->custransactionbtn->Location = System::Drawing::Point(737, 19);
			this->custransactionbtn->Name = L"custransactionbtn";
			this->custransactionbtn->Size = System::Drawing::Size(162, 39);
			this->custransactionbtn->TabIndex = 4;
			this->custransactionbtn->Text = L"Transaction";
			this->custransactionbtn->UseVisualStyleBackColor = false;
			this->custransactionbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::custransactionbtn_MouseHover);
			// 
			// Searchsuppcuspanel
			// 
			this->Searchsuppcuspanel->BackColor = System::Drawing::Color::Aqua;
			this->Searchsuppcuspanel->Controls->Add(this->Cancelcusbtn);
			this->Searchsuppcuspanel->Controls->Add(this->Searchcusbtn);
			this->Searchsuppcuspanel->Controls->Add(this->Searchcustxtbox);
			this->Searchsuppcuspanel->Controls->Add(this->Searchcuslabel);
			this->Searchsuppcuspanel->Controls->Add(this->label4);
			this->Searchsuppcuspanel->Location = System::Drawing::Point(453, 397);
			this->Searchsuppcuspanel->Name = L"Searchsuppcuspanel";
			this->Searchsuppcuspanel->Size = System::Drawing::Size(374, 165);
			this->Searchsuppcuspanel->TabIndex = 8;
			this->Searchsuppcuspanel->Visible = false;
			this->Searchsuppcuspanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ManagerMenu::Searchsuppcuspanel_Paint);
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
			this->Searchcustxtbox->TextChanged += gcnew System::EventHandler(this, &ManagerMenu::Searchcustxtbox_TextChanged);
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
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(62, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(225, 31);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Search Customer";
			// 
			// Accountpanelcus
			// 
			this->Accountpanelcus->BackColor = System::Drawing::Color::Aqua;
			this->Accountpanelcus->Controls->Add(this->Accountcancelbtn);
			this->Accountpanelcus->Controls->Add(this->Accountsearchbtn);
			this->Accountpanelcus->Controls->Add(this->Accountcustxt);
			this->Accountpanelcus->Controls->Add(this->label3);
			this->Accountpanelcus->Controls->Add(this->label5);
			this->Accountpanelcus->Location = System::Drawing::Point(56, 547);
			this->Accountpanelcus->Name = L"Accountpanelcus";
			this->Accountpanelcus->Size = System::Drawing::Size(374, 153);
			this->Accountpanelcus->TabIndex = 9;
			this->Accountpanelcus->Visible = false;
			this->Accountpanelcus->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ManagerMenu::Accountpanelcus_Paint);
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
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(66, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(256, 31);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Account Information";
			// 
			// transactionpanel
			// 
			this->transactionpanel->Controls->Add(this->Statementbtn);
			this->transactionpanel->Controls->Add(this->Detailsbtn);
			this->transactionpanel->Controls->Add(this->Depositbtn);
			this->transactionpanel->Controls->Add(this->Withdrawbtn);
			this->transactionpanel->Location = System::Drawing::Point(732, 176);
			this->transactionpanel->Name = L"transactionpanel";
			this->transactionpanel->Size = System::Drawing::Size(200, 148);
			this->transactionpanel->TabIndex = 10;
			this->transactionpanel->Visible = false;
			// 
			// Statementbtn
			// 
			this->Statementbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Statementbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Statementbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Statementbtn->Location = System::Drawing::Point(0, 113);
			this->Statementbtn->Name = L"Statementbtn";
			this->Statementbtn->Size = System::Drawing::Size(200, 39);
			this->Statementbtn->TabIndex = 5;
			this->Statementbtn->Text = L"Statement";
			this->Statementbtn->UseVisualStyleBackColor = false;
			// 
			// Detailsbtn
			// 
			this->Detailsbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Detailsbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Detailsbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Detailsbtn->Location = System::Drawing::Point(0, 76);
			this->Detailsbtn->Name = L"Detailsbtn";
			this->Detailsbtn->Size = System::Drawing::Size(200, 39);
			this->Detailsbtn->TabIndex = 4;
			this->Detailsbtn->Text = L"Details";
			this->Detailsbtn->UseVisualStyleBackColor = false;
			this->Detailsbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Detailsbtn_Click);
			// 
			// Depositbtn
			// 
			this->Depositbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Depositbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Depositbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Depositbtn->Location = System::Drawing::Point(0, 38);
			this->Depositbtn->Name = L"Depositbtn";
			this->Depositbtn->Size = System::Drawing::Size(200, 39);
			this->Depositbtn->TabIndex = 3;
			this->Depositbtn->Text = L"Deposit";
			this->Depositbtn->UseVisualStyleBackColor = false;
			this->Depositbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Depositbtn_MouseHover);
			// 
			// Withdrawbtn
			// 
			this->Withdrawbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Withdrawbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Withdrawbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Withdrawbtn->Location = System::Drawing::Point(0, 0);
			this->Withdrawbtn->Name = L"Withdrawbtn";
			this->Withdrawbtn->Size = System::Drawing::Size(200, 39);
			this->Withdrawbtn->TabIndex = 2;
			this->Withdrawbtn->Text = L"Withdraw";
			this->Withdrawbtn->UseVisualStyleBackColor = false;
			this->Withdrawbtn->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::Withdrawbtn_MouseHover);
			// 
			// Withdrawpanel
			// 
			this->Withdrawpanel->Controls->Add(this->Bypassbookbtn);
			this->Withdrawpanel->Controls->Add(this->Bycardbtn);
			this->Withdrawpanel->Controls->Add(this->Bycheckbtn);
			this->Withdrawpanel->Location = System::Drawing::Point(938, 186);
			this->Withdrawpanel->Name = L"Withdrawpanel";
			this->Withdrawpanel->Size = System::Drawing::Size(215, 122);
			this->Withdrawpanel->TabIndex = 11;
			this->Withdrawpanel->Visible = false;
			this->Withdrawpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ManagerMenu::Withdrawpanel_Paint);
			// 
			// Bypassbookbtn
			// 
			this->Bypassbookbtn->BackColor = System::Drawing::Color::Red;
			this->Bypassbookbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bypassbookbtn->ForeColor = System::Drawing::Color::Navy;
			this->Bypassbookbtn->Location = System::Drawing::Point(0, 76);
			this->Bypassbookbtn->Name = L"Bypassbookbtn";
			this->Bypassbookbtn->Size = System::Drawing::Size(200, 39);
			this->Bypassbookbtn->TabIndex = 4;
			this->Bypassbookbtn->Text = L"By passbook";
			this->Bypassbookbtn->UseVisualStyleBackColor = false;
			this->Bypassbookbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Bypassbookbtn_Click);
			// 
			// Bycardbtn
			// 
			this->Bycardbtn->BackColor = System::Drawing::Color::Red;
			this->Bycardbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bycardbtn->ForeColor = System::Drawing::Color::Navy;
			this->Bycardbtn->Location = System::Drawing::Point(0, 38);
			this->Bycardbtn->Name = L"Bycardbtn";
			this->Bycardbtn->Size = System::Drawing::Size(200, 39);
			this->Bycardbtn->TabIndex = 3;
			this->Bycardbtn->Text = L"By card";
			this->Bycardbtn->UseVisualStyleBackColor = false;
			// 
			// Bycheckbtn
			// 
			this->Bycheckbtn->BackColor = System::Drawing::Color::Red;
			this->Bycheckbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bycheckbtn->ForeColor = System::Drawing::Color::Navy;
			this->Bycheckbtn->Location = System::Drawing::Point(-3, 0);
			this->Bycheckbtn->Name = L"Bycheckbtn";
			this->Bycheckbtn->Size = System::Drawing::Size(200, 39);
			this->Bycheckbtn->TabIndex = 2;
			this->Bycheckbtn->Text = L"By check";
			this->Bycheckbtn->UseVisualStyleBackColor = false;
			// 
			// Depositpanel
			// 
			this->Depositpanel->Controls->Add(this->Bycashdepositbtn);
			this->Depositpanel->Controls->Add(this->Bycheckdepositbtn);
			this->Depositpanel->Location = System::Drawing::Point(937, 314);
			this->Depositpanel->Name = L"Depositpanel";
			this->Depositpanel->Size = System::Drawing::Size(200, 77);
			this->Depositpanel->TabIndex = 12;
			this->Depositpanel->Visible = false;
			// 
			// Bycashdepositbtn
			// 
			this->Bycashdepositbtn->BackColor = System::Drawing::Color::Red;
			this->Bycashdepositbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bycashdepositbtn->ForeColor = System::Drawing::Color::Navy;
			this->Bycashdepositbtn->Location = System::Drawing::Point(0, 38);
			this->Bycashdepositbtn->Name = L"Bycashdepositbtn";
			this->Bycashdepositbtn->Size = System::Drawing::Size(200, 39);
			this->Bycashdepositbtn->TabIndex = 3;
			this->Bycashdepositbtn->Text = L"By Cash";
			this->Bycashdepositbtn->UseVisualStyleBackColor = false;
			this->Bycashdepositbtn->Click += gcnew System::EventHandler(this, &ManagerMenu::Bycashdepositbtn_Click);
			// 
			// Bycheckdepositbtn
			// 
			this->Bycheckdepositbtn->BackColor = System::Drawing::Color::Red;
			this->Bycheckdepositbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bycheckdepositbtn->ForeColor = System::Drawing::Color::Navy;
			this->Bycheckdepositbtn->Location = System::Drawing::Point(0, 0);
			this->Bycheckdepositbtn->Name = L"Bycheckdepositbtn";
			this->Bycheckdepositbtn->Size = System::Drawing::Size(200, 39);
			this->Bycheckdepositbtn->TabIndex = 2;
			this->Bycheckdepositbtn->Text = L"By Check";
			this->Bycheckdepositbtn->UseVisualStyleBackColor = false;
			// 
			// ManagerMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1149, 720);
			this->Controls->Add(this->Depositpanel);
			this->Controls->Add(this->Withdrawpanel);
			this->Controls->Add(this->transactionpanel);
			this->Controls->Add(this->Accountpanelcus);
			this->Controls->Add(this->Customerpanel);
			this->Controls->Add(this->Searchsuppcuspanel);
			this->Controls->Add(this->Managermenupanel);
			this->Controls->Add(this->Searchemppanel);
			this->Controls->Add(this->Searchsuppemppanel);
			this->Controls->Add(this->Searchcuspanel);
			this->Controls->Add(this->Employeepanel);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"ManagerMenu";
			this->Text = L"ManagerMenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ManagerMenu::ManagerMenu_Load);
			this->MouseHover += gcnew System::EventHandler(this, &ManagerMenu::ManagerMenu_MouseHover);
			this->Employeepanel->ResumeLayout(false);
			this->Customerpanel->ResumeLayout(false);
			this->Searchemppanel->ResumeLayout(false);
			this->Searchcuspanel->ResumeLayout(false);
			this->Searchsuppemppanel->ResumeLayout(false);
			this->Searchsuppemppanel->PerformLayout();
			this->Managermenupanel->ResumeLayout(false);
			this->Searchsuppcuspanel->ResumeLayout(false);
			this->Searchsuppcuspanel->PerformLayout();
			this->Accountpanelcus->ResumeLayout(false);
			this->Accountpanelcus->PerformLayout();
			this->transactionpanel->ResumeLayout(false);
			this->Withdrawpanel->ResumeLayout(false);
			this->Depositpanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Employeebtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		Employeepanel->Visible = true;
	}
private: System::Void ManagerMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	Withdrawpanel->Width = 200;
	Withdrawpanel->Height = 116;
}
private: System::Void Employeebtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Customerbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Customerbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
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
	Employeepanel->Visible = false;
	Customerpanel->Visible = false;
	Searchemppanel->Visible = false;
	Searchcuspanel->Visible = false;
	transactionpanel->Visible = false;
	Withdrawpanel->Visible = false;
	Depositpanel->Visible = false;
}

private: System::Void Addemployeebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	FromDetail = false;
	Addemployee^ Menu = gcnew Addemployee(this,FromDetail);
	Menu->Show();
	this->Hide();

}
private: System::Void byempmobbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchsuppemppanel->Visible = true;
	Searchemplabel->Text = "Enter Mob";
	Managermenupanel->Visible = false;
	Employeepanel->Visible = false;
	Searchemppanel->Visible = false;
	Flag = 3;

}
private: System::Void Searchemployeebtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Searchemppanel->Visible = true;
	FromEdit = false;
	FromDetail = true;
	FromDelete = false;
}
private: System::Void Searchcustomerbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchcuspanel->Visible = true;
}
private: System::Void Searchcustomerbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Searchcuspanel->Visible = true;
	FromEdit = false;
	FromDetail = true;
	FromDelete = false;
}

private: System::Void Bynamebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchsuppemppanel->Visible = true;
	Searchemplabel->Text = "Enter Name";
	Managermenupanel->Visible = false;
	Employeepanel->Visible = false;
	Searchemppanel->Visible = false;
	Flag = 1;
}
private: System::Void Byidbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchsuppemppanel->Visible = true;
	Searchemplabel->Text = "Enter id";
	Managermenupanel->Visible = false;
	Employeepanel->Visible = false;
	Searchemppanel->Visible = false;
	Flag = 2;
}
private: System::Void Searchsuppemppanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void Cancelempbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Managermenupanel->Visible = true;
	Searchsuppemppanel->Visible = false;
}
private: System::Void Searchempbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Addemployee^ form = gcnew Addemployee(this,FromDetail,Searchemptxtbox->Text,Flag, FromEdit,FromDelete);
	form->Show();
	this->Hide();
	
}
private: System::Void Searchemployeebtn_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Bynamecusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchsuppcuspanel->Visible = true;
	Searchcuslabel->Text = "Enter Name";
	Managermenupanel->Visible = false;
	Customerpanel->Visible = false;
	Searchcuspanel->Visible = false;
	Flag = 1;
}
private: System::Void Byidcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchsuppcuspanel->Visible = true;
	Searchcuslabel->Text = "Enter id";
	Managermenupanel->Visible = false;
	Customerpanel->Visible = false;
	Searchcuspanel->Visible = false;
	Flag = 2;
}
private: System::Void Bymobcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Searchsuppcuspanel->Visible = true;
	Searchcuslabel->Text = "Enter Mob";
	Managermenupanel->Visible = false;
	Customerpanel->Visible = false;
	Searchcuspanel->Visible = false;
	Flag = 3;

}
private: System::Void Searchcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	AddCustomer^ form = gcnew AddCustomer(this, FromDetail, Searchcustxtbox->Text, Flag,FromEdit,FromDelete);
	form->Show();
	this->Hide();

}
private: System::Void Cancelcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Managermenupanel->Visible = true;
	Searchsuppcuspanel->Visible = false;




}
private: System::Void Editemployeebtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Searchemppanel->Visible = true;
	FromEdit = true;
	FromDetail = false;
	FromDelete = false;
}
private: System::Void Editemployeebtn_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Deleteemployeebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Deleteemployeebtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Searchemppanel->Visible = true;
	FromDelete = true;
	FromDetail = false;
	FromEdit = false;
	
}
private: System::Void Deletecustomerbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Searchcuspanel->Visible = true;
	FromEdit = false;
	FromDetail = false;
	FromDelete = true;
}
private: System::Void Editcustomerbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Searchcuspanel->Visible = true;
	FromEdit = true;
	FromDetail = false;
	FromDelete = false;
}
private: System::Void Editcustomerbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Accountcus_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Accountpanelcus->Visible =true;
}
private: System::Void Accountcus_Click(System::Object^ sender, System::EventArgs^ e) {
	FromDeposit = false;
	FromWithdraw = false;
	FromAccount = true;
}
private: System::Void Searchcustxtbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Searchsuppcuspanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {                                                                                                        
}
private: System::Void Accountsearchbtn_Click(System::Object^ sender, System::EventArgs^ e) {
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
	Managermenupanel->Visible = true;
	Accountpanelcus->Visible = false;
}
private: System::Void Withdrawbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Withdrawpanel->Visible = true;
}
private: System::Void Bypassbookbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	FromWithdraw = true;
	FromDeposit = false;
	Accountpanelcus->Visible = true;

}
private: System::Void custransactionbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	transactionpanel->Visible = true;
}
private: System::Void Accountpanelcus_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e){
}
private: System::Void Customerpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Depositbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Depositpanel->Visible = true;
}
private: System::Void Bycashdepositbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	FromDeposit = true;
	FromWithdraw = false;
	Accountpanelcus->Visible = true;
}
private: System::Void Withdrawpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void Detailsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	FromTransaction = true;
	Accountpanelcus->Visible = true;
}
};
}
