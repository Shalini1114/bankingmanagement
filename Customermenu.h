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
	/// Summary for Customermenu
	/// </summary>
	public ref class Customermenu : public System::Windows::Forms::Form
	{
	public:
		Form^ EMenu;
		String^ Key;
		String^ RadioBtn;
		String^ ConnectString = "datasource=localhost;port=3306;username=Abhishek;password=Shalini";
	private: System::Windows::Forms::ComboBox^ Otherservicescombobox;
	public:
		MySqlConnection^ Connect = gcnew MySqlConnection(ConnectString);





		Customermenu(void)
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
		~Customermenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ Logoutcusbtn;
	private: System::Windows::Forms::Button^ Otherservicescusbtn;
	private: System::Windows::Forms::Button^ Transactioncusbtn;
	private: System::Windows::Forms::Button^ Dashboardcusbtn;
	private: System::Windows::Forms::ComboBox^ Transactioncombobox;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Otherservicescombobox = (gcnew System::Windows::Forms::ComboBox());
			this->Transactioncombobox = (gcnew System::Windows::Forms::ComboBox());
			this->Logoutcusbtn = (gcnew System::Windows::Forms::Button());
			this->Otherservicescusbtn = (gcnew System::Windows::Forms::Button());
			this->Transactioncusbtn = (gcnew System::Windows::Forms::Button());
			this->Dashboardcusbtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->Otherservicescombobox);
			this->panel1->Controls->Add(this->Transactioncombobox);
			this->panel1->Controls->Add(this->Logoutcusbtn);
			this->panel1->Controls->Add(this->Otherservicescusbtn);
			this->panel1->Controls->Add(this->Transactioncusbtn);
			this->panel1->Controls->Add(this->Dashboardcusbtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(941, 183);
			this->panel1->TabIndex = 0;
			// 
			// Otherservicescombobox
			// 
			this->Otherservicescombobox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Otherservicescombobox->FormattingEnabled = true;
			this->Otherservicescombobox->Location = System::Drawing::Point(483, 70);
			this->Otherservicescombobox->Name = L"Otherservicescombobox";
			this->Otherservicescombobox->Size = System::Drawing::Size(191, 24);
			this->Otherservicescombobox->TabIndex = 5;
			this->Otherservicescombobox->Text = L"Other services option";
			this->Otherservicescombobox->SelectedIndexChanged += gcnew System::EventHandler(this, &Customermenu::Otherservicescombobox_SelectedIndexChanged);
			// 
			// Transactioncombobox
			// 
			this->Transactioncombobox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Transactioncombobox->FormattingEnabled = true;
			this->Transactioncombobox->Location = System::Drawing::Point(251, 70);
			this->Transactioncombobox->Name = L"Transactioncombobox";
			this->Transactioncombobox->Size = System::Drawing::Size(150, 24);
			this->Transactioncombobox->TabIndex = 1;
			this->Transactioncombobox->Text = L"Transaction option";
			this->Transactioncombobox->SelectedIndexChanged += gcnew System::EventHandler(this, &Customermenu::Transactioncombobox_SelectedIndexChanged);
			// 
			// Logoutcusbtn
			// 
			this->Logoutcusbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Logoutcusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Logoutcusbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Logoutcusbtn->Location = System::Drawing::Point(766, 33);
			this->Logoutcusbtn->Name = L"Logoutcusbtn";
			this->Logoutcusbtn->Size = System::Drawing::Size(125, 40);
			this->Logoutcusbtn->TabIndex = 4;
			this->Logoutcusbtn->Text = L"LOGOUT";
			this->Logoutcusbtn->UseVisualStyleBackColor = false;
			this->Logoutcusbtn->Click += gcnew System::EventHandler(this, &Customermenu::Logoutcusbtn_Click);
			// 
			// Otherservicescusbtn
			// 
			this->Otherservicescusbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Otherservicescusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Otherservicescusbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Otherservicescusbtn->Location = System::Drawing::Point(483, 33);
			this->Otherservicescusbtn->Name = L"Otherservicescusbtn";
			this->Otherservicescusbtn->Size = System::Drawing::Size(191, 40);
			this->Otherservicescusbtn->TabIndex = 3;
			this->Otherservicescusbtn->Text = L"OTHER SERVICES";
			this->Otherservicescusbtn->UseVisualStyleBackColor = false;
			// 
			// Transactioncusbtn
			// 
			this->Transactioncusbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Transactioncusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Transactioncusbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Transactioncusbtn->Location = System::Drawing::Point(251, 33);
			this->Transactioncusbtn->Name = L"Transactioncusbtn";
			this->Transactioncusbtn->Size = System::Drawing::Size(150, 40);
			this->Transactioncusbtn->TabIndex = 2;
			this->Transactioncusbtn->Text = L"TRANSACTION";
			this->Transactioncusbtn->UseVisualStyleBackColor = false;
			// 
			// Dashboardcusbtn
			// 
			this->Dashboardcusbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Dashboardcusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dashboardcusbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Dashboardcusbtn->Location = System::Drawing::Point(38, 33);
			this->Dashboardcusbtn->Name = L"Dashboardcusbtn";
			this->Dashboardcusbtn->Size = System::Drawing::Size(135, 40);
			this->Dashboardcusbtn->TabIndex = 1;
			this->Dashboardcusbtn->Text = L"DASHBOARD";
			this->Dashboardcusbtn->UseVisualStyleBackColor = false;
			// 
			// Customermenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(941, 384);
			this->Controls->Add(this->panel1);
			this->Name = L"Customermenu";
			this->Text = L"Customermenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Customermenu::Customermenu_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Customermenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Transactioncombobox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Transactioncombobox->Text == "Withdraw")
			Key = "FromWithdraw";
		else if (Transactioncombobox->Text == "Deposit")
			Key = "FromDeposit";
		else if (Transactioncombobox->Text == "Details")
			Key = "FromDetails";
		else if (Transactioncombobox->Text == "Statement")
			Key = "FromStatement";




	}
private: System::Void Otherservicescombobox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Otherservicescombobox->Text == "Apply Debit Card")
		Key = "FromDebitcard";
	else if (Otherservicescombobox->Text == "Apply Credit Card")
		Key = "FromCreditcard";
	else if (Otherservicescombobox->Text == "Apply Cheque Book")
		Key = "FromChequebook";
	else if (Otherservicescombobox->Text == "Update Mobile No")
		Key = "FromMobileno";
	else if (Otherservicescombobox->Text == "Update Kyc")
		Key = "Fromkyc";

}
private: System::Void Logoutcusbtn_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
