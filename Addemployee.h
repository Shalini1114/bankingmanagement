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
		
		String^ Data, ^Key, ^RadioBtn;
		

		String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";
		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;

		Addemployee(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Addemployee(Form^ obj, String^ key)
		{
			
			
			
			InitializeComponent();
			managermenu = obj;
			Key = key;
			//
			//TODO: Add the constructor code here
			//
		}
		Addemployee(Form^ obj, String^ data, String^ key, String^ radiobtn)
		{
			InitializeComponent();
			managermenu = obj;
			Data = data;
			Key = key;
			RadioBtn = radiobtn;
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
	private: System::Windows::Forms::Label^ Employeelabel;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ Nameemptxt;
	private: System::Windows::Forms::TextBox^ Fathernameemptxt;






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
	private: System::Windows::Forms::DateTimePicker^ Dobemp;
	private: System::Windows::Forms::Button^ OKempbtn;









	protected:

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
			this->Employeelabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Nameemptxt = (gcnew System::Windows::Forms::TextBox());
			this->Fathernameemptxt = (gcnew System::Windows::Forms::TextBox());
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
			this->Dobemp = (gcnew System::Windows::Forms::DateTimePicker());
			this->OKempbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Employeelabel
			// 
			this->Employeelabel->AutoSize = true;
			this->Employeelabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Employeelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Employeelabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Employeelabel->Location = System::Drawing::Point(337, 9);
			this->Employeelabel->Name = L"Employeelabel";
			this->Employeelabel->Size = System::Drawing::Size(402, 39);
			this->Employeelabel->TabIndex = 0;
			this->Employeelabel->Text = L"NEW EMPLOYEE FORM";
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
			this->label8->Location = System::Drawing::Point(187, 331);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(166, 31);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Aadhar no:-";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Maroon;
			this->label9->Location = System::Drawing::Point(193, 393);
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
			this->label10->Location = System::Drawing::Point(190, 438);
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
			// Addressemptxt
			// 
			this->Addressemptxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Addressemptxt->Location = System::Drawing::Point(585, 481);
			this->Addressemptxt->Name = L"Addressemptxt";
			this->Addressemptxt->Size = System::Drawing::Size(263, 20);
			this->Addressemptxt->TabIndex = 13;
			// 
			// Mobemptxt
			// 
			this->Mobemptxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Mobemptxt->Location = System::Drawing::Point(567, 200);
			this->Mobemptxt->Name = L"Mobemptxt";
			this->Mobemptxt->Size = System::Drawing::Size(261, 20);
			this->Mobemptxt->TabIndex = 14;
			// 
			// Emailemptxt
			// 
			this->Emailemptxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Emailemptxt->Location = System::Drawing::Point(559, 278);
			this->Emailemptxt->Name = L"Emailemptxt";
			this->Emailemptxt->Size = System::Drawing::Size(261, 20);
			this->Emailemptxt->TabIndex = 15;
			this->Emailemptxt->TextChanged += gcnew System::EventHandler(this, &Addemployee::textBox6_TextChanged);
			// 
			// Aadharemptxt
			// 
			this->Aadharemptxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Aadharemptxt->Location = System::Drawing::Point(559, 342);
			this->Aadharemptxt->Name = L"Aadharemptxt";
			this->Aadharemptxt->Size = System::Drawing::Size(261, 20);
			this->Aadharemptxt->TabIndex = 16;
			// 
			// Educationemptxt
			// 
			this->Educationemptxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Educationemptxt->Location = System::Drawing::Point(571, 438);
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
			this->label7->Location = System::Drawing::Point(193, 266);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 31);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Email:-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(181, 481);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Address:-";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Lime;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(193, 200);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Mob no:-";
			this->label6->Click += gcnew System::EventHandler(this, &Addemployee::label6_Click);
			// 
			// Dobemp
			// 
			this->Dobemp->CustomFormat = L"yyyy-MM-dd";
			this->Dobemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dobemp->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Dobemp->Location = System::Drawing::Point(565, 393);
			this->Dobemp->Name = L"Dobemp";
			this->Dobemp->Size = System::Drawing::Size(261, 26);
			this->Dobemp->TabIndex = 20;
			// 
			// OKempbtn
			// 
			this->OKempbtn->BackColor = System::Drawing::Color::Red;
			this->OKempbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OKempbtn->ForeColor = System::Drawing::Color::Navy;
			this->OKempbtn->Location = System::Drawing::Point(458, 525);
			this->OKempbtn->Name = L"OKempbtn";
			this->OKempbtn->Size = System::Drawing::Size(158, 50);
			this->OKempbtn->TabIndex = 21;
			this->OKempbtn->Text = L"OK";
			this->OKempbtn->UseVisualStyleBackColor = false;
			this->OKempbtn->Visible = false;
			this->OKempbtn->Click += gcnew System::EventHandler(this, &Addemployee::OKempbtn_Click);
			// 
			// Addemployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1059, 598);
			this->Controls->Add(this->OKempbtn);
			this->Controls->Add(this->Dobemp);
			this->Controls->Add(this->Cancelempbtn);
			this->Controls->Add(this->Submitempbtn);
			this->Controls->Add(this->Educationemptxt);
			this->Controls->Add(this->Aadharemptxt);
			this->Controls->Add(this->Emailemptxt);
			this->Controls->Add(this->Mobemptxt);
			this->Controls->Add(this->Addressemptxt);
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
			this->Controls->Add(this->Employeelabel);
			this->DoubleBuffered = true;
			this->Name = L"Addemployee";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Addemployee::Addemployee_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ GenerateNumber(String^ TableName, String^ DBVariableName)
	{
		String^ number;
		Query = "SELECT COUNT(" + DBVariableName + ") FROM " + TableName + " ";
		MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
		MySqlDataReader^ reader;
		Connect->Open();
		reader = cmd->ExecuteReader();
		if (reader->Read())
		{
			int id = System::Convert::ToInt16(reader[0]->ToString()) + 1;
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
	private: System::Void Addemployee_Load(System::Object^ sender, System::EventArgs^ e) {

		if (Key == "FromSearch Employee" || Key == "FromDelete Employee" || Key == "FromEdit Employee")
		{
			Query = "select * from Banking.Employee where " + RadioBtn + " = '" + Data + "'";

			// Checking data into database.
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);

			try
			{
				Connect->Open();
				MySqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read())
				{

					Nameemptxt->Text = reader->GetString(0);
					Fathernameemptxt->Text = reader->GetString(1);
					Mobemptxt->Text = reader->GetString(2);
					Emailemptxt->Text = reader->GetString(3);
					Aadharemptxt->Text = reader->GetString(4);
					Dobemp->Text = reader->GetString(5);
					Educationemptxt->Text = reader->GetString(6);
					Addressemptxt->Text = reader->GetString(7);
					Nameemptxt->Enabled = false;
					Fathernameemptxt->Enabled = false;
					Mobemptxt->Enabled = false;
					Emailemptxt->Enabled = false;
					Aadharemptxt->Enabled = false;
					Dobemp->Enabled = false;
					Educationemptxt->Enabled = false;
					Addressemptxt->Enabled = false;


				}
				Connect->Close();

			}
			catch (Exception^ ex)
			{
				Connect->Close();
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
				managermenu->Show();

			}
		}
		if (Key == "FromSearch Employee")
		{
			Submitempbtn->Visible = false;
			Cancelempbtn->Visible = false;
			OKempbtn->Visible = true;
			Employeelabel->Text = "Employee Details";

		}
		else if(Key == "FromEdit Employee")
		{


			Submitempbtn->Text = "UPDATE";
			Cancelempbtn->Visible = true;
			Employeelabel->Text = "EDIT EMPLOYEE DETAILS";
			Nameemptxt->Enabled = true;
			Fathernameemptxt->Enabled = true;
			Mobemptxt->Enabled = true;
			Emailemptxt->Enabled = true;
			Dobemp->Enabled = true;
			Addressemptxt->Enabled = true;
			
		}
<<<<<<< HEAD
		else if (Key == "FromDelete Employee")
=======
		else if (Key == "FromDelete")
>>>>>>> e0d897cad6673219bae35bd401b0a47c442383a7
		{
			Submitempbtn->Text = "DELETE";
			Cancelempbtn->Visible = true;
			Employeelabel->Text = "DELETE EMPLOYEE DETAILS";
			OKempbtn->Visible = false;
		}
		else if(Key == "FromAdd Employee")
		{
			Submitempbtn->Text = "Submit";
			Submitempbtn->Visible = true;
			Cancelempbtn->Visible = true;
			Employeelabel->Text = "NEW EMPLOYEE FORM";

		}

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

		if(Key == "FromEdit Employee")
		{
			
			Query = "update Banking.Employee set Name='" + Nameemptxt->Text + "',  Father='" + Fathernameemptxt->Text + "', Mob='" + Mobemptxt->Text + "', Email='" + Emailemptxt->Text + "', Dob='" + Dobemp->Text + "', Address='" + Addressemptxt->Text + "' WHERE "+RadioBtn+" = '" + Data + "'";

			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			
			

			try
			{
				Connect->Open();
				MySqlDataReader^ reader = cmd->ExecuteReader();
				MessageBox::Show("Data Updated Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Connect->Close();
				managermenu->Show();
				this->Close();
			}
			catch (Exception^ ex)
			{
				Connect->Close();
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				managermenu->Show();
				this->Close();
			}

		}
		else if (Key == "FromDelete Employee")
		  {
			
			Query = "delete from Banking.Employee WHERE "+RadioBtn+" = '" + Data + "'";

			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			MySqlDataReader^ reader;


			try
			{
				Connect->Open();
				reader = cmd->ExecuteReader();
				MessageBox::Show("Data Deleted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Connect->Close();
				managermenu->Show();
				this->Close();
			}
			catch (Exception^ ex)
			{
				Connect->Close();
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				managermenu->Show();
				this->Close();
			}

		}
		else
		{
			// Setting username
			String^ username = "Bank";
			String^ password = "Emp";
			try
			{
				username += GenerateNumber("Banking.Employee", "Username");
				password += GenerateNumber("Banking.Employee", "Password");
			}
			catch (Exception^ ex)
			{
				Connect->Close();
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				managermenu->Show();
				this->Close();
			}


			// Connecting to database.
			
			Query = "insert into Banking.Employee (Name,Father,Mob,Email,Aadhar,DOB,Education,Address,Username,Password) values ('" +
				Nameemptxt->Text + "','" + Fathernameemptxt->Text + "','" +
				Mobemptxt->Text + "','" + Emailemptxt->Text + "', '" +
				Aadharemptxt->Text + "', '" + Dobemp->Text + "', '" +
				Educationemptxt->Text + "', '" + Addressemptxt->Text + "', '" +
				username + "', '" + password + "')";

			// Inserting into database code...
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			

			try
			{
				Connect->Open();
				MySqlDataReader^ reader = cmd->ExecuteReader();
				Connect->Close();
				MessageBox::Show("Data saved successfully. Username = '" + username + "' and Password = '" + password + "'", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				managermenu->Show();
				this->Close();
			}
			catch (Exception^ ex)
			{
				Connect->Close();
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				managermenu->Show();
				this->Close();
			}

		}
		
	}


	private: System::Void OKempbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		managermenu->Show();
		this->Close();

	}
	};
}
