#include <ctime>
#include<cstdlib>
#include"Kyc.h"


namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for Account
	/// </summary>
	public ref class Account : public System::Windows::Forms::Form
	{
	public:
		Form^ ManagerMEnu;
		bool FromAccount;
		String^ Data;
		bool FromWithdraw;
		bool FromDeposit;
		String^ Key;
<<<<<<< HEAD
		bool FromCardWithdraw;
=======
>>>>>>> parent of 5ca87be (transaction change)
		

	private: System::Windows::Forms::Panel^ Proceedpanel;
	public:
	private: System::Windows::Forms::Button^ Cancelproceedbtn;
	private: System::Windows::Forms::Button^ Proceedproceedbtn;
	private: System::Windows::Forms::TextBox^ Ammounttxt;
	private: System::Windows::Forms::TextBox^ DescriptionTxt;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ Cardpanel;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ accountholdername;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ cvv;
	private: System::Windows::Forms::Label^ cardnumber;


	private: System::Windows::Forms::Label^ validupto;
	private: System::Windows::Forms::Label^ validfrom;
	private: System::Windows::Forms::Button^ CardOkBtn;
	private: System::Windows::Forms::Label^ Amountlimit;
	private: System::Windows::Forms::Label^ Amountlimitlabel;


	private: System::Windows::Forms::Label^ label14;
	public:



		Account(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Account(Form^ obj, bool temp)
		{
			ManagerMEnu = obj;
			FromAccount = temp;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Account(Form^ obj, bool temp, String^ str, bool withtemp, bool deposittemp)
		{
			ManagerMEnu = obj;
			FromAccount = temp;
			Data = str;
			FromWithdraw = withtemp;
			FromDeposit = deposittemp;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Account(Form^obj,String^ data,String^ key)
		{

			InitializeComponent();
			ManagerMEnu = obj;
			Data = data;
			Key = key;
			//
			//TODO: Add the constructor code here
			//
		}

<<<<<<< HEAD
		Account(Form^ obj, String^ data, bool tempcard)
		{

			InitializeComponent();
			ManagerMEnu = obj;
			Data = data;
			FromCardWithdraw = tempcard;
			//
			//TODO: Add the constructor code here
			//
		}

=======
>>>>>>> parent of 5ca87be (transaction change)
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Account()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ Okaccbtn;
	private: System::Windows::Forms::Button^ Cancelaccbtn;
	private: System::Windows::Forms::TextBox^ Branchnametxt;
	private: System::Windows::Forms::TextBox^ Customeridtxt;
	private: System::Windows::Forms::TextBox^ Accountopentxt;
	private: System::Windows::Forms::TextBox^ Accountbalancetxt;
	private: System::Windows::Forms::TextBox^ Accountholdertxt;
	private: System::Windows::Forms::TextBox^ Accountnotxt;
	private: System::Windows::Forms::TextBox^ Branchaddresstxt;
	private: System::Windows::Forms::TextBox^ IFSCCodetxt;
	private: System::Windows::Forms::TextBox^ Occupationtxt;
	private: System::Windows::Forms::TextBox^ MICRCodetxt;
	private: System::Windows::Forms::TextBox^ Addresstxt;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Account::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Okaccbtn = (gcnew System::Windows::Forms::Button());
			this->Cancelaccbtn = (gcnew System::Windows::Forms::Button());
			this->Branchnametxt = (gcnew System::Windows::Forms::TextBox());
			this->Customeridtxt = (gcnew System::Windows::Forms::TextBox());
			this->Accountopentxt = (gcnew System::Windows::Forms::TextBox());
			this->Accountbalancetxt = (gcnew System::Windows::Forms::TextBox());
			this->Accountholdertxt = (gcnew System::Windows::Forms::TextBox());
			this->Accountnotxt = (gcnew System::Windows::Forms::TextBox());
			this->Branchaddresstxt = (gcnew System::Windows::Forms::TextBox());
			this->IFSCCodetxt = (gcnew System::Windows::Forms::TextBox());
			this->Occupationtxt = (gcnew System::Windows::Forms::TextBox());
			this->MICRCodetxt = (gcnew System::Windows::Forms::TextBox());
			this->Addresstxt = (gcnew System::Windows::Forms::TextBox());
			this->Proceedpanel = (gcnew System::Windows::Forms::Panel());
			this->DescriptionTxt = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Cancelproceedbtn = (gcnew System::Windows::Forms::Button());
			this->Proceedproceedbtn = (gcnew System::Windows::Forms::Button());
			this->Ammounttxt = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Cardpanel = (gcnew System::Windows::Forms::Panel());
			this->Amountlimit = (gcnew System::Windows::Forms::Label());
			this->Amountlimitlabel = (gcnew System::Windows::Forms::Label());
			this->CardOkBtn = (gcnew System::Windows::Forms::Button());
			this->validupto = (gcnew System::Windows::Forms::Label());
			this->validfrom = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->accountholdername = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->cvv = (gcnew System::Windows::Forms::Label());
			this->cardnumber = (gcnew System::Windows::Forms::Label());
			this->Proceedpanel->SuspendLayout();
			this->Cardpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(371, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Account Details";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Yellow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(181, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Branch Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(186, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Branch Address";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Yellow;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(200, 391);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"IFSC Code";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Yellow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(200, 316);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Customer Id";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Yellow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(200, 227);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Account Balance";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Yellow;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(197, 142);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Account No";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(396, 227);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 39);
			this->label8->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(192, 183);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(146, 25);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Account Holder";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(200, 272);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(138, 25);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Account Open";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(199, 357);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 25);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Occupation";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(196, 429);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(115, 25);
			this->label12->TabIndex = 11;
			this->label12->Text = L"MICR Code";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Yellow;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(197, 470);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(90, 25);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Address ";
			// 
			// Okaccbtn
			// 
			this->Okaccbtn->BackColor = System::Drawing::Color::Red;
			this->Okaccbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Okaccbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Okaccbtn->Location = System::Drawing::Point(108, 512);
			this->Okaccbtn->Name = L"Okaccbtn";
			this->Okaccbtn->Size = System::Drawing::Size(123, 33);
			this->Okaccbtn->TabIndex = 13;
			this->Okaccbtn->Text = L"OK";
			this->Okaccbtn->UseVisualStyleBackColor = false;
			this->Okaccbtn->Click += gcnew System::EventHandler(this, &Account::Okaccbtn_Click);
			// 
			// Cancelaccbtn
			// 
			this->Cancelaccbtn->BackColor = System::Drawing::Color::Red;
			this->Cancelaccbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelaccbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancelaccbtn->Location = System::Drawing::Point(756, 512);
			this->Cancelaccbtn->Name = L"Cancelaccbtn";
			this->Cancelaccbtn->Size = System::Drawing::Size(123, 33);
			this->Cancelaccbtn->TabIndex = 14;
			this->Cancelaccbtn->Text = L"Cancel";
			this->Cancelaccbtn->UseVisualStyleBackColor = false;
			this->Cancelaccbtn->Click += gcnew System::EventHandler(this, &Account::Cancelaccbtn_Click);
			// 
			// Branchnametxt
			// 
			this->Branchnametxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Branchnametxt->Location = System::Drawing::Point(587, 62);
			this->Branchnametxt->Name = L"Branchnametxt";
			this->Branchnametxt->Size = System::Drawing::Size(207, 23);
			this->Branchnametxt->TabIndex = 15;
			// 
			// Customeridtxt
			// 
			this->Customeridtxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customeridtxt->Location = System::Drawing::Point(587, 316);
			this->Customeridtxt->Name = L"Customeridtxt";
			this->Customeridtxt->Size = System::Drawing::Size(207, 23);
			this->Customeridtxt->TabIndex = 16;
			// 
			// Accountopentxt
			// 
			this->Accountopentxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accountopentxt->Location = System::Drawing::Point(587, 272);
			this->Accountopentxt->Name = L"Accountopentxt";
			this->Accountopentxt->Size = System::Drawing::Size(207, 23);
			this->Accountopentxt->TabIndex = 17;
			// 
			// Accountbalancetxt
			// 
			this->Accountbalancetxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accountbalancetxt->Location = System::Drawing::Point(587, 227);
			this->Accountbalancetxt->Name = L"Accountbalancetxt";
			this->Accountbalancetxt->Size = System::Drawing::Size(207, 23);
			this->Accountbalancetxt->TabIndex = 18;
			// 
			// Accountholdertxt
			// 
			this->Accountholdertxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accountholdertxt->Location = System::Drawing::Point(587, 183);
			this->Accountholdertxt->Name = L"Accountholdertxt";
			this->Accountholdertxt->Size = System::Drawing::Size(207, 23);
			this->Accountholdertxt->TabIndex = 19;
			// 
			// Accountnotxt
			// 
			this->Accountnotxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accountnotxt->Location = System::Drawing::Point(587, 142);
			this->Accountnotxt->Name = L"Accountnotxt";
			this->Accountnotxt->Size = System::Drawing::Size(207, 23);
			this->Accountnotxt->TabIndex = 20;
			// 
			// Branchaddresstxt
			// 
			this->Branchaddresstxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Branchaddresstxt->Location = System::Drawing::Point(587, 105);
			this->Branchaddresstxt->Name = L"Branchaddresstxt";
			this->Branchaddresstxt->Size = System::Drawing::Size(207, 23);
			this->Branchaddresstxt->TabIndex = 21;
			// 
			// IFSCCodetxt
			// 
			this->IFSCCodetxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IFSCCodetxt->Location = System::Drawing::Point(587, 391);
			this->IFSCCodetxt->Name = L"IFSCCodetxt";
			this->IFSCCodetxt->Size = System::Drawing::Size(207, 23);
			this->IFSCCodetxt->TabIndex = 22;
			// 
			// Occupationtxt
			// 
			this->Occupationtxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Occupationtxt->Location = System::Drawing::Point(587, 347);
			this->Occupationtxt->Name = L"Occupationtxt";
			this->Occupationtxt->Size = System::Drawing::Size(207, 23);
			this->Occupationtxt->TabIndex = 23;
			// 
			// MICRCodetxt
			// 
			this->MICRCodetxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MICRCodetxt->Location = System::Drawing::Point(587, 431);
			this->MICRCodetxt->Name = L"MICRCodetxt";
			this->MICRCodetxt->Size = System::Drawing::Size(207, 23);
			this->MICRCodetxt->TabIndex = 24;
			// 
			// Addresstxt
			// 
			this->Addresstxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addresstxt->Location = System::Drawing::Point(587, 470);
			this->Addresstxt->Name = L"Addresstxt";
			this->Addresstxt->Size = System::Drawing::Size(207, 23);
			this->Addresstxt->TabIndex = 25;
			// 
			// Proceedpanel
			// 
			this->Proceedpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Proceedpanel->Controls->Add(this->DescriptionTxt);
			this->Proceedpanel->Controls->Add(this->label15);
			this->Proceedpanel->Controls->Add(this->Cancelproceedbtn);
			this->Proceedpanel->Controls->Add(this->Proceedproceedbtn);
			this->Proceedpanel->Controls->Add(this->Ammounttxt);
			this->Proceedpanel->Controls->Add(this->label14);
			this->Proceedpanel->Location = System::Drawing::Point(250, 91);
			this->Proceedpanel->Name = L"Proceedpanel";
			this->Proceedpanel->Size = System::Drawing::Size(413, 212);
			this->Proceedpanel->TabIndex = 26;
			this->Proceedpanel->Visible = false;
			// 
			// DescriptionTxt
			// 
			this->DescriptionTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DescriptionTxt->Location = System::Drawing::Point(254, 92);
			this->DescriptionTxt->Name = L"DescriptionTxt";
			this->DescriptionTxt->Size = System::Drawing::Size(123, 30);
			this->DescriptionTxt->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Yellow;
			this->label15->Location = System::Drawing::Point(30, 92);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(109, 25);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Description";
			// 
			// Cancelproceedbtn
			// 
			this->Cancelproceedbtn->BackColor = System::Drawing::Color::Red;
			this->Cancelproceedbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelproceedbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancelproceedbtn->Location = System::Drawing::Point(254, 171);
			this->Cancelproceedbtn->Name = L"Cancelproceedbtn";
			this->Cancelproceedbtn->Size = System::Drawing::Size(123, 33);
			this->Cancelproceedbtn->TabIndex = 18;
			this->Cancelproceedbtn->Text = L"Cancel";
			this->Cancelproceedbtn->UseVisualStyleBackColor = false;
			this->Cancelproceedbtn->Click += gcnew System::EventHandler(this, &Account::Cancelproceedbtn_Click);
			// 
			// Proceedproceedbtn
			// 
			this->Proceedproceedbtn->BackColor = System::Drawing::Color::Red;
			this->Proceedproceedbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Proceedproceedbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Proceedproceedbtn->Location = System::Drawing::Point(35, 171);
			this->Proceedproceedbtn->Name = L"Proceedproceedbtn";
			this->Proceedproceedbtn->Size = System::Drawing::Size(123, 33);
			this->Proceedproceedbtn->TabIndex = 17;
			this->Proceedproceedbtn->Text = L"Proceed";
			this->Proceedproceedbtn->UseVisualStyleBackColor = false;
			this->Proceedproceedbtn->Click += gcnew System::EventHandler(this, &Account::Proceedproceedbtn_Click);
			// 
			// Ammounttxt
			// 
			this->Ammounttxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ammounttxt->Location = System::Drawing::Point(280, 35);
			this->Ammounttxt->Name = L"Ammounttxt";
			this->Ammounttxt->Size = System::Drawing::Size(79, 30);
			this->Ammounttxt->TabIndex = 16;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Yellow;
			this->label14->Location = System::Drawing::Point(30, 35);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(147, 25);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Enter Ammount";
			// 
			// Cardpanel
			// 
			this->Cardpanel->BackColor = System::Drawing::Color::Black;
			this->Cardpanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cardpanel.BackgroundImage")));
			this->Cardpanel->Controls->Add(this->Amountlimit);
			this->Cardpanel->Controls->Add(this->Amountlimitlabel);
			this->Cardpanel->Controls->Add(this->CardOkBtn);
			this->Cardpanel->Controls->Add(this->validupto);
			this->Cardpanel->Controls->Add(this->validfrom);
			this->Cardpanel->Controls->Add(this->label16);
			this->Cardpanel->Controls->Add(this->accountholdername);
			this->Cardpanel->Controls->Add(this->label20);
			this->Cardpanel->Controls->Add(this->label19);
			this->Cardpanel->Controls->Add(this->cvv);
			this->Cardpanel->Controls->Add(this->cardnumber);
			this->Cardpanel->Location = System::Drawing::Point(223, 193);
			this->Cardpanel->Name = L"Cardpanel";
			this->Cardpanel->Size = System::Drawing::Size(451, 261);
			this->Cardpanel->TabIndex = 27;
			this->Cardpanel->Visible = false;
			// 
			// Amountlimit
			// 
			this->Amountlimit->AutoSize = true;
			this->Amountlimit->BackColor = System::Drawing::Color::Transparent;
			this->Amountlimit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Amountlimit->ForeColor = System::Drawing::Color::Cyan;
			this->Amountlimit->Location = System::Drawing::Point(151, 157);
			this->Amountlimit->Name = L"Amountlimit";
			this->Amountlimit->Size = System::Drawing::Size(31, 20);
			this->Amountlimit->TabIndex = 18;
			this->Amountlimit->Text = L"AL";
			this->Amountlimit->Visible = false;
			// 
			// Amountlimitlabel
			// 
			this->Amountlimitlabel->AutoSize = true;
			this->Amountlimitlabel->BackColor = System::Drawing::Color::Transparent;
			this->Amountlimitlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Amountlimitlabel->ForeColor = System::Drawing::Color::Navy;
			this->Amountlimitlabel->Location = System::Drawing::Point(30, 157);
			this->Amountlimitlabel->Name = L"Amountlimitlabel";
			this->Amountlimitlabel->Size = System::Drawing::Size(108, 20);
			this->Amountlimitlabel->TabIndex = 17;
			this->Amountlimitlabel->Text = L"Amount limit";
			this->Amountlimitlabel->Visible = false;
			// 
			// CardOkBtn
			// 
			this->CardOkBtn->BackColor = System::Drawing::Color::SeaGreen;
			this->CardOkBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CardOkBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->CardOkBtn->Location = System::Drawing::Point(202, 216);
			this->CardOkBtn->Name = L"CardOkBtn";
			this->CardOkBtn->Size = System::Drawing::Size(49, 41);
			this->CardOkBtn->TabIndex = 16;
			this->CardOkBtn->Text = L"OK";
			this->CardOkBtn->UseVisualStyleBackColor = false;
			this->CardOkBtn->Click += gcnew System::EventHandler(this, &Account::CardOkBtn_Click);
			// 
			// validupto
			// 
			this->validupto->AutoSize = true;
			this->validupto->BackColor = System::Drawing::Color::Transparent;
			this->validupto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->validupto->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->validupto->Location = System::Drawing::Point(340, 119);
			this->validupto->Name = L"validupto";
			this->validupto->Size = System::Drawing::Size(29, 20);
			this->validupto->TabIndex = 15;
			this->validupto->Text = L"ed";
			// 
			// validfrom
			// 
			this->validfrom->AutoSize = true;
			this->validfrom->BackColor = System::Drawing::Color::Transparent;
			this->validfrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->validfrom->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->validfrom->Location = System::Drawing::Point(126, 105);
			this->validfrom->Name = L"validfrom";
			this->validfrom->Size = System::Drawing::Size(28, 20);
			this->validfrom->TabIndex = 14;
			this->validfrom->Text = L"cd";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Cyan;
			this->label16->Location = System::Drawing::Point(4, 15);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(441, 31);
			this->label16->TabIndex = 13;
			this->label16->Text = L"PIGGY MINI BANK OF INDIA";
			// 
			// accountholdername
			// 
			this->accountholdername->AutoSize = true;
			this->accountholdername->BackColor = System::Drawing::Color::Transparent;
			this->accountholdername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountholdername->ForeColor = System::Drawing::Color::Navy;
			this->accountholdername->Location = System::Drawing::Point(18, 183);
			this->accountholdername->Name = L"accountholdername";
			this->accountholdername->Size = System::Drawing::Size(277, 31);
			this->accountholdername->TabIndex = 12;
			this->accountholdername->Text = L"AccountHoldername";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Navy;
			this->label20->Location = System::Drawing::Point(30, 105);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 20);
			this->label20->TabIndex = 11;
			this->label20->Text = L"ValidFrom";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Navy;
			this->label19->Location = System::Drawing::Point(246, 119);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(88, 20);
			this->label19->TabIndex = 10;
			this->label19->Text = L"ValidUpto";
			// 
			// cvv
			// 
			this->cvv->AutoSize = true;
			this->cvv->BackColor = System::Drawing::Color::Transparent;
			this->cvv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cvv->ForeColor = System::Drawing::Color::Navy;
			this->cvv->Location = System::Drawing::Point(359, 198);
			this->cvv->Name = L"cvv";
			this->cvv->Size = System::Drawing::Size(50, 29);
			this->cvv->TabIndex = 8;
			this->cvv->Text = L"cvv";
			// 
			// cardnumber
			// 
			this->cardnumber->AutoSize = true;
			this->cardnumber->BackColor = System::Drawing::Color::Transparent;
			this->cardnumber->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardnumber->ForeColor = System::Drawing::Color::Navy;
			this->cardnumber->Location = System::Drawing::Point(25, 64);
			this->cardnumber->Name = L"cardnumber";
			this->cardnumber->Size = System::Drawing::Size(156, 28);
			this->cardnumber->TabIndex = 6;
			this->cardnumber->Text = L"Cardnumber";
			// 
			// Account
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(936, 557);
			this->Controls->Add(this->Cardpanel);
			this->Controls->Add(this->Proceedpanel);
			this->Controls->Add(this->Addresstxt);
			this->Controls->Add(this->MICRCodetxt);
			this->Controls->Add(this->Occupationtxt);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->IFSCCodetxt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Branchaddresstxt);
			this->Controls->Add(this->Accountnotxt);
			this->Controls->Add(this->Accountholdertxt);
			this->Controls->Add(this->Accountbalancetxt);
			this->Controls->Add(this->Accountopentxt);
			this->Controls->Add(this->Customeridtxt);
			this->Controls->Add(this->Branchnametxt);
			this->Controls->Add(this->Cancelaccbtn);
			this->Controls->Add(this->Okaccbtn);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Account";
			this->Text = L"Account";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Account::Account_Load);
			this->Proceedpanel->ResumeLayout(false);
			this->Proceedpanel->PerformLayout();
			this->Cardpanel->ResumeLayout(false);
			this->Cardpanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ GenerateNumber(String^ TableName, String^ DBVariableName, int index)
		{
			String^ number;
			String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";
			MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
			String^ Query = "SELECT " + DBVariableName + " FROM " + TableName + " ORDER BY " + DBVariableName + " DESC";
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			MySqlDataReader^ reader;
			Connect->Open();
			reader = cmd->ExecuteReader();
			if (reader->Read())
			{
				int id = System::Convert::ToInt16(reader[index]->ToString()) + 1;
				number = id.ToString("0000");
			}
			else if (Convert::IsDBNull(reader))
			{
				number = "0001";
			}
			else
			{
				number = "0001";
			}
			Connect->Close();
			return number;
		}
	private: System::Void Account_Load(System::Object^ sender, System::EventArgs^ e) {
		bool Dataexist = false;

		if (FromAccount == true|| Key == "FromDebitCard" || Key == "FromCreditCard" || Key == "FromChequeBook"/*|| Key=="FromKyc"*/)
		{
			if (FromAccount==true)
			{ 
				Cancelaccbtn->Visible = false;
				Okaccbtn->Visible = true;
			}

			else if (Key == "FromDebitCard" || Key == "FromCreditCard" || Key == "FromChequeBook"/*|| Key == "FromKyc"*/ )
			{
				FromAccount = false;
				Okaccbtn->Text = "Proceed";
				Cancelaccbtn->Visible = true;

			}

			


			String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";

			MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
			String^ Query;
			Query = "select * from Banking.Account  where Accountno ='" + Data + "'";

			// Checking data into database.
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			MySqlDataReader^ reader;
			try
			{
				Connect->Open();
				reader = cmd->ExecuteReader();
				while (reader->Read())
				{

					Branchnametxt->Text = reader->GetString(0);
					Branchaddresstxt->Text = reader->GetString(1);
					Accountnotxt->Text = reader->GetString(2);
					Accountholdertxt->Text = reader->GetString(3);
					Accountbalancetxt->Text = reader->GetString(4);
					Accountopentxt->Text = reader->GetString(5);
					Customeridtxt->Text = reader->GetString(6);
					Occupationtxt->Text = reader->GetString(7);
					IFSCCodetxt->Text = reader->GetString(8);
					MICRCodetxt->Text = reader->GetString(9);
					Addresstxt->Text = reader->GetString(10);
					Branchnametxt->Enabled = false;
					Branchaddresstxt->Enabled = false;
					Accountnotxt->Enabled = false;
					Accountholdertxt->Enabled = false;
					Accountbalancetxt->Enabled = false;
					Accountopentxt->Enabled = false;
					Customeridtxt->Enabled = false;
					Occupationtxt->Enabled = false;
					IFSCCodetxt->Enabled = false;
					MICRCodetxt->Enabled = false;
					Addresstxt->Enabled = false;

					Dataexist = true;
					if (FromWithdraw == true||FromDeposit==true)
					{

						Okaccbtn->Text = "Proceed";
						Cancelaccbtn->Visible = true;
					}

				
					
					



				}
				Connect->Close();
				if (!Dataexist)
					MessageBox::Show("Data Not Found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
				ManagerMEnu->Show();

			}
		}




	}
	private: System::Void Cancelaccbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure want to cancel ?", "Warning", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			ManagerMEnu->Show();
			this->Close();

		}
	}
	private: System::Void Okaccbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (Key == "FromDebitCard" || Key == "FromCreditCard" || Key == "FromChequeBook" )
		{
			if (Key == "FromDebitCard")
			{
				// Setting Card Number

				String^ CardNumber = "2739 1000 0012 ";
				try
				{
					CardNumber += GenerateNumber("Banking.Debitcard", "CardNumber",0);
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					ManagerMEnu->Show();
					this->Close();
				}

				// Setting Cvv
				int Cvv = rand() % 1000;

				// Setting Valid From
				DateTime date = DateTime::Now;
				String^ CurrentDate = date.ToString("MM");
				CurrentDate += "/";
				CurrentDate += date.ToString("yy");


				// Setting Valid Upto

				String^ ExpiryDate = date.ToString("MM");
				ExpiryDate += "/";
				ExpiryDate += System::Convert::ToInt16(date.ToString("yy")) + 5;

				// Inserting data into database.
				String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";
				MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
				String^ Query;
				Query = "insert into Banking.Debitcard (AccountHolderName,CardNumber,Cvv,ValidFrom,ValidUpto,AccountNo) values ('" +
					Accountholdertxt->Text + "','" + CardNumber + "','" +
					Cvv + "','" + CurrentDate + "', '" +
					ExpiryDate + "', '" + Accountnotxt->Text + "')";

				// Inserting into database code...
				MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
				MySqlDataReader^ reader;

				try
				{
					Connect->Open();
					reader = cmd->ExecuteReader();
					Cardpanel->Visible = true;
					cardnumber->Text = CardNumber;
					validfrom->Text = CurrentDate;
					validupto->Text = ExpiryDate;;
					Amountlimitlabel->Visible = false;
					Amountlimit->Visible = false;
					accountholdername->Text = Accountholdertxt->Text;
					cvv->Text = Cvv.ToString();
					Cardpanel->Visible = true;
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					ManagerMEnu->Show();
					this->Close();
				}

			}

			else if (Key == "FromCreditCard")
			{

				// Setting Card Number

				String^ CardNumber = "6754 1000 0012 ";
				try
				{
					CardNumber += GenerateNumber("Banking.Creditcard", "CardNumber",1);
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					ManagerMEnu->Show();
					this->Close();
				}

				// Setting Cvv
				int Cvv = rand() % 1000;

				// Setting Valid From
				DateTime date = DateTime::Now;
				String^ CurrentDate = date.ToString("MM");
				CurrentDate += "/";
				CurrentDate += date.ToString("yy");

				// Setting Valid Upto
				String^ ExpiryDate = date.ToString("MM");
				ExpiryDate += "/";
				ExpiryDate += System::Convert::ToInt16(date.ToString("yy")) + 5;

				// Setting AmountLimit
				int AmountLimit = 25000;

				String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";
				MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
				String^ Query;
				Query = "insert into Banking.Creditcard (AccountHolderName,CardNumber,Cvv,ValidFrom,ValidUpto,AccountNo,AmountLimit) values ('" +
					Accountholdertxt->Text + "','" + CardNumber + "','" +
					Cvv + "','" + CurrentDate + "', '" +
					ExpiryDate + "', '" + Accountnotxt->Text + "','" + AmountLimit + "',)";

				// Inserting into database code...
				MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
				MySqlDataReader^ reader;

				try
				{
					Connect->Open();
					reader = cmd->ExecuteReader();
					Cardpanel->Visible = true;
					cardnumber->Text = CardNumber;
					validfrom->Text = CurrentDate;
					validupto->Text = CurrentDate;
					Amountlimitlabel->Visible = true;
					Amountlimit->Visible = true;
					Amountlimit->Text = AmountLimit.ToString();
					accountholdername->Text = Accountholdertxt->Text;
					cvv->Text = Cvv.ToString();
					Cardpanel->Visible = true;
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					ManagerMEnu->Show();
					this->Close();
				}

			}

			/*	else if (Key == "FromChequeBook")
				{

					// Setting Cheque Number
					int ChequeNumber[20];
					for (int i = 1; i <= 20; i++)
					{
						ChequeNumber = GenerateNumber("Banking.Chequebook", "Chequeno")->ToInt16();
					}

					String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";
					MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
					String^ Query;
					Query = "insert into Banking.Chequebook (AccountHolderName,CardNumber,Cvv,ValidFrom,ValidUpto,AccountNo,AmountLimit) values ('" +
						Accountholdertxt->Text + "','" + CardNumber + "','" +
						Cvv + "','" + CurrentDate + "', '" +
						CurrentDate + "', '" + Accountnotxt->Text + "','" + AmountLimit + "',)";

					// Inserting into database code...
					MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
					MySqlDataReader^ reader;

					try
					{
						Connect->Open();
						reader = cmd->ExecuteReader();
						MessageBox::Show("Data saved successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
						ManagerMEnu->Show();
						this->Close();
					}
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						ManagerMEnu->Show();
						this->Close();
					}

				}*/

			else if (FromCardWithdraw)
	         {
	            FromCardWithdraw = true;




	         }

			


			else if (Okaccbtn->Text == "Proceed")
			{
				Proceedpanel->Visible = true;
				Okaccbtn->Enabled = false;
				Cancelaccbtn->Enabled = false;
			}

			else

			{
				ManagerMEnu->Show();
				this->Close();
			}


		}
	}
	private: System::Void Cancelproceedbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure want to cancel ?", "Warning", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			ManagerMEnu->Show();
			this->Close();

		}
	}
	private: System::Void Proceedproceedbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int Balance = System::Convert::ToInt16(Accountbalancetxt->Text);
		int Amount = System::Convert::ToInt16(Ammounttxt->Text);
		if (FromWithdraw) {

			if (Amount <= Balance)
			{
				String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";

				MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
				String^ Query;
				Query = "update Banking.Account set Accountbalance ='" + System::Convert::ToString(Balance - Amount) + "' WHERE Accountno ='" + Accountnotxt->Text + "'";
				MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
				MySqlDataReader^ reader;


				try
				{
					Connect->Open();
					reader = cmd->ExecuteReader();
					MessageBox::Show("Transaction Successfull", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
                    Connect->Close();

					// Setting Transactionid
					String^ Transactionid = "8765";
					try
					{
						Transactionid += GenerateNumber("Banking.Transaction", "Transactionid",0);
					}
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						ManagerMEnu->Show();
						this->Close();
					}

					//Setting Date and Time
					String^ dateandTime = label1->Text;

					// Setting account number
					String^ Accountno = Accountnotxt->Text;

					// Setting amount 
					String^ Amount = Ammounttxt->Text;

					// Setting Transaction Type
					String^ Transactiontype = "Withdraw";

					// Setting Description
					String^ Description = DescriptionTxt->Text;

					// Setting Remaining Balance
					String^ Balance = Accountbalancetxt->Text;

					// Connecting to database.
					String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";

					MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
					String^ Query;
					Query = "insert into Banking.Transaction (Transactionid,DateandTime,Accountno,Amount,TransactionType,Description,Balance) values ('" +
						Transactionid+ "','" + dateandTime + "','" +
						 Accountno+ "','" + Amount+ "', '" +
						Transactiontype+ "', '" + Description + "', '" +
						Balance + "')";

					// Inserting into database code...
					MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
					MySqlDataReader^ reader;

					try
					{
						Connect->Open();
						reader = cmd->ExecuteReader();
						MessageBox::Show("Data saved successfully", "Success" , MessageBoxButtons::OK, MessageBoxIcon::Information);
						ManagerMEnu->Show();
						this->Close();
					}
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						ManagerMEnu->Show();
						this->Close();
					
					}
					

				}
				
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					ManagerMEnu->Show();
					this->Close();
				}


			}
			else
			{
				MessageBox::Show("Insufficient Balance", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				ManagerMEnu->Show();
				this->Close();

			}
		}
		else if (FromDeposit)
		{



			String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";

			MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
			String^ Query;
			Query = "update Banking.Account set Accountbalance ='" + System::Convert::ToString(Balance + Amount) + "' WHERE Accountno ='" + Accountnotxt->Text + "'";
			
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			MySqlDataReader^ reader;


			try
			{
				Connect->Open();
				reader = cmd->ExecuteReader();
				MessageBox::Show("Deposition Successfull", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Connect->Close();
				// Setting Transactionid
				String^ Transactionid = "8765";
				try
				{
					Transactionid += GenerateNumber("Banking.Transaction", "Transactionid",0);
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					ManagerMEnu->Show();
					this->Close();
				}

				//Setting Date and Time
				String^ dateandTime = label8->Text;

				// Setting account number
				String^ accountno = Accountnotxt->Text;
				

				// Setting amount 
				String^ Amount = Ammounttxt->Text;

				// Setting Transaction Type
				String^ Transactiontype = "Deposit";

				// Setting Description
				String^ Description = DescriptionTxt->Text;

				// Setting Remaining Balance
				String^ Balance = Accountbalancetxt->Text;

				// Connecting to database.
				String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";

				MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
				String^ Query;
				Query = "insert into Banking.Transaction (Transactionid,DateandTime,Accountno,Amount,TransactionType,Description,Balance) values ('" +
					Transactionid + "','" + dateandTime + "','" +
					accountno + "','" + Amount + "', '" +
					Transactiontype + "', '" + Description + "', '" +
					Balance + "')";

				// Inserting into database code...
				MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
				MySqlDataReader^ reader;

				try
				{
					Connect->Open();
					reader = cmd->ExecuteReader();
					MessageBox::Show("Data saved successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					ManagerMEnu->Show();
					this->Close();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					ManagerMEnu->Show();
					this->Close();

				}
				



				ManagerMEnu->Show();
				this->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				ManagerMEnu->Show();
				this->Close();
			}
		}
	}
private: System::Void CardOkBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	ManagerMEnu->Show();
	this->Close();
}
};
}
