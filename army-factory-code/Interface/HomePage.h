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
			this->SuspendLayout();
			// 
			// LabelHomePage
			// 
			this->LabelHomePage->AutoSize = true;
			this->LabelHomePage->BackColor = System::Drawing::SystemColors::Control;
			this->LabelHomePage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelHomePage->Location = System::Drawing::Point(225, 5);
			this->LabelHomePage->Name = L"LabelHomePage";
			this->LabelHomePage->Size = System::Drawing::Size(203, 63);
			this->LabelHomePage->TabIndex = 1;
			this->LabelHomePage->Text = L"Accueil";
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->LabelHomePage);
			this->Name = L"HomePage";
			this->Size = System::Drawing::Size(885, 540);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
