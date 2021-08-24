
namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for kyc
	/// </summary>
	public ref class kyc : public System::Windows::Forms::Form
	{
	public:
		Form^ MANAGERmenu;
		String^ Data;
		String^ Key;


		kyc(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		kyc(Form^ obj,String^data)
		{
			MANAGERmenu = obj;
			Data = data;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		kyc(Form^  obj, String^ data,String^ key)
		{
			MANAGERmenu = obj;
			Data = data;
			Key = key;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~kyc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ okkycbtn;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Aadharnotxtbox;
	private: System::Windows::Forms::Button^ cancelkycbtn;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Mobnotxtbox;
	private: System::Windows::Forms::TextBox^ Pannotxtbox;
	private: System::Windows::Forms::TextBox^ Addresstxtbox;

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
			this->okkycbtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Aadharnotxtbox = (gcnew System::Windows::Forms::TextBox());
			this->cancelkycbtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Mobnotxtbox = (gcnew System::Windows::Forms::TextBox());
			this->Pannotxtbox = (gcnew System::Windows::Forms::TextBox());
			this->Addresstxtbox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// okkycbtn
			// 
			this->okkycbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->okkycbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okkycbtn->ForeColor = System::Drawing::Color::Yellow;
			this->okkycbtn->Location = System::Drawing::Point(72, 334);
			this->okkycbtn->Name = L"okkycbtn";
			this->okkycbtn->Size = System::Drawing::Size(147, 35);
			this->okkycbtn->TabIndex = 0;
			this->okkycbtn->Text = L"OK";
			this->okkycbtn->UseVisualStyleBackColor = false;
			this->okkycbtn->Click += gcnew System::EventHandler(this, &kyc::okkycbtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Fuchsia;
			this->label1->Location = System::Drawing::Point(174, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(321, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"KYC FORM";
			// 
			// Aadharnotxtbox
			// 
			this->Aadharnotxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aadharnotxtbox->Location = System::Drawing::Point(372, 92);
			this->Aadharnotxtbox->Name = L"Aadharnotxtbox";
			this->Aadharnotxtbox->Size = System::Drawing::Size(226, 30);
			this->Aadharnotxtbox->TabIndex = 2;
			// 
			// cancelkycbtn
			// 
			this->cancelkycbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->cancelkycbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelkycbtn->ForeColor = System::Drawing::Color::Yellow;
			this->cancelkycbtn->Location = System::Drawing::Point(478, 334);
			this->cancelkycbtn->Name = L"cancelkycbtn";
			this->cancelkycbtn->Size = System::Drawing::Size(142, 35);
			this->cancelkycbtn->TabIndex = 3;
			this->cancelkycbtn->Text = L"Cancel";
			this->cancelkycbtn->UseVisualStyleBackColor = false;
			this->cancelkycbtn->Click += gcnew System::EventHandler(this, &kyc::cancelkycbtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Yellow;
			this->label3->Font = (gcnew System::Drawing::Font(L"Harlow Solid Italic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(84, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 30);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Aadhar Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Yellow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Harlow Solid Italic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(98, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 30);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Pan Number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Harlow Solid Italic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(84, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(184, 30);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Mobile Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Harlow Solid Italic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(98, 263);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 30);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Address";
			// 
			// Mobnotxtbox
			// 
			this->Mobnotxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mobnotxtbox->Location = System::Drawing::Point(372, 148);
			this->Mobnotxtbox->Name = L"Mobnotxtbox";
			this->Mobnotxtbox->Size = System::Drawing::Size(226, 30);
			this->Mobnotxtbox->TabIndex = 9;
			// 
			// Pannotxtbox
			// 
			this->Pannotxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pannotxtbox->Location = System::Drawing::Point(372, 206);
			this->Pannotxtbox->Name = L"Pannotxtbox";
			this->Pannotxtbox->Size = System::Drawing::Size(226, 30);
			this->Pannotxtbox->TabIndex = 10;
			// 
			// Addresstxtbox
			// 
			this->Addresstxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addresstxtbox->Location = System::Drawing::Point(372, 264);
			this->Addresstxtbox->Name = L"Addresstxtbox";
			this->Addresstxtbox->Size = System::Drawing::Size(226, 30);
			this->Addresstxtbox->TabIndex = 11;
			// 
			// kyc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Navy;
			this->ClientSize = System::Drawing::Size(687, 381);
			this->Controls->Add(this->Addresstxtbox);
			this->Controls->Add(this->Pannotxtbox);
			this->Controls->Add(this->Mobnotxtbox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cancelkycbtn);
			this->Controls->Add(this->Aadharnotxtbox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->okkycbtn);
			this->Name = L"kyc";
			this->Text = L"kyc";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &kyc::kyc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void kyc_Load(System::Object^ sender, System::EventArgs^ e) {
		bool Dataexist = false;


		if (Key == "FromKyc")
		{
			
            String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";
			MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
			String^ Query;
			Query = "select * from Banking.Kyc where Accountno='" + Data + "'";

			// Checking data into database.
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			MySqlDataReader^ reader;
			try
			{
				Connect->Open();
				reader = cmd->ExecuteReader();
				while (reader->Read())
				{

					Aadharnotxtbox->Text = reader->GetString(0);
					Mobnotxtbox->Text = reader->GetString(1);
					Pannotxtbox->Text = reader->GetString(2);
					Addresstxtbox->Text = reader->GetString(3);

					Aadharnotxtbox->Enabled = false;
					Mobnotxtbox->Enabled = false;
					Pannotxtbox->Enabled = false;
					Addresstxtbox->Enabled = false;


					Dataexist = true;

				}
				reader->Close();
				if (!Dataexist)
					MessageBox::Show("Data Not Found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
				MANAGERmenu->Show();

			}
		}
	}




	
	private: System::Void okkycbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";

		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;
		Query = "insert into Banking.Kyc (Aadharnumber,Mobilenumber,Pannumber,Address) values ('" +
			Aadharnotxtbox->Text + "','" + Mobnotxtbox->Text + "','" +
			Pannotxtbox->Text + "','" + Addresstxtbox->Text + "')";

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
private: System::Void cancelkycbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MessageBox::Show("Are you sure want to cancel ?", "Warning", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		MANAGERmenu->Show();
		this->Close();

	}
}
};
}

