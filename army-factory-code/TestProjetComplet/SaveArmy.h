#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SaveArmy
	/// </summary>
	public ref class SaveArmy : public System::Windows::Forms::Form
	{
	public:
		SaveArmy(void)
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
		~SaveArmy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelSaveArmy;
	private: System::Windows::Forms::Button^  BtnOk;
	protected:

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
			this->LabelSaveArmy = (gcnew System::Windows::Forms::Label());
			this->BtnOk = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelSaveArmy
			// 
			this->LabelSaveArmy->AutoSize = true;
			this->LabelSaveArmy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->LabelSaveArmy->Location = System::Drawing::Point(48, 50);
			this->LabelSaveArmy->Name = L"LabelSaveArmy";
			this->LabelSaveArmy->Size = System::Drawing::Size(331, 20);
			this->LabelSaveArmy->TabIndex = 0;
			this->LabelSaveArmy->Text = L"Votre armée a été enregistrée avec succès";
			// 
			// BtnOk
			// 
			this->BtnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->BtnOk->Location = System::Drawing::Point(175, 130);
			this->BtnOk->Name = L"BtnOk";
			this->BtnOk->Size = System::Drawing::Size(75, 28);
			this->BtnOk->TabIndex = 1;
			this->BtnOk->Text = L"Valider";
			this->BtnOk->UseVisualStyleBackColor = true;
			this->BtnOk->Click += gcnew System::EventHandler(this, &SaveArmy::BtnOk_Click);
			// 
			// SaveArmy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 261);
			this->Controls->Add(this->BtnOk);
			this->Controls->Add(this->LabelSaveArmy);
			this->Name = L"SaveArmy";
			this->Text = L"SaveArmy";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnOk_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
