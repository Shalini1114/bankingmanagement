#pragma once

namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Employeemenu
	 
	/// </summary>
	public ref class Employeemenu : public System::Windows::Forms::Form
	{
	public:
		Form^ Employeemenu;
		
			
		
		Employeemenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


		Employeemenu(Form^ obj)
		{
			InitializeComponent();
			Employeemenu = obj;

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
	private: System::Windows::Forms::Button^ button1;










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
			this->Employeelabelmenu = (gcnew System::Windows::Forms::Label());
			this->Customerempbtn = (gcnew System::Windows::Forms::Button());
			this->Customeremppanel = (gcnew System::Windows::Forms::Panel());
			this->Addcusempbtn = (gcnew System::Windows::Forms::Button());
			this->Deletecusempbtn = (gcnew System::Windows::Forms::Button());
			this->Editcusempbtn = (gcnew System::Windows::Forms::Button());
			this->Searchcusempbtn = (gcnew System::Windows::Forms::Button());
			this->Accountdetailcusempbtn = (gcnew System::Windows::Forms::Button());
			this->Accountcustomerpanel = (gcnew System::Windows::Forms::Panel());
			this->Depositempbtn = (gcnew System::Windows::Forms::Button());
			this->Detailsempbtn = (gcnew System::Windows::Forms::Button());
			this->Statementempbtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Accountcustomerbtn = (gcnew System::Windows::Forms::Button());
			this->Withdrawempbtn = (gcnew System::Windows::Forms::Button());
			this->Otherservicesempbtn = (gcnew System::Windows::Forms::Button());
			this->Applydebitempbtn = (gcnew System::Windows::Forms::Button());
			this->Applycreditempbtn = (gcnew System::Windows::Forms::Button());
			this->Appluchequeempbtn = (gcnew System::Windows::Forms::Button());
			this->Updatemobempbtn = (gcnew System::Windows::Forms::Button());
			this->Updatekycempbtn = (gcnew System::Windows::Forms::Button());
			this->Otherservicesemppanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Employeemenupanel->SuspendLayout();
			this->Customeremppanel->SuspendLayout();
			this->Accountcustomerpanel->SuspendLayout();
			this->Otherservicesemppanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Employeemenupanel
			// 
			this->Employeemenupanel->AutoScroll = true;
			this->Employeemenupanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Employeemenupanel->Controls->Add(this->Otherservicesempbtn);
			this->Employeemenupanel->Controls->Add(this->Otherservicesemppanel);
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
			// Customerempbtn
			// 
			this->Customerempbtn->BackColor = System::Drawing::Color::Red;
			this->Customerempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Customerempbtn->Font = (gcnew System::Drawing::Font(L"Wide Latin", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customerempbtn->ForeColor = System::Drawing::Color::Black;
			this->Customerempbtn->Location = System::Drawing::Point(0, 23);
			this->Customerempbtn->Name = L"Customerempbtn";
			this->Customerempbtn->Size = System::Drawing::Size(240, 39);
			this->Customerempbtn->TabIndex = 3;
			this->Customerempbtn->Text = L"CUSTOMER";
			this->Customerempbtn->UseVisualStyleBackColor = false;
			// 
			// Customeremppanel
			// 
			this->Customeremppanel->Controls->Add(this->Accountdetailcusempbtn);
			this->Customeremppanel->Controls->Add(this->Searchcusempbtn);
			this->Customeremppanel->Controls->Add(this->Editcusempbtn);
			this->Customeremppanel->Controls->Add(this->Deletecusempbtn);
			this->Customeremppanel->Controls->Add(this->Addcusempbtn);
			this->Customeremppanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Customeremppanel->Location = System::Drawing::Point(0, 62);
			this->Customeremppanel->Name = L"Customeremppanel";
			this->Customeremppanel->Size = System::Drawing::Size(240, 196);
			this->Customeremppanel->TabIndex = 4;
			this->Customeremppanel->Visible = false;
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
			this->Addcusempbtn->Size = System::Drawing::Size(240, 39);
			this->Addcusempbtn->TabIndex = 4;
			this->Addcusempbtn->Text = L"ADD CUSTOMER";
			this->Addcusempbtn->UseVisualStyleBackColor = false;
			// 
			// Deletecusempbtn
			// 
			this->Deletecusempbtn->BackColor = System::Drawing::Color::Tan;
			this->Deletecusempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Deletecusempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Deletecusempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Deletecusempbtn->Location = System::Drawing::Point(0, 39);
			this->Deletecusempbtn->Name = L"Deletecusempbtn";
			this->Deletecusempbtn->Size = System::Drawing::Size(240, 39);
			this->Deletecusempbtn->TabIndex = 5;
			this->Deletecusempbtn->Text = L"DELETE CUSTOMER";
			this->Deletecusempbtn->UseVisualStyleBackColor = false;
			// 
			// Editcusempbtn
			// 
			this->Editcusempbtn->BackColor = System::Drawing::Color::Tan;
			this->Editcusempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Editcusempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Editcusempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Editcusempbtn->Location = System::Drawing::Point(0, 78);
			this->Editcusempbtn->Name = L"Editcusempbtn";
			this->Editcusempbtn->Size = System::Drawing::Size(240, 39);
			this->Editcusempbtn->TabIndex = 6;
			this->Editcusempbtn->Text = L"EDIT CUSTOMER";
			this->Editcusempbtn->UseVisualStyleBackColor = false;
			// 
			// Searchcusempbtn
			// 
			this->Searchcusempbtn->BackColor = System::Drawing::Color::Tan;
			this->Searchcusempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Searchcusempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchcusempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Searchcusempbtn->Location = System::Drawing::Point(0, 117);
			this->Searchcusempbtn->Name = L"Searchcusempbtn";
			this->Searchcusempbtn->Size = System::Drawing::Size(240, 33);
			this->Searchcusempbtn->TabIndex = 7;
			this->Searchcusempbtn->Text = L"SEARCH CUSTOMER";
			this->Searchcusempbtn->UseVisualStyleBackColor = false;
			// 
			// Accountdetailcusempbtn
			// 
			this->Accountdetailcusempbtn->BackColor = System::Drawing::Color::Tan;
			this->Accountdetailcusempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Accountdetailcusempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Accountdetailcusempbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Accountdetailcusempbtn->Location = System::Drawing::Point(0, 150);
			this->Accountdetailcusempbtn->Name = L"Accountdetailcusempbtn";
			this->Accountdetailcusempbtn->Size = System::Drawing::Size(240, 46);
			this->Accountdetailcusempbtn->TabIndex = 8;
			this->Accountdetailcusempbtn->Text = L"ACCOUNT DETAILS";
			this->Accountdetailcusempbtn->UseVisualStyleBackColor = false;
			// 
			// Accountcustomerpanel
			// 
			this->Accountcustomerpanel->Controls->Add(this->panel1);
			this->Accountcustomerpanel->Controls->Add(this->Statementempbtn);
			this->Accountcustomerpanel->Controls->Add(this->Detailsempbtn);
			this->Accountcustomerpanel->Controls->Add(this->Depositempbtn);
			this->Accountcustomerpanel->Controls->Add(this->Withdrawempbtn);
			this->Accountcustomerpanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Accountcustomerpanel->Location = System::Drawing::Point(0, 297);
			this->Accountcustomerpanel->Name = L"Accountcustomerpanel";
			this->Accountcustomerpanel->Size = System::Drawing::Size(240, 155);
			this->Accountcustomerpanel->TabIndex = 1;
			this->Accountcustomerpanel->Visible = false;
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
			this->Depositempbtn->Size = System::Drawing::Size(240, 39);
			this->Depositempbtn->TabIndex = 10;
			this->Depositempbtn->Text = L"DEPOSIT";
			this->Depositempbtn->UseVisualStyleBackColor = false;
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
			this->Detailsempbtn->Size = System::Drawing::Size(240, 39);
			this->Detailsempbtn->TabIndex = 11;
			this->Detailsempbtn->Text = L"DETAILS";
			this->Detailsempbtn->UseVisualStyleBackColor = false;
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
			this->Statementempbtn->Size = System::Drawing::Size(240, 39);
			this->Statementempbtn->TabIndex = 12;
			this->Statementempbtn->Text = L"STATEMENT";
			this->Statementempbtn->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 200);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 17);
			this->panel1->TabIndex = 7;
			// 
			// Accountcustomerbtn
			// 
			this->Accountcustomerbtn->BackColor = System::Drawing::Color::Red;
			this->Accountcustomerbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Accountcustomerbtn->Font = (gcnew System::Drawing::Font(L"Wide Latin", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accountcustomerbtn->ForeColor = System::Drawing::Color::Black;
			this->Accountcustomerbtn->Location = System::Drawing::Point(0, 258);
			this->Accountcustomerbtn->Name = L"Accountcustomerbtn";
			this->Accountcustomerbtn->Size = System::Drawing::Size(240, 39);
			this->Accountcustomerbtn->TabIndex = 5;
			this->Accountcustomerbtn->Text = L"ACCOUNT";
			this->Accountcustomerbtn->UseVisualStyleBackColor = false;
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
			this->Withdrawempbtn->Size = System::Drawing::Size(240, 39);
			this->Withdrawempbtn->TabIndex = 9;
			this->Withdrawempbtn->Text = L"WITHDRAW";
			this->Withdrawempbtn->UseVisualStyleBackColor = false;
			this->Withdrawempbtn->Click += gcnew System::EventHandler(this, &Employeemenu::Withdrawempbtn_Click);
			// 
			// Otherservicesempbtn
			// 
			this->Otherservicesempbtn->BackColor = System::Drawing::Color::Red;
			this->Otherservicesempbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Otherservicesempbtn->Font = (gcnew System::Drawing::Font(L"Wide Latin", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Otherservicesempbtn->Location = System::Drawing::Point(0, 452);
			this->Otherservicesempbtn->Name = L"Otherservicesempbtn";
			this->Otherservicesempbtn->Size = System::Drawing::Size(240, 40);
			this->Otherservicesempbtn->TabIndex = 19;
			this->Otherservicesempbtn->Text = L"OTHER SERVICES";
			this->Otherservicesempbtn->UseVisualStyleBackColor = false;
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
			this->Applydebitempbtn->Size = System::Drawing::Size(237, 39);
			this->Applydebitempbtn->TabIndex = 13;
			this->Applydebitempbtn->Text = L"APPLY DEBIT CARD";
			this->Applydebitempbtn->UseVisualStyleBackColor = false;
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
			this->Applycreditempbtn->Size = System::Drawing::Size(237, 39);
			this->Applycreditempbtn->TabIndex = 14;
			this->Applycreditempbtn->Text = L"APPLY CREDIT CARD";
			this->Applycreditempbtn->UseVisualStyleBackColor = false;
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
			this->Appluchequeempbtn->Size = System::Drawing::Size(237, 39);
			this->Appluchequeempbtn->TabIndex = 15;
			this->Appluchequeempbtn->Text = L"APPLY CHEQUE BOOK";
			this->Appluchequeempbtn->UseVisualStyleBackColor = false;
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
			this->Updatemobempbtn->Size = System::Drawing::Size(237, 39);
			this->Updatemobempbtn->TabIndex = 16;
			this->Updatemobempbtn->Text = L"UPDATE MOB NO";
			this->Updatemobempbtn->UseVisualStyleBackColor = false;
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
			this->Updatekycempbtn->Size = System::Drawing::Size(237, 39);
			this->Updatekycempbtn->TabIndex = 17;
			this->Updatekycempbtn->Text = L"UPDATE KYC";
			this->Updatekycempbtn->UseVisualStyleBackColor = false;
			// 
			// Otherservicesemppanel
			// 
			this->Otherservicesemppanel->Controls->Add(this->button1);
			this->Otherservicesemppanel->Controls->Add(this->Updatekycempbtn);
			this->Otherservicesemppanel->Controls->Add(this->Updatemobempbtn);
			this->Otherservicesemppanel->Controls->Add(this->Appluchequeempbtn);
			this->Otherservicesemppanel->Controls->Add(this->Applycreditempbtn);
			this->Otherservicesemppanel->Controls->Add(this->Applydebitempbtn);
			this->Otherservicesemppanel->Location = System::Drawing::Point(3, 493);
			this->Otherservicesemppanel->Name = L"Otherservicesemppanel";
			this->Otherservicesemppanel->Size = System::Drawing::Size(237, 251);
			this->Otherservicesemppanel->TabIndex = 1;
			this->Otherservicesemppanel->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(237, 40);
			this->button1->TabIndex = 20;
			this->button1->Text = L"LOGOUT";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Employeemenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(911, 446);
			this->Controls->Add(this->Employeemenupanel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Employeemenu";
			this->Text = L"Employeemenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Employeemenu::Employeemenu_Load);
			this->Employeemenupanel->ResumeLayout(false);
			this->Employeemenupanel->PerformLayout();
			this->Customeremppanel->ResumeLayout(false);
			this->Accountcustomerpanel->ResumeLayout(false);
			this->Otherservicesemppanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Employeemenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Otherservicesempbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Withdrawempbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
