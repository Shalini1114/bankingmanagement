#pragma once
#include"ManagerMenu1.h"
#include"Employeemenu.h"
#include"Customermenu.h"

namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;


	

	/// <summary>
	/// Summary for Mainmenu
	/// </summary>
	public ref class Mainmenu : public System::Windows::Forms::Form
	{
	public:
		SoundPlayer^ ClickSound = gcnew SoundPlayer("Click.wav");
		SoundPlayer^ WarningSound = gcnew SoundPlayer("Warning.wav");
		String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";
		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query, ^Key;
		

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


	private: System::Windows::Forms::Label^ Loginlabel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ ErrorPanel;
	private: System::Windows::Forms::Label^ ErrorLabel;
	private: System::Windows::Forms::Button^ ErrorCancelBtn;









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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Commonloginpanel = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Loginlabel = (gcnew System::Windows::Forms::Label());
			this->Cancelbtn = (gcnew System::Windows::Forms::Button());
			this->Signinbtn = (gcnew System::Windows::Forms::Button());
			this->passwordtextbox = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->usernametextbox = (gcnew System::Windows::Forms::TextBox());
			this->ErrorPanel = (gcnew System::Windows::Forms::Panel());
			this->ErrorCancelBtn = (gcnew System::Windows::Forms::Button());
			this->ErrorLabel = (gcnew System::Windows::Forms::Label());
			this->Aboutpanel->SuspendLayout();
			this->Menupanel->SuspendLayout();
			this->Loginpanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->Commonloginpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->ErrorPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Loginbtn
			// 
			this->Loginbtn->BackColor = System::Drawing::Color::SteelBlue;
			this->Loginbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Loginbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Loginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Loginbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Loginbtn->Location = System::Drawing::Point(0, 52);
			this->Loginbtn->Name = L"Loginbtn";
			this->Loginbtn->Size = System::Drawing::Size(226, 51);
			this->Loginbtn->TabIndex = 0;
			this->Loginbtn->Text = L"LOGIN";
			this->Loginbtn->UseVisualStyleBackColor = false;
			this->Loginbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Loginbtn_Click);
			this->Loginbtn->MouseHover += gcnew System::EventHandler(this, &Mainmenu::Loginbtn_MouseHover);
			// 
			// Registerbtn
			// 
			this->Registerbtn->BackColor = System::Drawing::Color::SteelBlue;
			this->Registerbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Registerbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Registerbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Registerbtn->Location = System::Drawing::Point(0, 246);
			this->Registerbtn->Name = L"Registerbtn";
			this->Registerbtn->Size = System::Drawing::Size(226, 53);
			this->Registerbtn->TabIndex = 1;
			this->Registerbtn->Text = L"REGISTER";
			this->Registerbtn->UseVisualStyleBackColor = false;
			this->Registerbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Registerbtn_Click);
			// 
			// Exitbtn
			// 
			this->Exitbtn->BackColor = System::Drawing::Color::SteelBlue;
			this->Exitbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Exitbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exitbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Exitbtn->Location = System::Drawing::Point(0, 352);
			this->Exitbtn->Name = L"Exitbtn";
			this->Exitbtn->Size = System::Drawing::Size(226, 53);
			this->Exitbtn->TabIndex = 2;
			this->Exitbtn->Text = L"EXIT";
			this->Exitbtn->UseVisualStyleBackColor = false;
			this->Exitbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Exitbtn_Click);
			// 
			// Aboutbtn
			// 
			this->Aboutbtn->BackColor = System::Drawing::Color::SteelBlue;
			this->Aboutbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Aboutbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aboutbtn->ForeColor = System::Drawing::Color::DarkBlue;
			this->Aboutbtn->Location = System::Drawing::Point(0, 299);
			this->Aboutbtn->Name = L"Aboutbtn";
			this->Aboutbtn->Size = System::Drawing::Size(226, 53);
			this->Aboutbtn->TabIndex = 3;
			this->Aboutbtn->Text = L"ABOUT";
			this->Aboutbtn->UseVisualStyleBackColor = false;
			this->Aboutbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Aboutbtn_Click);
			// 
			// Aboutpanel
			// 
			this->Aboutpanel->AutoSize = true;
			this->Aboutpanel->BackColor = System::Drawing::Color::Cyan;
			this->Aboutpanel->Controls->Add(this->label6);
			this->Aboutpanel->Controls->Add(this->label5);
			this->Aboutpanel->Controls->Add(this->label4);
			this->Aboutpanel->Controls->Add(this->label3);
			this->Aboutpanel->Controls->Add(this->Aboutokbtn);
			this->Aboutpanel->Controls->Add(this->label2);
			this->Aboutpanel->Controls->Add(this->label1);
			this->Aboutpanel->Location = System::Drawing::Point(419, 37);
			this->Aboutpanel->Name = L"Aboutpanel";
			this->Aboutpanel->Size = System::Drawing::Size(471, 334);
			this->Aboutpanel->TabIndex = 4;
			this->Aboutpanel->Visible = false;
			this->Aboutpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mainmenu::Aboutpanel_Paint);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 20.25F));
			this->label6->ForeColor = System::Drawing::Color::Green;
			this->label6->Location = System::Drawing::Point(241, 169);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 30);
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
			this->label3->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(223, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(236, 30);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Shalini and Amzad";
			// 
			// Aboutokbtn
			// 
			this->Aboutokbtn->BackColor = System::Drawing::Color::Gray;
			this->Aboutokbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aboutokbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Aboutokbtn->Location = System::Drawing::Point(187, 272);
			this->Aboutokbtn->Name = L"Aboutokbtn";
			this->Aboutokbtn->Size = System::Drawing::Size(49, 43);
			this->Aboutokbtn->TabIndex = 2;
			this->Aboutokbtn->Text = L"X";
			this->Aboutokbtn->UseVisualStyleBackColor = false;
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 24, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(24, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(422, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PIGGY MINI BANK OF INDIA";
			// 
			// Menupanel
			// 
			this->Menupanel->AutoScroll = true;
			this->Menupanel->BackColor = System::Drawing::Color::DarkSlateGray;
			this->Menupanel->Controls->Add(this->Exitbtn);
			this->Menupanel->Controls->Add(this->Aboutbtn);
			this->Menupanel->Controls->Add(this->Registerbtn);
			this->Menupanel->Controls->Add(this->Loginpanel);
			this->Menupanel->Controls->Add(this->Loginbtn);
			this->Menupanel->Controls->Add(this->panel1);
			this->Menupanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->Menupanel->Location = System::Drawing::Point(0, 0);
			this->Menupanel->Name = L"Menupanel";
			this->Menupanel->Size = System::Drawing::Size(226, 545);
			this->Menupanel->TabIndex = 5;
			// 
			// Loginpanel
			// 
			this->Loginpanel->BackColor = System::Drawing::Color::DimGray;
			this->Loginpanel->Controls->Add(this->Customerloginbtn);
			this->Loginpanel->Controls->Add(this->Employeeloginbtn);
			this->Loginpanel->Controls->Add(this->Managerloginbtn);
			this->Loginpanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Loginpanel->Location = System::Drawing::Point(0, 103);
			this->Loginpanel->Name = L"Loginpanel";
			this->Loginpanel->Size = System::Drawing::Size(226, 143);
			this->Loginpanel->TabIndex = 6;
			this->Loginpanel->Visible = false;
			// 
			// Customerloginbtn
			// 
			this->Customerloginbtn->BackColor = System::Drawing::Color::LightGreen;
			this->Customerloginbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Customerloginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customerloginbtn->ForeColor = System::Drawing::Color::Purple;
			this->Customerloginbtn->Location = System::Drawing::Point(0, 92);
			this->Customerloginbtn->Name = L"Customerloginbtn";
			this->Customerloginbtn->Size = System::Drawing::Size(226, 46);
			this->Customerloginbtn->TabIndex = 4;
			this->Customerloginbtn->Text = L"CUSTOMER LOGIN";
			this->Customerloginbtn->UseVisualStyleBackColor = false;
			this->Customerloginbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Customerloginbtn_Click);
			// 
			// Employeeloginbtn
			// 
			this->Employeeloginbtn->BackColor = System::Drawing::Color::LightGreen;
			this->Employeeloginbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Employeeloginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Employeeloginbtn->ForeColor = System::Drawing::Color::Purple;
			this->Employeeloginbtn->Location = System::Drawing::Point(0, 46);
			this->Employeeloginbtn->Name = L"Employeeloginbtn";
			this->Employeeloginbtn->Size = System::Drawing::Size(226, 46);
			this->Employeeloginbtn->TabIndex = 3;
			this->Employeeloginbtn->Text = L"EMPLOYEE LOGIN";
			this->Employeeloginbtn->UseVisualStyleBackColor = false;
			this->Employeeloginbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Employeeloginbtn_Click);
			// 
			// Managerloginbtn
			// 
			this->Managerloginbtn->BackColor = System::Drawing::Color::LightGreen;
			this->Managerloginbtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->Managerloginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Managerloginbtn->ForeColor = System::Drawing::Color::Purple;
			this->Managerloginbtn->Location = System::Drawing::Point(0, 0);
			this->Managerloginbtn->Name = L"Managerloginbtn";
			this->Managerloginbtn->Size = System::Drawing::Size(226, 46);
			this->Managerloginbtn->TabIndex = 2;
			this->Managerloginbtn->Text = L"MANAGER LOGIN";
			this->Managerloginbtn->UseVisualStyleBackColor = false;
			this->Managerloginbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Managerloginbtn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DimGray;
			this->panel1->Controls->Add(this->label9);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(226, 52);
			this->panel1->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label9->Location = System::Drawing::Point(72, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 25);
			this->label9->TabIndex = 6;
			this->label9->Text = L"MENU";
			// 
			// Commonloginpanel
			// 
			this->Commonloginpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Commonloginpanel->Controls->Add(this->panel3);
			this->Commonloginpanel->Controls->Add(this->panel2);
			this->Commonloginpanel->Controls->Add(this->pictureBox3);
			this->Commonloginpanel->Controls->Add(this->pictureBox4);
			this->Commonloginpanel->Controls->Add(this->pictureBox2);
			this->Commonloginpanel->Controls->Add(this->pictureBox1);
			this->Commonloginpanel->Controls->Add(this->Loginlabel);
			this->Commonloginpanel->Controls->Add(this->Cancelbtn);
			this->Commonloginpanel->Controls->Add(this->Signinbtn);
			this->Commonloginpanel->Controls->Add(this->passwordtextbox);
			this->Commonloginpanel->Controls->Add(this->label10);
			this->Commonloginpanel->Controls->Add(this->usernametextbox);
			this->Commonloginpanel->Location = System::Drawing::Point(388, 92);
			this->Commonloginpanel->Name = L"Commonloginpanel";
			this->Commonloginpanel->Size = System::Drawing::Size(320, 380);
			this->Commonloginpanel->TabIndex = 7;
			this->Commonloginpanel->Visible = false;
			this->Commonloginpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mainmenu::Commonloginpanel_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->panel3->Location = System::Drawing::Point(31, 255);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(236, 1);
			this->panel3->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->panel2->Location = System::Drawing::Point(31, 190);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(236, 1);
			this->panel2->TabIndex = 9;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(28, 225);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(25, 25);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(271, 224);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(25, 25);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Mainmenu::pictureBox4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(28, 160);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(99, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Loginlabel
			// 
			this->Loginlabel->AutoSize = true;
			this->Loginlabel->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Loginlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->Loginlabel->Location = System::Drawing::Point(27, 88);
			this->Loginlabel->Name = L"Loginlabel";
			this->Loginlabel->Size = System::Drawing::Size(258, 36);
			this->Loginlabel->TabIndex = 6;
			this->Loginlabel->Text = L"MANAGER LOGIN";
			// 
			// Cancelbtn
			// 
			this->Cancelbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Cancelbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->Cancelbtn->Location = System::Drawing::Point(275, 2);
			this->Cancelbtn->Name = L"Cancelbtn";
			this->Cancelbtn->Size = System::Drawing::Size(30, 32);
			this->Cancelbtn->TabIndex = 5;
			this->Cancelbtn->Text = L"X";
			this->Cancelbtn->UseVisualStyleBackColor = false;
			this->Cancelbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Cancelbtn_Click);
			// 
			// Signinbtn
			// 
			this->Signinbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->Signinbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Signinbtn->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Signinbtn->ForeColor = System::Drawing::Color::White;
			this->Signinbtn->Location = System::Drawing::Point(28, 307);
			this->Signinbtn->Name = L"Signinbtn";
			this->Signinbtn->Size = System::Drawing::Size(239, 35);
			this->Signinbtn->TabIndex = 4;
			this->Signinbtn->Text = L"Login";
			this->Signinbtn->UseVisualStyleBackColor = false;
			this->Signinbtn->Click += gcnew System::EventHandler(this, &Mainmenu::Signinbtn_Click);
			// 
			// passwordtextbox
			// 
			this->passwordtextbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->passwordtextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordtextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordtextbox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->passwordtextbox->Location = System::Drawing::Point(59, 229);
			this->passwordtextbox->Multiline = true;
			this->passwordtextbox->Name = L"passwordtextbox";
			this->passwordtextbox->PasswordChar = '*';
			this->passwordtextbox->Size = System::Drawing::Size(204, 24);
			this->passwordtextbox->TabIndex = 3;
			this->passwordtextbox->TextChanged += gcnew System::EventHandler(this, &Mainmenu::passwordtextbox_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->label10->Location = System::Drawing::Point(179, 284);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 16);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Clear Field";
			this->label10->Click += gcnew System::EventHandler(this, &Mainmenu::label10_Click);
			// 
			// usernametextbox
			// 
			this->usernametextbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->usernametextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernametextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernametextbox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->usernametextbox->Location = System::Drawing::Point(59, 163);
			this->usernametextbox->Multiline = true;
			this->usernametextbox->Name = L"usernametextbox";
			this->usernametextbox->Size = System::Drawing::Size(208, 24);
			this->usernametextbox->TabIndex = 2;
			this->usernametextbox->TextChanged += gcnew System::EventHandler(this, &Mainmenu::usernametextbox_TextChanged);
			// 
			// ErrorPanel
			// 
			this->ErrorPanel->BackColor = System::Drawing::Color::Cyan;
			this->ErrorPanel->Controls->Add(this->ErrorCancelBtn);
			this->ErrorPanel->Controls->Add(this->ErrorLabel);
			this->ErrorPanel->Location = System::Drawing::Point(248, 90);
			this->ErrorPanel->Name = L"ErrorPanel";
			this->ErrorPanel->Size = System::Drawing::Size(702, 199);
			this->ErrorPanel->TabIndex = 8;
			this->ErrorPanel->Visible = false;
			// 
			// ErrorCancelBtn
			// 
			this->ErrorCancelBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ErrorCancelBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ErrorCancelBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->ErrorCancelBtn->Location = System::Drawing::Point(322, 148);
			this->ErrorCancelBtn->Name = L"ErrorCancelBtn";
			this->ErrorCancelBtn->Size = System::Drawing::Size(30, 32);
			this->ErrorCancelBtn->TabIndex = 6;
			this->ErrorCancelBtn->Text = L"X";
			this->ErrorCancelBtn->UseVisualStyleBackColor = false;
			this->ErrorCancelBtn->Click += gcnew System::EventHandler(this, &Mainmenu::ErrorCancelBtn_Click);
			// 
			// ErrorLabel
			// 
			this->ErrorLabel->AutoSize = true;
			this->ErrorLabel->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 50, System::Drawing::FontStyle::Bold));
			this->ErrorLabel->ForeColor = System::Drawing::Color::Chocolate;
			this->ErrorLabel->Location = System::Drawing::Point(94, 33);
			this->ErrorLabel->Name = L"ErrorLabel";
			this->ErrorLabel->Size = System::Drawing::Size(536, 76);
			this->ErrorLabel->TabIndex = 0;
			this->ErrorLabel->Text = L"Wrong Username";
			// 
			// Mainmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1244, 545);
			this->Controls->Add(this->Commonloginpanel);
			this->Controls->Add(this->Aboutpanel);
			this->Controls->Add(this->ErrorPanel);
			this->Controls->Add(this->Menupanel);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Mainmenu";
			this->Text = L"Mainmenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Mainmenu::Mainmenu_Load);
			this->MouseHover += gcnew System::EventHandler(this, &Mainmenu::Mainmenu_MouseHover);
			this->Aboutpanel->ResumeLayout(false);
			this->Aboutpanel->PerformLayout();
			this->Menupanel->ResumeLayout(false);
			this->Loginpanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Commonloginpanel->ResumeLayout(false);
			this->Commonloginpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ErrorPanel->ResumeLayout(false);
			this->ErrorPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	Key = "FromManager";
}
private: System::Void Cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ClickSound->Play();
	Commonloginpanel->Visible = false;
	Menupanel->Visible = true;
}
private: System::Void Signinbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	// Code for playing sound.
	ClickSound->Play();
	if (Key == "FromEmployee")
	{
		try
		{
			Connect->Open();
			Query = "select Username, Password from Banking.Employee where Username = '" + usernametextbox->Text + "' and Password = '" + passwordtextbox->Text + "'";
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			MySqlDataReader^ reader = cmd->ExecuteReader();
			
			if (reader->Read())
			{
				Connect->Close();
				MessageBox::Show("signin successful", "sucess", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Employeemenu^ EMenu = gcnew Employeemenu(this);
				EMenu->Show();
				this->Hide();

			}
			else
			{
				Connect->Close();
				ErrorLabel->Text = "Invalid Username or Password";
				ErrorPanel->Visible = true;
				WarningSound->Play();
				Commonloginpanel->Visible = false;
			}
		}
		catch (Exception^ ex)
		{
			Connect->Close();
			MessageBox::Show(ex->Message);
			Commonloginpanel->Visible = false; 
			ErrorPanel->Visible = true;
		}
		
	}

	if (Key == "FromCustomer")
	{
		try
		{
			Connect->Open();
			Query = "select Name, Accountno, Accountbalance from Banking.Account where Username = '" + usernametextbox->Text + "' and Password = '" + passwordtextbox->Text + "'";
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			MySqlDataReader^ reader = cmd->ExecuteReader();

			if (reader->Read())
			{
				
				MessageBox::Show("signin successful", "success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Customermenu^ EMenu = gcnew Customermenu(this, usernametextbox->Text, reader->GetString(0), reader->GetString(1), reader->GetString(2));
				Connect->Close();
				EMenu->Show();
				this->Hide();

			}
			else
			{
				Connect->Close();
				ErrorLabel->Text = "Invalid Username or Password";
				ErrorPanel->Visible = true;
				WarningSound->Play();
				Commonloginpanel->Visible = false;
			}
		}
		catch (Exception^ ex)
		{
			Connect->Close();
			MessageBox::Show(ex->Message);
			Commonloginpanel->Visible = false;
			ErrorPanel->Visible = true;
		}

	}
	else if(Key == "FromManager")
	{
		if (usernametextbox->Text == "Abhishek")
		{
			if (passwordtextbox->Text == "Shalini")
			{
				MessageBox::Show("signin successful", "sucess", MessageBoxButtons::OK, MessageBoxIcon::Information);
				ManagerMenu^ Mmenu = gcnew ManagerMenu(this);
				Mmenu->Show();
				this->Hide();


			}
			else
			{
				ErrorLabel->Text = "wrong password";
				ErrorPanel->Visible = true;
				WarningSound->Play();
				Commonloginpanel->Visible = false;


			}
		}
		else
		{

			ErrorLabel->Text = "wrong ussrname";
			ErrorPanel->Visible = true;
			WarningSound->Play();
			Commonloginpanel->Visible = false;


		}
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
	Key = "FromEmployee";
}
private: System::Void Customerloginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Commonloginpanel->Visible = true;
	Menupanel->Visible = false;
	Loginpanel->Visible = false;
	Loginlabel->Text = "CUSTOMER  LOGIN";
	Key = "FromCustomer";
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {

	usernametextbox->Clear();
	passwordtextbox->Clear();
	usernametextbox->Focus();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if(passwordtextbox->UseSystemPasswordChar == true)
		passwordtextbox->UseSystemPasswordChar = false;
	else if(passwordtextbox->UseSystemPasswordChar == false)
		passwordtextbox->UseSystemPasswordChar = true;
}
private: System::Void ErrorCancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	ClickSound->Play();
	ErrorPanel->Visible = false;
	WarningSound->Stop();

	Commonloginpanel->Visible = true;
	usernametextbox->Clear();
	passwordtextbox->Clear();
	usernametextbox->Focus();
}
};
}
