#pragma once
#include"Mainmenu.h"

namespace bankingmanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for welcome
	/// </summary>
	public ref class welcome : public System::Windows::Forms::Form
	{
	public:
		welcome(void)
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
		~welcome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(welcome::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(307, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(588, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PIGGY MINI  BANK  OF INDIA";
			this->label1->Click += gcnew System::EventHandler(this, &welcome::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(35, 479);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"continue";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &welcome::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(881, 479);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 60);
			this->button2->TabIndex = 2;
			this->button2->Text = L"exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &welcome::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(561, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(334, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ak hath do aur do hathon se lo";
			// 
			// welcome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1112, 560);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"welcome";
			this->Text = L"welcome";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &welcome::welcome_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void welcome_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Mainmenu^ menu = gcnew Mainmenu;
		menu->Show();
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (MessageBox::Show("Are you sure want to exit ?", "Warning", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			Application::Exit();

	}


};
}
