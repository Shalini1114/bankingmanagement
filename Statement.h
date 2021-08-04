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
	/// Summary for Statement
	/// </summary>
	public ref class Statement : public System::Windows::Forms::Form
	{
	public:
		Form^ MAnagermenu;
		bool FromStatement;
		String^ Data;

	public:






	public:
		   
		Statement(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Statement(Form^ obj,bool temp)
		{
			MAnagermenu = obj;
			FromStatement = temp;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Statement(Form^ obj,bool temp ,String^ str)
		{
			MAnagermenu = obj;
			FromStatement = temp;
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
		~Statement()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	public:






	private: System::Windows::Forms::Button^ Openbtn;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Openbtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(22, 93);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(885, 324);
			this->dataGridView1->TabIndex = 0;
			// 
			// Openbtn
			// 
			this->Openbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Openbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Openbtn->ForeColor = System::Drawing::Color::Fuchsia;
			this->Openbtn->Location = System::Drawing::Point(359, 21);
			this->Openbtn->Name = L"Openbtn";
			this->Openbtn->Size = System::Drawing::Size(199, 38);
			this->Openbtn->TabIndex = 1;
			this->Openbtn->Text = L"Next";
			this->Openbtn->UseVisualStyleBackColor = false;
			this->Openbtn->Click += gcnew System::EventHandler(this, &Statement::Openbtn_Click);
			// 
			// Statement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(929, 514);
			this->Controls->Add(this->Openbtn);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Statement";
			this->Text = L"Statement";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Statement::Statement_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Statement_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ ConnectString = "datasource=localhost;port=3306;username=abhishek;password=abhisha@11";

		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);
		String^ Query;
		Query = "select Transactionid,DateandTime,Accountno,AmountWD,TransactionType,Description,Availablebalance from Banking.Transaction  where Accountno ='" + Data + "'";
		// Checking data into database.
		MySqlCommand^ cmd = gcnew MySqlCommand(Query, Connect);
		MySqlDataReader^ reader;
		try
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmd;
			DataTable^ table = gcnew DataTable();
			sda->Fill(table);
			BindingSource^ bSourse = gcnew BindingSource();
			bSourse->DataSource = table;
			dataGridView1->DataSource = bSourse;
			sda->Update(table);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
			MAnagermenu->Show();

		}
	}

	
private: System::Void Openbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	MAnagermenu->Show();
}
};
}
