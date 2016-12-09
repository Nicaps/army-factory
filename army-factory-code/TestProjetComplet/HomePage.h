#include "CreateArmy.h"

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
	private:
		Interface::CreateArmy^ NArmy;
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
	private: System::Windows::Forms::Label^  LabelMsg;
	private: System::Windows::Forms::Label^  LblWH40K;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
			this->LabelHomePage = (gcnew System::Windows::Forms::Label());
			this->BtnLeave = (gcnew System::Windows::Forms::Button());
			this->LabelMsg = (gcnew System::Windows::Forms::Label());
			this->LblWH40K = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LabelHomePage
			// 
			this->LabelHomePage->AutoSize = true;
			this->LabelHomePage->BackColor = System::Drawing::SystemColors::Control;
			this->LabelHomePage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelHomePage->Location = System::Drawing::Point(320, 5);
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
			this->BtnLeave->Click += gcnew System::EventHandler(this, &HomePage::BtnLeave_Click);
			// 
			// LabelMsg
			// 
			this->LabelMsg->AutoSize = true;
			this->LabelMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelMsg->Location = System::Drawing::Point(198, 125);
			this->LabelMsg->Name = L"LabelMsg";
			this->LabelMsg->Size = System::Drawing::Size(488, 25);
			this->LabelMsg->TabIndex = 4;
			this->LabelMsg->Text = L"Bienvenue sur votre éditeur d\'armées Warhammer 40K";
			// 
			// LblWH40K
			// 
			this->LblWH40K->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LblWH40K.Image")));
			this->LblWH40K->Location = System::Drawing::Point(250, 220);
			this->LblWH40K->Name = L"LblWH40K";
			this->LblWH40K->Size = System::Drawing::Size(400, 100);
			this->LblWH40K->TabIndex = 5;
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->LblWH40K);
			this->Controls->Add(this->LabelMsg);
			this->Controls->Add(this->BtnLeave);
			this->Controls->Add(this->LabelHomePage);
			this->Name = L"HomePage";
			this->Size = System::Drawing::Size(885, 540);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnLeave_Click(System::Object^  sender, System::EventArgs^  e) {
		this->ParentForm->Close();
	}
	private: System::Void LLabelEditArmy_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		this->ParentForm->Controls->Clear();
		NArmy = gcnew Interface::CreateArmy;
		this->ParentForm->Controls->Add(NArmy);
	}
	};
}
