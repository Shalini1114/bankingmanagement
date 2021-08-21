#include <ctime>
#include<cstdlib>


namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AddCustomer
	/// </summary>
	public ref class AddCustomer : public System::Windows::Forms::Form
	{
	public:
		Form^ managerMenu;
		bool FormDetail;
		bool FromEdit;
		bool FromDelete;
		String^ Data;
		String^ Key;
		int Flag;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ PanNoTextBox;

	public:

	public:



	public:

	public:


	private: System::Windows::Forms::Button^ OKcusbtn;
	public:
		AddCustomer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddCustomer(Form^form, String^ data, String^ key)
		{
			InitializeComponent();
			managerMenu = form;
			Data = data;
			Key = key;
			//
			//TODO: Add the constructor code here
			//
		}
		AddCustomer(Form^obj,bool temp)
		{
			managerMenu = obj;
			FormDetail = temp;


			InitializeComponent();

			DateTime datetime = DateTime::Now;
			this->label1->Text = datetime.ToString();
			//
			//TODO: Add the constructor code here
			//
		}
		AddCustomer(Form^ obj,bool temp,String^ str,int flag, bool FromEditTemp, bool FromDeleteTemp)
		{
			managerMenu = obj;
			FormDetail = temp;
			Data = str;
			Flag = flag;
			FromEdit = FromEditTemp;
			FromDelete = FromDeleteTemp;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Customerlabel;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Educationcustxt;


	private: System::Windows::Forms::TextBox^ Aadharcustxt;

	private: System::Windows::Forms::TextBox^ Adresscustxt;

	private: System::Windows::Forms::TextBox^ Fathernamecustxt;




	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Emailcustxt;

	private: System::Windows::Forms::TextBox^ Namecustxt;
	private: System::Windows::Forms::TextBox^ Mobcustxt;
	private: System::Windows::Forms::Button^ Submitcusbtn;
	private: System::Windows::Forms::Button^ Cancelcusbtn;
	private: System::Windows::Forms::DateTimePicker^ Dobcus;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Customerlabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Educationcustxt = (gcnew System::Windows::Forms::TextBox());
			this->Aadharcustxt = (gcnew System::Windows::Forms::TextBox());
			this->Adresscustxt = (gcnew System::Windows::Forms::TextBox());
			this->Fathernamecustxt = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Emailcustxt = (gcnew System::Windows::Forms::TextBox());
			this->Namecustxt = (gcnew System::Windows::Forms::TextBox());
			this->Mobcustxt = (gcnew System::Windows::Forms::TextBox());
			this->Submitcusbtn = (gcnew System::Windows::Forms::Button());
			this->Cancelcusbtn = (gcnew System::Windows::Forms::Button());
			this->Dobcus = (gcnew System::Windows::Forms::DateTimePicker());
			this->OKcusbtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->PanNoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Customerlabel
			// 
			this->Customerlabel->AutoSize = true;
			this->Customerlabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Customerlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customerlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Customerlabel->Location = System::Drawing::Point(332, 9);
			this->Customerlabel->Name = L"Customerlabel";
			this->Customerlabel->Size = System::Drawing::Size(411, 39);
			this->Customerlabel->TabIndex = 1;
			this->Customerlabel->Text = L"NEW CUSTOMER FORM\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Aqua;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(207, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 31);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name :-";
			// 
			// Educationcustxt
			// 
			this->Educationcustxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Educationcustxt->Location = System::Drawing::Point(570, 546);
			this->Educationcustxt->Name = L"Educationcustxt";
			this->Educationcustxt->Size = System::Drawing::Size(268, 20);
			this->Educationcustxt->TabIndex = 29;
			// 
			// Aadharcustxt
			// 
			this->Aadharcustxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Aadharcustxt->Location = System::Drawing::Point(570, 384);
			this->Aadharcustxt->Name = L"Aadharcustxt";
			this->Aadharcustxt->Size = System::Drawing::Size(261, 20);
			this->Aadharcustxt->TabIndex = 28;
			// 
			// Adresscustxt
			// 
			this->Adresscustxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Adresscustxt->Location = System::Drawing::Point(570, 218);
			this->Adresscustxt->Name = L"Adresscustxt";
			this->Adresscustxt->Size = System::Drawing::Size(261, 20);
			this->Adresscustxt->TabIndex = 27;
			// 
			// Fathernamecustxt
			// 
			this->Fathernamecustxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Fathernamecustxt->Location = System::Drawing::Point(570, 164);
			this->Fathernamecustxt->Name = L"Fathernamecustxt";
			this->Fathernamecustxt->Size = System::Drawing::Size(261, 20);
			this->Fathernamecustxt->TabIndex = 26;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Lime;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Maroon;
			this->label10->Location = System::Drawing::Point(210, 546);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(163, 31);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Education:-";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Maroon;
			this->label9->Location = System::Drawing::Point(210, 489);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 31);
			this->label9->TabIndex = 22;
			this->label9->Text = L"DOB:--";
			this->label9->Click += gcnew System::EventHandler(this, &AddCustomer::label9_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Lime;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Maroon;
			this->label13->Location = System::Drawing::Point(207, 274);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(128, 31);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Mob no:-";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Maroon;
			this->label12->Location = System::Drawing::Point(207, 218);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(140, 31);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Address:-";
			this->label12->Click += gcnew System::EventHandler(this, &AddCustomer::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Lime;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Maroon;
			this->label11->Location = System::Drawing::Point(207, 164);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(223, 31);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Father\'s Name:-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Lime;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(207, 384);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 31);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Aadhar no:-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(207, 330);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 31);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Email:-";
			// 
			// Emailcustxt
			// 
			this->Emailcustxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Emailcustxt->Location = System::Drawing::Point(570, 330);
			this->Emailcustxt->Name = L"Emailcustxt";
			this->Emailcustxt->Size = System::Drawing::Size(268, 20);
			this->Emailcustxt->TabIndex = 32;
			// 
			// Namecustxt
			// 
			this->Namecustxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Namecustxt->Location = System::Drawing::Point(570, 111);
			this->Namecustxt->Name = L"Namecustxt";
			this->Namecustxt->Size = System::Drawing::Size(268, 20);
			this->Namecustxt->TabIndex = 33;
			// 
			// Mobcustxt
			// 
			this->Mobcustxt->BackColor = System::Drawing::Color::Fuchsia;
			this->Mobcustxt->Location = System::Drawing::Point(570, 274);
			this->Mobcustxt->Name = L"Mobcustxt";
			this->Mobcustxt->Size = System::Drawing::Size(261, 20);
			this->Mobcustxt->TabIndex = 34;
			// 
			// Submitcusbtn
			// 
			this->Submitcusbtn->BackColor = System::Drawing::Color::Red;
			this->Submitcusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Submitcusbtn->ForeColor = System::Drawing::Color::Navy;
			this->Submitcusbtn->Location = System::Drawing::Point(110, 639);
			this->Submitcusbtn->Name = L"Submitcusbtn";
			this->Submitcusbtn->Size = System::Drawing::Size(158, 50);
			this->Submitcusbtn->TabIndex = 35;
			this->Submitcusbtn->Text = L"SUBMIT";
			this->Submitcusbtn->UseVisualStyleBackColor = false;
			this->Submitcusbtn->Click += gcnew System::EventHandler(this, &AddCustomer::Submitcusbtn_Click);
			// 
			// Cancelcusbtn
			// 
			this->Cancelcusbtn->BackColor = System::Drawing::Color::Red;
			this->Cancelcusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelcusbtn->ForeColor = System::Drawing::Color::Navy;
			this->Cancelcusbtn->Location = System::Drawing::Point(775, 642);
			this->Cancelcusbtn->Name = L"Cancelcusbtn";
			this->Cancelcusbtn->Size = System::Drawing::Size(157, 47);
			this->Cancelcusbtn->TabIndex = 36;
			this->Cancelcusbtn->Text = L"CANCEL";
			this->Cancelcusbtn->UseVisualStyleBackColor = false;
			this->Cancelcusbtn->Click += gcnew System::EventHandler(this, &AddCustomer::Cancelcusbtn_Click);
			// 
			// Dobcus
			// 
			this->Dobcus->CustomFormat = L"yyyy-MM-dd";
			this->Dobcus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dobcus->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Dobcus->Location = System::Drawing::Point(570, 489);
			this->Dobcus->Name = L"Dobcus";
			this->Dobcus->Size = System::Drawing::Size(261, 26);
			this->Dobcus->TabIndex = 37;
			// 
			// OKcusbtn
			// 
			this->OKcusbtn->BackColor = System::Drawing::Color::Red;
			this->OKcusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OKcusbtn->ForeColor = System::Drawing::Color::Navy;
			this->OKcusbtn->Location = System::Drawing::Point(437, 639);
			this->OKcusbtn->Name = L"OKcusbtn";
			this->OKcusbtn->Size = System::Drawing::Size(158, 50);
			this->OKcusbtn->TabIndex = 38;
			this->OKcusbtn->Text = L"OK";
			this->OKcusbtn->UseVisualStyleBackColor = false;
			this->OKcusbtn->Click += gcnew System::EventHandler(this, &AddCustomer::OKcusbtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(210, 605);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 31);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Datetime";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &AddCustomer::label1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Lime;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(206, 436);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 31);
			this->label5->TabIndex = 41;
			this->label5->Text = L"PAN No.";
			// 
			// PanNoTextBox
			// 
			this->PanNoTextBox->BackColor = System::Drawing::Color::Fuchsia;
			this->PanNoTextBox->Location = System::Drawing::Point(569, 436);
			this->PanNoTextBox->Name = L"PanNoTextBox";
			this->PanNoTextBox->Size = System::Drawing::Size(261, 20);
			this->PanNoTextBox->TabIndex = 40;
			// 
			// AddCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->ClientSize = System::Drawing::Size(1064, 713);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->PanNoTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->OKcusbtn);
			this->Controls->Add(this->Dobcus);
			this->Controls->Add(this->Cancelcusbtn);
			this->Controls->Add(this->Submitcusbtn);
			this->Controls->Add(this->Mobcustxt);
			this->Controls->Add(this->Namecustxt);
			this->Controls->Add(this->Emailcustxt);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Educationcustxt);
			this->Controls->Add(this->Aadharcustxt);
			this->Controls->Add(this->Adresscustxt);
			this->Controls->Add(this->Fathernamecustxt);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Customerlabel);
			this->Name = L"AddCustomer";
			this->Text = L"AddCustomer";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AddCustomer::AddCustomer_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	
	private: System::Void Cancelcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure want to cancel ?", "Warning", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			managerMenu->Show();
			this->Close();

		}
	}

	private: System::Void Submitcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (FromEdit == true)
		{
			String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";
			MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
			String^ Query;

			if (Flag == 1)
				Query = "update Banking.Customer set Name='" + Namecustxt->Text + "',  Father='" + Fathernamecustxt->Text + "', Mob='" + Mobcustxt->Text + "', Email='" + Emailcustxt->Text + "', Dob='" + Dobcus->Text + "', Address='" + Adresscustxt->Text + "' WHERE Name='" + Data + "'";
			else if (Flag == 2)
				Query = "update Banking.Customer set Name='" + Namecustxt->Text + "',  Father='" + Fathernamecustxt->Text + "', Mob='" + Mobcustxt->Text + "', Email='" + Emailcustxt->Text + "', Dob='" + Dobcus->Text + "', Address='" + Adresscustxt->Text + "' WHERE Aadhar='" + Data + "'";
			else if (Flag == 3)
				Query = "update Banking.Customer set Name='" + Namecustxt->Text + "',  Father='" + Fathernamecustxt->Text + "', Mob='" + Mobcustxt->Text + "', Email='" + Emailcustxt->Text + "', Dob='" + Dobcus->Text + "', Address='" + Adresscustxt->Text + "' WHERE Mob='" + Data + "'";

			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			MySqlDataReader^ reader;


			try
			{
				Connect->Open();
				reader = cmd->ExecuteReader();
				MessageBox::Show("Data Updated Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Connect->Close();
				managerMenu->Show();
				this->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				managerMenu->Show();
				this->Close();
			}

		}
		else if (FromDelete == true)
		{
			String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";
			MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
			String^ Query;

			if (Flag == 1)
				Query = "delete from Banking.Customer WHERE Name='" + Data + "'";
			else if (Flag == 2)
				Query = "delete from Banking.Customer WHERE Aadhar='" + Data + "'";
			else if (Flag == 3)
				Query = "delete from Banking.Customer WHERE Mob='" + Data + "'";

			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			MySqlDataReader^ reader;


			try
			{
				Connect->Open();
				reader = cmd->ExecuteReader();
				MessageBox::Show("Data Deleted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Connect->Close();
				managerMenu->Show();
				this->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				managerMenu->Show();
				this->Close();
			}

		}
		else
		{

			// Setting username
			String^ username = "Bank";
			int number = rand() % 10000;
			username += number.ToString();
			
			// Setting password
			String^ password = "Emp";
			number = rand() % 10000;
			password += number.ToString();
		
			// Setting Branch Name
			String^ branchname = "MINI PIGGY BANK ";

			//Setting Branch Address
			String^ branchaddress = "G.D COLLEGE BEGUSARI";

			// Setting account number
			String^ accountno = "2730";
			number = rand() % 10000;
			accountno += number.ToString();

			// Setting account holder name
			String^ accountholder = Namecustxt->Text;

			// Setting account balance
			int  accountbalance = 0;

			// Setting account date and time
			String^ datetime = label1->Text;

			// Setting customer id
			String^ customerid = "MP234";
			number = rand() % 10000;
			customerid += number.ToString();

			// Setting occupation
			String^ occupation= Educationcustxt->Text;

			// Setting ifsc code
			String^ ifsccode = "ABCD";
			number = rand() % 10000;
			ifsccode += number.ToString();

			// Setting micr code
			String^ micrcode = "8765";
			number = rand() % 10000;
			micrcode += number.ToString();

			// Setting Address
			String^ address = Adresscustxt->Text;
			

			// Connecting to database.
			String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";

			MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
			String^ Query;
			Query = "insert into Banking.Customer (Name,Father,Mob,Email,Aadhar,DOB,Education,Address,Username,Password) values ('" +
				Namecustxt->Text + "','" + Fathernamecustxt->Text + "','" +
				Mobcustxt->Text + "','" + Emailcustxt->Text + "', '" +
				Aadharcustxt->Text + "', '" + Dobcus->Text + "', '" +
				Educationcustxt->Text + "', '" + Adresscustxt->Text + "', '" +

				username + "', '" + password + "')";
			
			




			// Inserting into database code...
			MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
			MySqlDataReader^ reader;

			try
			{
				Connect->Open();
				reader = cmd->ExecuteReader();
				MessageBox::Show("Data saved successfully. Username = '" + username + "' and Password = '" + password + "'", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Connect->Close();
				Query = "insert into Banking.Account (Branchname,BAddress,Accountno,AccHolder,Accountbalance, Accountopendateandtime,Customerid,Occupation,IFSCcode,MICRcode,Address,Username,Password) values ('" +
					branchname + "','" + branchaddress + "','" +
					accountno + "','" + accountholder + "','" + accountbalance + "','" + datetime + "', '" +
					customerid + "', '" + occupation + "', '" +
					ifsccode + "','" + micrcode + "', '" + address + "', '" +

					username + "', '" + password + "')";
				

				// Inserting into database code...
				cmd = gcnew MySqlCommand(Query, Connect);
				try
				{
					Connect->Open();
					reader = cmd->ExecuteReader();
					// MessageBox::Show("Data saved successfully. Username = '" + username + "' and Password = '" + password + "'", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					Connect->Close();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					

				}


				managerMenu->Show();
				this->Close();
	
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				managerMenu->Show();
				this->Close();
			}
		}
	}


private: System::Void AddCustomer_Load(System::Object^ sender, System::EventArgs^ e) {
	bool Dataexist = false;

	if (Key == "FromDebitCard" || Key == "FromCreditCard" || Key == "FromChequeBook")
	{
		OKcusbtn->Visible = false;
		Submitcusbtn->Text = "Proceed";
		Submitcusbtn->Visible = true;
		Cancelcusbtn->Visible = true;
		Customerlabel->Text = "Customer Details";

		String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";
		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;

		// Write code for fetch data from database.

	}
	else if (Key == "FromUpdateMob")
	{
		OKcusbtn->Visible = false;
		Submitcusbtn->Text = "Update";
		Submitcusbtn->Visible = true;
		Cancelcusbtn->Visible = true;
		Customerlabel->Text = "Customer Details";

		String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";
		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;

		// Write code for fetch data from database.
	}
	else if (FormDetail == true)
	{
		Submitcusbtn->Visible = false;
		Cancelcusbtn->Visible = false;
		OKcusbtn->Visible = true;
		Customerlabel->Text = "Customer Details";

		String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";

		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;
		if (Flag == 1)
		{
			Query = "select * from Banking.Customer where Name='" + Data + "'";

		}
		else if (Flag == 2)
		{
			Query = "select * from Banking.Customer where Aadhar='" + Data + "'";

		}
		else if (Flag == 3)
		{
			Query = "select * from Banking.Customer where Mob='" + Data + "'";

		}
		// Checking data into database.
		MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
		MySqlDataReader^ reader;
		try
		{
			Connect->Open();
			reader = cmd->ExecuteReader();
			while (reader->Read())
			{

				Namecustxt->Text = reader->GetString(0);
				Fathernamecustxt->Text = reader->GetString(1);
				Mobcustxt->Text = reader->GetString(2);
				Emailcustxt->Text = reader->GetString(3);
				Aadharcustxt->Text = reader->GetString(4);
				Dobcus->Text = reader->GetString(5);
				Educationcustxt->Text = reader->GetString(6);
				Adresscustxt->Text = reader->GetString(7);
				Namecustxt->Enabled = false;
				Fathernamecustxt->Enabled = false;
				Mobcustxt->Enabled = false;
				Emailcustxt->Enabled = false;
				Aadharcustxt->Enabled = false;
				Dobcus->Enabled = false;
				Educationcustxt->Enabled = false;
				Adresscustxt->Enabled = false;

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
			managerMenu->Show();

		}
	}
	else if (FromEdit == true)
	{
		Submitcusbtn->Visible = true;
		OKcusbtn->Visible = false;
		Submitcusbtn->Text = "UPDATE";
		Cancelcusbtn->Visible = true;
		Customerlabel->Text = "EDIT CUSTOMER DETAILS";

		String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";
		MySqlDataReader^ reader;
		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;
		if (Flag == 1)
			Query = "select * from Banking.Customer where Name='" + Data + "'";
		else if (Flag == 2)
			Query = "select * from Banking.Customer where Aadhar='" + Data + "'";
		else if (Flag == 3)
			Query = "select * from Banking.Customer where Mob='" + Data + "'";

		// Checking data into database.
		MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);

		try
		{
			Connect->Open();
			reader = cmd->ExecuteReader();
			while (reader->Read())
			{

				Namecustxt->Text = reader->GetString(0);
				Fathernamecustxt->Text = reader->GetString(1);
				Mobcustxt->Text = reader->GetString(2);
				Emailcustxt->Text = reader->GetString(3);
				Aadharcustxt->Text = reader->GetString(4);
				Dobcus->Text = reader->GetString(5);
				Educationcustxt->Text = reader->GetString(6);
				Adresscustxt->Text = reader->GetString(7);
				Namecustxt->Enabled = true;
				Fathernamecustxt->Enabled = true;
				Mobcustxt->Enabled = true;
				Emailcustxt->Enabled = true;
				Aadharcustxt->Enabled = false;
				Dobcus->Enabled = true;
				Educationcustxt->Enabled = false;
				Adresscustxt->Enabled = true;

				Dataexist = true;

			}
			reader->Close();
			if (!Dataexist)
			{
				MessageBox::Show("Data Not Found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
				managerMenu->Show();

			}



		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
			managerMenu->Show();

		}

	}
	else if (FromDelete == true)
	{

	    Submitcusbtn->Visible = true;
	    OKcusbtn->Visible = false;
		Submitcusbtn->Text = "DELETE";
		Cancelcusbtn->Visible = true;
		Customerlabel->Text = "DELETE CUSTOMER DETAILS";

		String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";
		MySqlDataReader^ reader;
		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;
		if (Flag == 1)
			Query = "select * from Banking.Customer where Name='" + Data + "'";
		else if (Flag == 2)
			Query = "select * from Banking.Customer where Aadhar='" + Data + "'";
		else if (Flag == 3)
			Query = "select * from Banking.Customer where Mob='" + Data + "'";

		// Checking data into database.
		MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);

		try
		{
			Connect->Open();
			reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				Namecustxt->Text = reader->GetString(0);
				Fathernamecustxt->Text = reader->GetString(1);
				Mobcustxt->Text = reader->GetString(2);
				Emailcustxt->Text = reader->GetString(3);
				Aadharcustxt->Text = reader->GetString(4);
				Dobcus->Text = reader->GetString(5);
				Educationcustxt->Text = reader->GetString(6);
				Adresscustxt->Text = reader->GetString(7);
				Namecustxt->Enabled = false;
				Fathernamecustxt->Enabled = false;
				Mobcustxt->Enabled = false;
				Emailcustxt->Enabled = false;
				Aadharcustxt->Enabled = false;
				Dobcus->Enabled = false;
				Educationcustxt->Enabled = false;
				Adresscustxt->Enabled = false;

				
				Dataexist = true;

			}
			reader->Close();
			if (!Dataexist)
			{
				MessageBox::Show("Data Not Found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
				managerMenu->Show();

			}



		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
			managerMenu->Show();

		}

	}
	else
	{
		Submitcusbtn->Visible = true;
		Cancelcusbtn->Visible = true;
		OKcusbtn->Visible = false;
		if(Key == "FromKyc")
			Customerlabel->Text = "Update Kyc From";
		else
			Customerlabel->Text = "NEW CUSTOMER FORM";
	}







}
private: System::Void OKcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	managerMenu->Show();
	this->Close();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labeldate_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	DateTime datetime = DateTime::Now;
	this->label1->Text = datetime.ToString();
}
};
}






