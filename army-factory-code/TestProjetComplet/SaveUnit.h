#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SaveUnit
	/// </summary>
	public ref class SaveUnit : public System::Windows::Forms::Form
	{
	public:
		SaveUnit(void)
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
		~SaveUnit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BtnOk;
	protected:
	private: System::Windows::Forms::Label^  LabelSaveUnit;

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
			this->BtnOk = (gcnew System::Windows::Forms::Button());
			this->LabelSaveUnit = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnOk
			// 
			this->BtnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->BtnOk->Location = System::Drawing::Point(179, 156);
			this->BtnOk->Name = L"BtnOk";
			this->BtnOk->Size = System::Drawing::Size(75, 28);
			this->BtnOk->TabIndex = 3;
			this->BtnOk->Text = L"Valider";
			this->BtnOk->UseVisualStyleBackColor = true;
			this->BtnOk->Click += gcnew System::EventHandler(this, &SaveUnit::BtnOk_Click);
			// 
			// LabelSaveUnit
			// 
			this->LabelSaveUnit->AutoSize = true;
			this->LabelSaveUnit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->LabelSaveUnit->Location = System::Drawing::Point(52, 76);
			this->LabelSaveUnit->Name = L"LabelSaveUnit";
			this->LabelSaveUnit->Size = System::Drawing::Size(320, 20);
			this->LabelSaveUnit->TabIndex = 2;
			this->LabelSaveUnit->Text = L"Votre unité a été enregistrée avec succès";
			// 
			// SaveUnit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 261);
			this->Controls->Add(this->BtnOk);
			this->Controls->Add(this->LabelSaveUnit);
			this->Name = L"SaveUnit";
			this->Text = L"SaveUnit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnOk_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
