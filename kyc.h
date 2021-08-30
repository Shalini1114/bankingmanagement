#pragma once


namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Kyc
	/// </summary>
	public ref class Kyc : public System::Windows::Forms::Form
	{
	public:


		Form^ MANAGERmenu;
		String^ Key;
		String^ Data1;
	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Addresstxtbox;
	private: System::Windows::Forms::TextBox^ Mobiletxtbox;
	private: System::Windows::Forms::TextBox^ Aadharnumbertxtbox;
		   String^ Data2;
	public:

		Kyc(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


		Kyc(Form^ obj, String^ key)
		{
			MANAGERmenu = obj;
			Key = key;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Kyc(Form^ obj, String^ key, String^ Accountholder,String^ Accountnumber)
		{
			MANAGERmenu = obj;
			Key = key;
			Data1 = Accountholder;
			Data2 = Accountnumber;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}



		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Kyc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:


	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::TextBox^ Pannotxtbox;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Pannotxtbox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Addresstxtbox = (gcnew System::Windows::Forms::TextBox());
			this->Mobiletxtbox = (gcnew System::Windows::Forms::TextBox());
			this->Aadharnumbertxtbox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 24.75F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(185, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(364, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"KYC FORM";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Magneto", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(60, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(241, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Mobile Number";
			// 
			// Pannotxtbox
			// 
			this->Pannotxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pannotxtbox->Location = System::Drawing::Point(439, 222);
			this->Pannotxtbox->Name = L"Pannotxtbox";
			this->Pannotxtbox->Size = System::Drawing::Size(255, 35);
			this->Pannotxtbox->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Aqua;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(66, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 41);
			this->button1->TabIndex = 9;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Kyc::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Aqua;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(531, 365);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 41);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Kyc::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Magneto", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Green;
			this->label2->Location = System::Drawing::Point(60, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 32);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Aadhar number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Magneto", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Green;
			this->label3->Location = System::Drawing::Point(68, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 32);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Pan Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Magneto", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(77, 300);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 32);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Address";
			// 
			// Addresstxtbox
			// 
			this->Addresstxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addresstxtbox->Location = System::Drawing::Point(439, 297);
			this->Addresstxtbox->Name = L"Addresstxtbox";
			this->Addresstxtbox->Size = System::Drawing::Size(255, 35);
			this->Addresstxtbox->TabIndex = 14;
			// 
			// Mobiletxtbox
			// 
			this->Mobiletxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mobiletxtbox->Location = System::Drawing::Point(439, 151);
			this->Mobiletxtbox->Name = L"Mobiletxtbox";
			this->Mobiletxtbox->Size = System::Drawing::Size(255, 35);
			this->Mobiletxtbox->TabIndex = 15;
			// 
			// Aadharnumbertxtbox
			// 
			this->Aadharnumbertxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aadharnumbertxtbox->Location = System::Drawing::Point(439, 79);
			this->Aadharnumbertxtbox->Name = L"Aadharnumbertxtbox";
			this->Aadharnumbertxtbox->Size = System::Drawing::Size(255, 35);
			this->Aadharnumbertxtbox->TabIndex = 16;
			// 
			// Kyc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(773, 432);
			this->Controls->Add(this->Aadharnumbertxtbox);
			this->Controls->Add(this->Mobiletxtbox);
			this->Controls->Add(this->Addresstxtbox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Pannotxtbox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Name = L"Kyc";
			this->Text = L"Kyc";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Kyc::Kyc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Kyc_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure want to cancel ?", "Warning", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		MANAGERmenu->Show();
		this->Close();

	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	// Connecting to database.
	String^ ConnectString = "datasource=sql6.freemysqlhosting.net;port=3306;username=sql6433712;password=HLZ9vD1KIH";

	MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
	String^ Query;
	Query = "insert into Banking.Kyc (Aadharnumber,Mobilenumber,Pannumber,Address,Accountholdername,Accountnumber) values ('" +
		Aadharnumbertxtbox->Text + "','" + Mobiletxtbox->Text + "','" +
		Pannotxtbox->Text + "','" + Addresstxtbox->Text + "','" + Data1 + "','" + Data2 + "')";

	// Inserting into database code...
	MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
	MySqlDataReader^ reader;

	try
	{
		Connect->Open();
		reader = cmd->ExecuteReader();
		MessageBox::Show("Data saved successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MANAGERmenu->Show();
		this->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		MANAGERmenu->Show();
		this->Close();
	}

}

};
}
