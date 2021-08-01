#pragma once
#include <ctime>
#include <cstdlib>

namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Addemployee
	/// </summary>
	public ref class Addemployee : public System::Windows::Forms::Form
	{
	public:
		Form^ managermenu;
		Addemployee(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Addemployee(Form^obj)
		{
			 managermenu = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Addemployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ Nameemptxt;
	private: System::Windows::Forms::TextBox^ Fathernameemptxt;
	private: System::Windows::Forms::TextBox^ Dobemptxt;





	private: System::Windows::Forms::TextBox^ Addressemptxt;
	private: System::Windows::Forms::TextBox^ Mobemptxt;
	private: System::Windows::Forms::TextBox^ Emailemptxt;
	private: System::Windows::Forms::TextBox^ Aadharemptxt;
	private: System::Windows::Forms::TextBox^ Educationemptxt;
	private: System::Windows::Forms::Button^ Submitempbtn;
	private: System::Windows::Forms::Button^ Cancelempbtn;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;









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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Nameemptxt = (gcnew System::Windows::Forms::TextBox());
			this->Fathernameemptxt = (gcnew System::Windows::Forms::TextBox());
			this->Dobemptxt = (gcnew System::Windows::Forms::TextBox());
			this->Addressemptxt = (gcnew System::Windows::Forms::TextBox());
			this->Mobemptxt = (gcnew System::Windows::Forms::TextBox());
			this->Emailemptxt = (gcnew System::Windows::Forms::TextBox());
			this->Aadharemptxt = (gcnew System::Windows::Forms::TextBox());
			this->Educationemptxt = (gcnew System::Windows::Forms::TextBox());
			this->Submitempbtn = (gcnew System::Windows::Forms::Button());
			this->Cancelempbtn = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(337, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"NEW EMPLOYEE FORM";
			this->label1->Click += gcnew System::EventHandler(this, &Addemployee::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Aqua;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(192, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name :-";
			this->label2->Click += gcnew System::EventHandler(this, &Addemployee::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Lime;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(193, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Father\'s Name:-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(179, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 31);
			this->label4->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Lime;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Maroon;
			this->label8->Location = System::Drawing::Point(191, 346);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(166, 31);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Aadhar no:-";
			this->label8->Click += gcnew System::EventHandler(this, &Addemployee::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Maroon;
			this->label9->Location = System::Drawing::Point(193, 398);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 31);
			this->label9->TabIndex = 8;
			this->label9->Text = L"DOB:--";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Lime;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Maroon;
			this->label10->Location = System::Drawing::Point(190, 450);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(163, 31);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Education:-";
			// 
			// Nameemptxt
			// 
			this->Nameemptxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Nameemptxt->Location = System::Drawing::Point(559, 87);
			this->Nameemptxt->Name = L"Nameemptxt";
			this->Nameemptxt->Size = System::Drawing::Size(261, 20);
			this->Nameemptxt->TabIndex = 10;
			// 
			// Fathernameemptxt
			// 
			this->Fathernameemptxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Fathernameemptxt->Location = System::Drawing::Point(563, 143);
			this->Fathernameemptxt->Name = L"Fathernameemptxt";
			this->Fathernameemptxt->Size = System::Drawing::Size(263, 20);
			this->Fathernameemptxt->TabIndex = 11;
			this->Fathernameemptxt->TextChanged += gcnew System::EventHandler(this, &Addemployee::textBox2_TextChanged);
			// 
			// Dobemptxt
			// 
			this->Dobemptxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Dobemptxt->Location = System::Drawing::Point(566, 407);
			this->Dobemptxt->Name = L"Dobemptxt";
			this->Dobemptxt->Size = System::Drawing::Size(268, 20);
			this->Dobemptxt->TabIndex = 12;
			this->Dobemptxt->TextChanged += gcnew System::EventHandler(this, &Addemployee::textBox3_TextChanged);
			// 
			// Addressemptxt
			// 
			this->Addressemptxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Addressemptxt->Location = System::Drawing::Point(563, 196);
			this->Addressemptxt->Name = L"Addressemptxt";
			this->Addressemptxt->Size = System::Drawing::Size(263, 20);
			this->Addressemptxt->TabIndex = 13;
			// 
			// Mobemptxt
			// 
			this->Mobemptxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Mobemptxt->Location = System::Drawing::Point(565, 250);
			this->Mobemptxt->Name = L"Mobemptxt";
			this->Mobemptxt->Size = System::Drawing::Size(261, 20);
			this->Mobemptxt->TabIndex = 14;
			// 
			// Emailemptxt
			// 
			this->Emailemptxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Emailemptxt->Location = System::Drawing::Point(565, 303);
			this->Emailemptxt->Name = L"Emailemptxt";
			this->Emailemptxt->Size = System::Drawing::Size(261, 20);
			this->Emailemptxt->TabIndex = 15;
			this->Emailemptxt->TextChanged += gcnew System::EventHandler(this, &Addemployee::textBox6_TextChanged);
			// 
			// Aadharemptxt
			// 
			this->Aadharemptxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Aadharemptxt->Location = System::Drawing::Point(567, 357);
			this->Aadharemptxt->Name = L"Aadharemptxt";
			this->Aadharemptxt->Size = System::Drawing::Size(261, 20);
			this->Aadharemptxt->TabIndex = 16;
			// 
			// Educationemptxt
			// 
			this->Educationemptxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Educationemptxt->Location = System::Drawing::Point(573, 459);
			this->Educationemptxt->Name = L"Educationemptxt";
			this->Educationemptxt->Size = System::Drawing::Size(255, 20);
			this->Educationemptxt->TabIndex = 17;
			this->Educationemptxt->TextChanged += gcnew System::EventHandler(this, &Addemployee::textBox8_TextChanged);
			// 
			// Submitempbtn
			// 
			this->Submitempbtn->BackColor = System::Drawing::Color::Red;
			this->Submitempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Submitempbtn->ForeColor = System::Drawing::Color::Navy;
			this->Submitempbtn->Location = System::Drawing::Point(127, 525);
			this->Submitempbtn->Name = L"Submitempbtn";
			this->Submitempbtn->Size = System::Drawing::Size(158, 50);
			this->Submitempbtn->TabIndex = 18;
			this->Submitempbtn->Text = L"SUBMIT";
			this->Submitempbtn->UseVisualStyleBackColor = false;
			this->Submitempbtn->Click += gcnew System::EventHandler(this, &Addemployee::Submitempbtn_Click);
			// 
			// Cancelempbtn
			// 
			this->Cancelempbtn->BackColor = System::Drawing::Color::Red;
			this->Cancelempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelempbtn->ForeColor = System::Drawing::Color::Navy;
			this->Cancelempbtn->Location = System::Drawing::Point(784, 525);
			this->Cancelempbtn->Name = L"Cancelempbtn";
			this->Cancelempbtn->Size = System::Drawing::Size(157, 47);
			this->Cancelempbtn->TabIndex = 19;
			this->Cancelempbtn->Text = L"CANCEL";
			this->Cancelempbtn->UseVisualStyleBackColor = false;
			this->Cancelempbtn->Click += gcnew System::EventHandler(this, &Addemployee::Cancelempbtn_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Location = System::Drawing::Point(192, 292);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 31);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Email:-";
			this->label7->Click += gcnew System::EventHandler(this, &Addemployee::label7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(193, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Address:-";
			this->label5->Click += gcnew System::EventHandler(this, &Addemployee::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Lime;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(193, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Mob no:-";
			this->label6->Click += gcnew System::EventHandler(this, &Addemployee::label6_Click);
			// 
			// Addemployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1059, 598);
			this->Controls->Add(this->Cancelempbtn);
			this->Controls->Add(this->Submitempbtn);
			this->Controls->Add(this->Educationemptxt);
			this->Controls->Add(this->Aadharemptxt);
			this->Controls->Add(this->Emailemptxt);
			this->Controls->Add(this->Mobemptxt);
			this->Controls->Add(this->Addressemptxt);
			this->Controls->Add(this->Dobemptxt);
			this->Controls->Add(this->Fathernameemptxt);
			this->Controls->Add(this->Nameemptxt);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"Addemployee";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Addemployee::Addemployee_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Addemployee_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Cancelempbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure want to cancel ?", "Warning", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		managermenu->Show();
		this->Close();

	}
		
}
private: System::Void Submitempbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 MessageBox::Show("submission successful ?", "sucess", MessageBoxButtons::OK,
		MessageBoxIcon::Information);
		managermenu->Show();
		
		// Connecting to database.
		String^ ConnectString = "datasource=localhost;port=3306;username=root;password=root";
	
		// Setting username
		String^ username = "Bank";
		srand((unsigned int)time(NULL));
		int Number = rand() % 10000;
		username += Number.ToString();

		// Setting password
		String^ password = "Emp";
		srand((unsigned int)time(NULL));
		Number = rand() % 10000;
		password += Number.ToString();

		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;
		Query = "insert into Banking.Employee (Name,Fathers Name,Mob no,Email,Aadhar no,DOB,Education,Address,Username,Password) values ('" + 
		Nameemptxt->Text + "', '" + Fathernameemptxt->Text + "', '" + 
		Mobemptxt->Text + "', '" + Emailemptxt->Text + "', '" + 
		Aadharemptxt->Text + "', '" + Dobemptxt->Text + "', '" + 
		Educationemptxt->Text + "', '" + Addressemptxt->Text + "', '" + 
		username + "', '" +password+"')";
}
};
}
