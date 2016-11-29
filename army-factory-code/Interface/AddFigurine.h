#pragma once
#include "SaveFigurine.h"
#include "AddEquipment.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddFigurine
	/// </summary>
	public ref class AddFigurine : public System::Windows::Forms::Form
	{
	public:
		AddFigurine(void)
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
		~AddFigurine()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelName;
	private: System::Windows::Forms::Label^  LabelType;
	protected:

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  BtnAddEquip;

	private: System::Windows::Forms::Button^  BtnOk;
	private: System::Windows::Forms::TextBox^  TBName;
	private: System::Windows::Forms::ComboBox^  CBType;
	private: System::Windows::Forms::Label^  LabelEquip1;
	private: System::Windows::Forms::Label^  LabelEquip2;
	private: System::Windows::Forms::TextBox^  TBEquip1Name;
	private: System::Windows::Forms::TextBox^  TBEquip1Type;
	private: System::Windows::Forms::TextBox^  TBEquip2Name;
	private: System::Windows::Forms::TextBox^  TBEquip2Type;





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
			this->LabelName = (gcnew System::Windows::Forms::Label());
			this->LabelType = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BtnAddEquip = (gcnew System::Windows::Forms::Button());
			this->BtnOk = (gcnew System::Windows::Forms::Button());
			this->TBName = (gcnew System::Windows::Forms::TextBox());
			this->CBType = (gcnew System::Windows::Forms::ComboBox());
			this->LabelEquip1 = (gcnew System::Windows::Forms::Label());
			this->LabelEquip2 = (gcnew System::Windows::Forms::Label());
			this->TBEquip1Name = (gcnew System::Windows::Forms::TextBox());
			this->TBEquip1Type = (gcnew System::Windows::Forms::TextBox());
			this->TBEquip2Name = (gcnew System::Windows::Forms::TextBox());
			this->TBEquip2Type = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// LabelName
			// 
			this->LabelName->AutoSize = true;
			this->LabelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelName->Location = System::Drawing::Point(35, 50);
			this->LabelName->Name = L"LabelName";
			this->LabelName->Size = System::Drawing::Size(50, 20);
			this->LabelName->TabIndex = 0;
			this->LabelName->Text = L"Nom :";
			// 
			// LabelType
			// 
			this->LabelType->AutoSize = true;
			this->LabelType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelType->Location = System::Drawing::Point(35, 80);
			this->LabelType->Name = L"LabelType";
			this->LabelType->Size = System::Drawing::Size(51, 20);
			this->LabelType->TabIndex = 1;
			this->LabelType->Text = L"Type :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Équipements :";
			// 
			// BtnAddEquip
			// 
			this->BtnAddEquip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnAddEquip->Location = System::Drawing::Point(35, 140);
			this->BtnAddEquip->Name = L"BtnAddEquip";
			this->BtnAddEquip->Size = System::Drawing::Size(200, 28);
			this->BtnAddEquip->TabIndex = 4;
			this->BtnAddEquip->Text = L"Ajouter un équipement";
			this->BtnAddEquip->UseVisualStyleBackColor = true;
			this->BtnAddEquip->Click += gcnew System::EventHandler(this, &AddFigurine::BtnAddEquip_Click);
			// 
			// BtnOk
			// 
			this->BtnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnOk->Location = System::Drawing::Point(475, 300);
			this->BtnOk->Name = L"BtnOk";
			this->BtnOk->Size = System::Drawing::Size(75, 28);
			this->BtnOk->TabIndex = 6;
			this->BtnOk->Text = L"Valider";
			this->BtnOk->UseVisualStyleBackColor = true;
			this->BtnOk->Click += gcnew System::EventHandler(this, &AddFigurine::BtnOk_Click);
			// 
			// TBName
			// 
			this->TBName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBName->Location = System::Drawing::Point(100, 50);
			this->TBName->Name = L"TBName";
			this->TBName->Size = System::Drawing::Size(100, 23);
			this->TBName->TabIndex = 8;
			// 
			// CBType
			// 
			this->CBType->FormattingEnabled = true;
			this->CBType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Véhicule", L"Non véhicule" });
			this->CBType->Location = System::Drawing::Point(100, 82);
			this->CBType->Name = L"CBType";
			this->CBType->Size = System::Drawing::Size(120, 21);
			this->CBType->TabIndex = 9;
			// 
			// LabelEquip1
			// 
			this->LabelEquip1->AutoSize = true;
			this->LabelEquip1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelEquip1->Location = System::Drawing::Point(80, 220);
			this->LabelEquip1->Name = L"LabelEquip1";
			this->LabelEquip1->Size = System::Drawing::Size(96, 18);
			this->LabelEquip1->TabIndex = 10;
			this->LabelEquip1->Text = L"équipement 1";
			// 
			// LabelEquip2
			// 
			this->LabelEquip2->AutoSize = true;
			this->LabelEquip2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelEquip2->Location = System::Drawing::Point(80, 260);
			this->LabelEquip2->Name = L"LabelEquip2";
			this->LabelEquip2->Size = System::Drawing::Size(96, 18);
			this->LabelEquip2->TabIndex = 11;
			this->LabelEquip2->Text = L"équipement 2";
			// 
			// TBEquip1Name
			// 
			this->TBEquip1Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBEquip1Name->Location = System::Drawing::Point(200, 220);
			this->TBEquip1Name->Name = L"TBEquip1Name";
			this->TBEquip1Name->ReadOnly = true;
			this->TBEquip1Name->Size = System::Drawing::Size(100, 23);
			this->TBEquip1Name->TabIndex = 12;
			this->TBEquip1Name->Tag = L"";
			this->TBEquip1Name->Text = L"Nom";
			// 
			// TBEquip1Type
			// 
			this->TBEquip1Type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBEquip1Type->Location = System::Drawing::Point(320, 220);
			this->TBEquip1Type->Name = L"TBEquip1Type";
			this->TBEquip1Type->ReadOnly = true;
			this->TBEquip1Type->Size = System::Drawing::Size(100, 23);
			this->TBEquip1Type->TabIndex = 13;
			this->TBEquip1Type->Text = L"Type";
			// 
			// TBEquip2Name
			// 
			this->TBEquip2Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBEquip2Name->Location = System::Drawing::Point(200, 260);
			this->TBEquip2Name->Name = L"TBEquip2Name";
			this->TBEquip2Name->ReadOnly = true;
			this->TBEquip2Name->Size = System::Drawing::Size(100, 23);
			this->TBEquip2Name->TabIndex = 14;
			this->TBEquip2Name->Text = L"Nom";
			// 
			// TBEquip2Type
			// 
			this->TBEquip2Type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBEquip2Type->Location = System::Drawing::Point(320, 260);
			this->TBEquip2Type->Name = L"TBEquip2Type";
			this->TBEquip2Type->ReadOnly = true;
			this->TBEquip2Type->Size = System::Drawing::Size(100, 23);
			this->TBEquip2Type->TabIndex = 15;
			this->TBEquip2Type->Text = L"Type";
			// 
			// AddFigurine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->TBEquip2Type);
			this->Controls->Add(this->TBEquip2Name);
			this->Controls->Add(this->TBEquip1Type);
			this->Controls->Add(this->TBEquip1Name);
			this->Controls->Add(this->LabelEquip2);
			this->Controls->Add(this->LabelEquip1);
			this->Controls->Add(this->CBType);
			this->Controls->Add(this->TBName);
			this->Controls->Add(this->BtnOk);
			this->Controls->Add(this->BtnAddEquip);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->LabelType);
			this->Controls->Add(this->LabelName);
			this->Name = L"AddFigurine";
			this->Text = L"AddFigurine";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void BtnOk_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	Form ^f = gcnew SaveFigurine();
	f->Show();
}
private: System::Void BtnAddEquip_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = gcnew AddEquipment();
	f->Show();
}
};
}
