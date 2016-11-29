#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Interface {

	/// <summary>
	/// Summary for HomePage
	/// </summary>
	public ref class HomePage : public System::Windows::Forms::UserControl
	{
	public:
		HomePage(void)
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
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelHomePage;
	private: System::Windows::Forms::Button^  BtnLeave;


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
			this->LabelHomePage = (gcnew System::Windows::Forms::Label());
			this->BtnLeave = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelHomePage
			// 
			this->LabelHomePage->AutoSize = true;
			this->LabelHomePage->BackColor = System::Drawing::SystemColors::Control;
			this->LabelHomePage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelHomePage->Location = System::Drawing::Point(350, 5);
			this->LabelHomePage->Name = L"LabelHomePage";
			this->LabelHomePage->Size = System::Drawing::Size(203, 63);
			this->LabelHomePage->TabIndex = 1;
			this->LabelHomePage->Text = L"Accueil";
			// 
			// BtnLeave
			// 
			this->BtnLeave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnLeave->Location = System::Drawing::Point(650, 475);
			this->BtnLeave->Name = L"BtnLeave";
			this->BtnLeave->Size = System::Drawing::Size(200, 28);
			this->BtnLeave->TabIndex = 3;
			this->BtnLeave->Text = L"Quitter l\'application";
			this->BtnLeave->UseVisualStyleBackColor = true;
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->BtnLeave);
			this->Controls->Add(this->LabelHomePage);
			this->Name = L"HomePage";
			this->Size = System::Drawing::Size(885, 540);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
