#include"ManagerMenu1.h"

namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mainmenu
	/// </summary>
	public ref class Mainmenu : public System::Windows::Forms::Form
	{
	public:
		Mainmenu(void)
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
		~Mainmenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Loginbtn;
	protected:

	private: System::Windows::Forms::Button^ Registerbtn;
	protected:

	private: System::Windows::Forms::Button^ Exitbtn;
	private: System::Windows::Forms::Button^ Aboutbtn;
	private: System::Windows::Forms::Panel^ Aboutpanel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Aboutokbtn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ Menupanel;
	private: System::Windows::Forms::Panel^ Loginpanel;
	private: System::Windows::Forms::Button^ Customerloginbtn;
	private: System::Windows::Forms::Button^ Employeeloginbtn;
	private: System::Windows::Forms::Button^ Managerloginbtn;
	private: System::Windows::Forms::Panel^ Commonloginpanel;
	private: System::Windows::Forms::Button^ Cancelbtn;
	private: System::Windows::Forms::Button^ Signinbtn;
	private: System::Windows::Forms::TextBox^ passwordtextbox;
	private: System::Windows::Forms::TextBox^ usernametextbox;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ Loginlabel;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Mainmenu::typeid));
			this->Loginbtn = (gcnew System::Windows::Forms::Button());
			this->Registerbtn = (gcnew System::Windows::Forms::Button());
			this->Exitbtn = (gcnew System::Windows::Forms::Button());
			this->Aboutbtn = (gcnew System::Windows::Forms::Button());
			this->Aboutpanel = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Aboutokbtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Menupanel = (gcnew System::Windows::Forms::Panel());
			this->Loginpanel = (gcnew System::Windows::Forms::Panel());
			this->Customerloginbtn = (gcnew System::Windows::Forms::Button());
			this->Employeeloginbtn = (gcnew System::Windows::Forms::Button());
			this->Managerloginbtn = (gcnew System::Windows::Forms::Button());
			this->Commonloginpanel = (gcnew System::Windows::Forms::Panel());
			this->Loginlabel = (gcnew System::Windows::Forms::Label());
			this->Cancelbtn = (gcnew System::Windows::Forms::Button());
			this->Signinbtn = (gcnew System::Windows::Forms::Button());
			this->passwordtextbox = (gcnew System::Windows::Forms::TextBox());
			this->usernametextbox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Aboutpanel->SuspendLayout();
			this->Menupanel->SuspendLayout();
			this->Loginpanel->SuspendLayout();
			this->Commonloginpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Loginbtn
			// 
			this->Loginbtn->BackColor = System::Drawing::Color::Red;
			this->Loginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Loginbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Loginbtn->Location = System::Drawing::Point(22, 3);
			this->Loginbtn->Name = L"Loginbtn";
			this->Loginbtn->Size = System::Drawing::Size(123, 53);
			this->Loginbtn->TabIndex = 0;
			this->Loginbtn->Text = L"LOGIN";
			this->Loginbtn->UseVisualStyleBackColor = false;
			this->Loginbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Loginbtn_Click);
			this->Loginbtn->MouseHover += gcnew System::EventHandler(this, &Mainmenu::Loginbtn_MouseHover);
			// 
			// Registerbtn
			// 
			this->Registerbtn->BackColor = System::Drawing::Color::Red;
			this->Registerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Registerbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Registerbtn->Location = System::Drawing::Point(252, 3);
			this->Registerbtn->Name = L"Registerbtn";
			this->Registerbtn->Size = System::Drawing::Size(139, 53);
			this->Registerbtn->TabIndex = 1;
			this->Registerbtn->Text = L"REGISTER";
			this->Registerbtn->UseVisualStyleBackColor = false;
			this->Registerbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Registerbtn_Click);
			// 
			// Exitbtn
			// 
			this->Exitbtn->BackColor = System::Drawing::Color::Red;
			this->Exitbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exitbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Exitbtn->Location = System::Drawing::Point(818, 3);
			this->Exitbtn->Name = L"Exitbtn";
			this->Exitbtn->Size = System::Drawing::Size(137, 53);
			this->Exitbtn->TabIndex = 2;
			this->Exitbtn->Text = L"EXIT";
			this->Exitbtn->UseVisualStyleBackColor = false;
			this->Exitbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Exitbtn_Click);
			// 
			// Aboutbtn
			// 
			this->Aboutbtn->BackColor = System::Drawing::Color::Red;
			this->Aboutbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aboutbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Aboutbtn->Location = System::Drawing::Point(529, 3);
			this->Aboutbtn->Name = L"Aboutbtn";
			this->Aboutbtn->Size = System::Drawing::Size(139, 53);
			this->Aboutbtn->TabIndex = 3;
			this->Aboutbtn->Text = L"ABOUT";
			this->Aboutbtn->UseVisualStyleBackColor = false;
			this->Aboutbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Aboutbtn_Click);
			// 
			// Aboutpanel
			// 
			this->Aboutpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Aboutpanel->Controls->Add(this->label6);
			this->Aboutpanel->Controls->Add(this->label5);
			this->Aboutpanel->Controls->Add(this->label4);
			this->Aboutpanel->Controls->Add(this->label3);
			this->Aboutpanel->Controls->Add(this->Aboutokbtn);
			this->Aboutpanel->Controls->Add(this->label2);
			this->Aboutpanel->Controls->Add(this->label1);
			this->Aboutpanel->Location = System::Drawing::Point(490, 143);
			this->Aboutpanel->Name = L"Aboutpanel";
			this->Aboutpanel->Size = System::Drawing::Size(471, 334);
			this->Aboutpanel->TabIndex = 4;
			this->Aboutpanel->Visible = false;
			this->Aboutpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mainmenu::Aboutpanel_Paint);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Green;
			this->label6->Location = System::Drawing::Point(241, 169);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(166, 29);
			this->label6->TabIndex = 6;
			this->label6->Text = L"22 JUNE 2021";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Green;
			this->label5->Location = System::Drawing::Point(60, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 29);
			this->label5->TabIndex = 5;
			this->label5->Text = L"End Date:-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(60, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(165, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Starting Date:-";
			this->label4->Click += gcnew System::EventHandler(this, &Mainmenu::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(223, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Shalini and Amzad";
			// 
			// Aboutokbtn
			// 
			this->Aboutokbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aboutokbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Aboutokbtn->Location = System::Drawing::Point(187, 272);
			this->Aboutokbtn->Name = L"Aboutokbtn";
			this->Aboutokbtn->Size = System::Drawing::Size(75, 40);
			this->Aboutokbtn->TabIndex = 2;
			this->Aboutokbtn->Text = L"OK";
			this->Aboutokbtn->UseVisualStyleBackColor = true;
			this->Aboutokbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Aboutokbtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::ForestGreen;
			this->label2->Location = System::Drawing::Point(60, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Created by:-";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(24, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(431, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PIGGY MINI BANK OF INDIA";
			// 
			// Menupanel
			// 
			this->Menupanel->BackColor = System::Drawing::Color::Transparent;
			this->Menupanel->Controls->Add(this->Loginbtn);
			this->Menupanel->Controls->Add(this->Registerbtn);
			this->Menupanel->Controls->Add(this->Exitbtn);
			this->Menupanel->Controls->Add(this->Aboutbtn);
			this->Menupanel->Location = System::Drawing::Point(39, 59);
			this->Menupanel->Name = L"Menupanel";
			this->Menupanel->Size = System::Drawing::Size(1024, 57);
			this->Menupanel->TabIndex = 5;
			// 
			// Loginpanel
			// 
			this->Loginpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Loginpanel->Controls->Add(this->Customerloginbtn);
			this->Loginpanel->Controls->Add(this->Employeeloginbtn);
			this->Loginpanel->Controls->Add(this->Managerloginbtn);
			this->Loginpanel->Location = System::Drawing::Point(39, 113);
			this->Loginpanel->Name = L"Loginpanel";
			this->Loginpanel->Size = System::Drawing::Size(174, 130);
			this->Loginpanel->TabIndex = 6;
			this->Loginpanel->Visible = false;
			// 
			// Customerloginbtn
			// 
			this->Customerloginbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Customerloginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customerloginbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Customerloginbtn->Location = System::Drawing::Point(3, 84);
			this->Customerloginbtn->Name = L"Customerloginbtn";
			this->Customerloginbtn->Size = System::Drawing::Size(177, 46);
			this->Customerloginbtn->TabIndex = 4;
			this->Customerloginbtn->Text = L"CUSTOMER LOGIN";
			this->Customerloginbtn->UseVisualStyleBackColor = false;
			this->Customerloginbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Customerloginbtn_Click);
			// 
			// Employeeloginbtn
			// 
			this->Employeeloginbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Employeeloginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Employeeloginbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Employeeloginbtn->Location = System::Drawing::Point(3, 42);
			this->Employeeloginbtn->Name = L"Employeeloginbtn";
			this->Employeeloginbtn->Size = System::Drawing::Size(177, 46);
			this->Employeeloginbtn->TabIndex = 3;
			this->Employeeloginbtn->Text = L"EMPLOYEE LOGIN";
			this->Employeeloginbtn->UseVisualStyleBackColor = false;
			this->Employeeloginbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Employeeloginbtn_Click);
			// 
			// Managerloginbtn
			// 
			this->Managerloginbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Managerloginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Managerloginbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Managerloginbtn->Location = System::Drawing::Point(3, 0);
			this->Managerloginbtn->Name = L"Managerloginbtn";
			this->Managerloginbtn->Size = System::Drawing::Size(177, 46);
			this->Managerloginbtn->TabIndex = 2;
			this->Managerloginbtn->Text = L"MANAGER LOGIN";
			this->Managerloginbtn->UseVisualStyleBackColor = false;
			this->Managerloginbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Managerloginbtn_Click);
			// 
			// Commonloginpanel
			// 
			this->Commonloginpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Commonloginpanel->Controls->Add(this->Loginlabel);
			this->Commonloginpanel->Controls->Add(this->Cancelbtn);
			this->Commonloginpanel->Controls->Add(this->Signinbtn);
			this->Commonloginpanel->Controls->Add(this->passwordtextbox);
			this->Commonloginpanel->Controls->Add(this->usernametextbox);
			this->Commonloginpanel->Controls->Add(this->label8);
			this->Commonloginpanel->Controls->Add(this->label7);
			this->Commonloginpanel->Location = System::Drawing::Point(225, 122);
			this->Commonloginpanel->Name = L"Commonloginpanel";
			this->Commonloginpanel->Size = System::Drawing::Size(283, 263);
			this->Commonloginpanel->TabIndex = 7;
			this->Commonloginpanel->Visible = false;
			this->Commonloginpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mainmenu::Commonloginpanel_Paint);
			// 
			// Loginlabel
			// 
			this->Loginlabel->AutoSize = true;
			this->Loginlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Loginlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Loginlabel->Location = System::Drawing::Point(13, 6);
			this->Loginlabel->Name = L"Loginlabel";
			this->Loginlabel->Size = System::Drawing::Size(243, 31);
			this->Loginlabel->TabIndex = 6;
			this->Loginlabel->Text = L"MANAGER LOGIN";
			// 
			// Cancelbtn
			// 
			this->Cancelbtn->BackColor = System::Drawing::Color::Red;
			this->Cancelbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Cancelbtn->Location = System::Drawing::Point(154, 190);
			this->Cancelbtn->Name = L"Cancelbtn";
			this->Cancelbtn->Size = System::Drawing::Size(102, 32);
			this->Cancelbtn->TabIndex = 5;
			this->Cancelbtn->Text = L"Cancel";
			this->Cancelbtn->UseVisualStyleBackColor = false;
			this->Cancelbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Cancelbtn_Click);
			// 
			// Signinbtn
			// 
			this->Signinbtn->BackColor = System::Drawing::Color::Red;
			this->Signinbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Signinbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Signinbtn->Location = System::Drawing::Point(18, 191);
			this->Signinbtn->Name = L"Signinbtn";
			this->Signinbtn->Size = System::Drawing::Size(102, 32);
			this->Signinbtn->TabIndex = 4;
			this->Signinbtn->Text = L"Signin";
			this->Signinbtn->UseVisualStyleBackColor = false;
			this->Signinbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Signinbtn_Click);
			// 
			// passwordtextbox
			// 
			this->passwordtextbox->Location = System::Drawing::Point(144, 115);
			this->passwordtextbox->Name = L"passwordtextbox";
			this->passwordtextbox->Size = System::Drawing::Size(100, 20);
			this->passwordtextbox->TabIndex = 3;
			this->passwordtextbox->TextChanged += gcnew System::EventHandler(this, &Mainmenu::passwordtextbox_TextChanged);
			// 
			// usernametextbox
			// 
			this->usernametextbox->Location = System::Drawing::Point(144, 70);
			this->usernametextbox->Name = L"usernametextbox";
			this->usernametextbox->Size = System::Drawing::Size(100, 20);
			this->usernametextbox->TabIndex = 2;
			this->usernametextbox->TextChanged += gcnew System::EventHandler(this, &Mainmenu::usernametextbox_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(17, 115);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"password";
			this->label8->Click += gcnew System::EventHandler(this, &Mainmenu::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(14, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"username";
			// 
			// Mainmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1087, 528);
			this->Controls->Add(this->Commonloginpanel);
			this->Controls->Add(this->Loginpanel);
			this->Controls->Add(this->Menupanel);
			this->Controls->Add(this->Aboutpanel);
			this->DoubleBuffered = true;
			this->Name = L"Mainmenu";
			this->Text = L"Mainmenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Mainmenu::Mainmenu_Load);
			this->MouseHover += gcnew System::EventHandler(this, &Mainmenu::Mainmenu_MouseHover);
			this->Aboutpanel->ResumeLayout(false);
			this->Aboutpanel->PerformLayout();
			this->Menupanel->ResumeLayout(false);
			this->Loginpanel->ResumeLayout(false);
			this->Commonloginpanel->ResumeLayout(false);
			this->Commonloginpanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Aboutbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Aboutpanel->Visible = true;
		Menupanel->Visible = false;
	}
private: System::Void Mainmenu_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Registerbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Exitbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Aboutpanel->Visible = false;
	if (MessageBox::Show("Are you sure want to exit ?", "Warning", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		Application::Exit();
	
		
}
private: System::Void Loginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Aboutpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Aboutokbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Aboutpanel->Visible = false;
	Menupanel->Visible = true;
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Loginbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Loginpanel->Visible = true;
}
private: System::Void Mainmenu_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	Loginpanel->Visible = false;
}
private: System::Void Managerloginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Commonloginpanel->Visible = true;
	Menupanel->Visible = false;
	Loginpanel->Visible = false;
	Loginlabel->Text = "MANAGER LOGIN";
}
private: System::Void Cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Commonloginpanel->Visible = false;
	Menupanel->Visible = true;
}
private: System::Void Signinbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usernametextbox->Text == "Abhishek")
	{
		if (passwordtextbox->Text == "Shalini")
		{
			MessageBox::Show("signin successful", "sucess", MessageBoxButtons::OK, MessageBoxIcon::Information);
			ManagerMenu^Mmenu = gcnew ManagerMenu;
			Mmenu->Show();
			this->Close();


		}
		else
		{
			MessageBox::Show("wrong password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
	}
	    else
	    {

	    MessageBox::Show("wrong ussrname", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	
}
private: System::Void usernametextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Commonloginpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void passwordtextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Employeeloginbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Commonloginpanel->Visible = true;
	Menupanel->Visible = false;
	Loginpanel->Visible = false;
	Loginlabel->Text = "EMPLOYEE LOGIN";
}
private: System::Void Customerloginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Commonloginpanel->Visible = true;
	Menupanel->Visible = false;
	Loginpanel->Visible = false;
	Loginlabel->Text = "CUSTOMER  LOGIN";
}
};
}
