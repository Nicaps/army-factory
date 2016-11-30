#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SaveFigurine
	/// </summary>
	public ref class SaveFigurine : public System::Windows::Forms::Form
	{
	public:
		SaveFigurine(void)
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
		~SaveFigurine()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BtnOk;
	protected:
	private: System::Windows::Forms::Label^  LabelSaveFigurine;

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
			this->BtnOk = (gcnew System::Windows::Forms::Button());
			this->LabelSaveFigurine = (gcnew System::Windows::Forms::Label());
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
			this->BtnOk->Click += gcnew System::EventHandler(this, &SaveFigurine::BtnOk_Click);
			// 
			// LabelSaveFigurine
			// 
			this->LabelSaveFigurine->AutoSize = true;
			this->LabelSaveFigurine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->LabelSaveFigurine->Location = System::Drawing::Point(52, 76);
			this->LabelSaveFigurine->Name = L"LabelSaveFigurine";
			this->LabelSaveFigurine->Size = System::Drawing::Size(339, 20);
			this->LabelSaveFigurine->TabIndex = 2;
			this->LabelSaveFigurine->Text = L"Votre figurine a été enregistrée avec succès";
			// 
			// SaveFigurine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 261);
			this->Controls->Add(this->BtnOk);
			this->Controls->Add(this->LabelSaveFigurine);
			this->Name = L"SaveFigurine";
			this->Text = L"SaveFigurine";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void BtnOk_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
