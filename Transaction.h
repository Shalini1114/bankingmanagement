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
	/// Summary for Transaction
	/// </summary>
	public ref class Transaction : public System::Windows::Forms::Form
	{
	public:
		Form^ ManagerMENu;
		bool FromTransaction;
	private: System::Windows::Forms::Button^ Oktransactionbtn;
	private: System::Windows::Forms::TextBox^ DateandTimeTxt;
	public:
		String^ Data;


		Transaction(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Transaction(Form^ obj, bool temp)

		{
			ManagerMENu = obj;
			FromTransaction = temp;
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}
		Transaction(Form^ obj, bool temp,String^ str)

		{
			ManagerMENu = obj;
			FromTransaction = temp;
			Data = str;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Transaction()
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
	private: System::Windows::Forms::TextBox^ Transactionidtxt;
	private: System::Windows::Forms::TextBox^ BalanceTxt;

	private: System::Windows::Forms::TextBox^ AmountTxt;
	private: System::Windows::Forms::TextBox^ Descriptiontxt;


	private: System::Windows::Forms::TextBox^ Typetxt;

	private: System::Windows::Forms::TextBox^ AccountNotxt;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Transaction::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Transactionidtxt = (gcnew System::Windows::Forms::TextBox());
			this->BalanceTxt = (gcnew System::Windows::Forms::TextBox());
			this->AmountTxt = (gcnew System::Windows::Forms::TextBox());
			this->Descriptiontxt = (gcnew System::Windows::Forms::TextBox());
			this->Typetxt = (gcnew System::Windows::Forms::TextBox());
			this->AccountNotxt = (gcnew System::Windows::Forms::TextBox());
			this->Oktransactionbtn = (gcnew System::Windows::Forms::Button());
			this->DateandTimeTxt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(311, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Transaction Details";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Red;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(136, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Transactionid";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(136, 388);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Balance";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Red;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(136, 334);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Description";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Red;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(136, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(218, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"TransactionType\t";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Red;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(136, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Amount";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Red;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(136, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 31);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Accountno";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Red;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(123, 119);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(191, 31);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Date and Time";
			this->label8->Click += gcnew System::EventHandler(this, &Transaction::label8_Click);
			// 
			// Transactionidtxt
			// 
			this->Transactionidtxt->Location = System::Drawing::Point(539, 71);
			this->Transactionidtxt->Name = L"Transactionidtxt";
			this->Transactionidtxt->Size = System::Drawing::Size(236, 20);
			this->Transactionidtxt->TabIndex = 8;
			this->Transactionidtxt->TextChanged += gcnew System::EventHandler(this, &Transaction::textBox1_TextChanged);
			// 
			// BalanceTxt
			// 
			this->BalanceTxt->Location = System::Drawing::Point(539, 399);
			this->BalanceTxt->Name = L"BalanceTxt";
			this->BalanceTxt->Size = System::Drawing::Size(236, 20);
			this->BalanceTxt->TabIndex = 9;
			// 
			// AmountTxt
			// 
			this->AmountTxt->Location = System::Drawing::Point(539, 239);
			this->AmountTxt->Name = L"AmountTxt";
			this->AmountTxt->Size = System::Drawing::Size(236, 20);
			this->AmountTxt->TabIndex = 10;
			// 
			// Descriptiontxt
			// 
			this->Descriptiontxt->Location = System::Drawing::Point(539, 345);
			this->Descriptiontxt->Name = L"Descriptiontxt";
			this->Descriptiontxt->Size = System::Drawing::Size(236, 20);
			this->Descriptiontxt->TabIndex = 11;
			// 
			// Typetxt
			// 
			this->Typetxt->Location = System::Drawing::Point(539, 290);
			this->Typetxt->Name = L"Typetxt";
			this->Typetxt->Size = System::Drawing::Size(236, 20);
			this->Typetxt->TabIndex = 12;
			// 
			// AccountNotxt
			// 
			this->AccountNotxt->Location = System::Drawing::Point(539, 177);
			this->AccountNotxt->Name = L"AccountNotxt";
			this->AccountNotxt->Size = System::Drawing::Size(236, 20);
			this->AccountNotxt->TabIndex = 13;
			// 
			// Oktransactionbtn
			// 
			this->Oktransactionbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Oktransactionbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Oktransactionbtn->ForeColor = System::Drawing::Color::Blue;
			this->Oktransactionbtn->Location = System::Drawing::Point(379, 425);
			this->Oktransactionbtn->Name = L"Oktransactionbtn";
			this->Oktransactionbtn->Size = System::Drawing::Size(164, 49);
			this->Oktransactionbtn->TabIndex = 14;
			this->Oktransactionbtn->Text = L"OK";
			this->Oktransactionbtn->UseVisualStyleBackColor = false;
			this->Oktransactionbtn->Click += gcnew System::EventHandler(this, &Transaction::Oktransactionbtn_Click);
			// 
			// DateandTimeTxt
			// 
			this->DateandTimeTxt->Location = System::Drawing::Point(539, 119);
			this->DateandTimeTxt->Name = L"DateandTimeTxt";
			this->DateandTimeTxt->Size = System::Drawing::Size(236, 20);
			this->DateandTimeTxt->TabIndex = 15;
			// 
			// Transaction
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(972, 489);
			this->Controls->Add(this->DateandTimeTxt);
			this->Controls->Add(this->Oktransactionbtn);
			this->Controls->Add(this->AccountNotxt);
			this->Controls->Add(this->Typetxt);
			this->Controls->Add(this->Descriptiontxt);
			this->Controls->Add(this->AmountTxt);
			this->Controls->Add(this->BalanceTxt);
			this->Controls->Add(this->Transactionidtxt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Transaction";
			this->Text = L"Transaction";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Transaction::Transaction_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Oktransactionbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	ManagerMENu->Show();
	this->Close();

}
private: System::Void Transaction_Load(System::Object^ sender, System::EventArgs^ e) {
	bool Dataexist = false;

	if (FromTransaction)
	{
		
		Oktransactionbtn->Visible = true;


		String^ ConnectString = "datasource=192.168.43.26;port=3306;username=abhishek;password=abhisha@11";

		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;
		Query = "select * from Banking.Transaction  where Accountno ='" + Data + "'";

		// Checking data into database.
		MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
		MySqlDataReader^ reader;
		try
		{
			Connect->Open();
			reader = cmd->ExecuteReader();
			while (reader->Read())
			{

				Transactionidtxt->Text = reader->GetString(0);
				DateandTimeTxt->Text = reader->GetString(1);
				AccountNotxt->Text = reader->GetString(2);
				AmountTxt->Text = reader->GetString(3);
				Typetxt->Text = reader->GetString(4);
				Descriptiontxt->Text = reader->GetString(5);
				BalanceTxt->Text = reader->GetString(6);
				
				Transactionidtxt->Enabled = false;
				DateandTimeTxt->Enabled = false;
				AccountNotxt->Enabled = false;
				AmountTxt->Enabled = false;
				Typetxt->Enabled = false;
				Descriptiontxt->Enabled = false;
				BalanceTxt->Enabled = false;
				

				Dataexist = true;
				





			}
			Connect->Close();
			if (!Dataexist)
				MessageBox::Show("Data Not Found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
			ManagerMENu->Show();

		}
	}






}
};
}
