#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Interface {

	/// <summary>
	/// Summary for ViewFigurine
	/// </summary>
	public ref class ViewFigurine : public System::Windows::Forms::UserControl
	{
	public:
		ViewFigurine(void)
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
		~ViewFigurine()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelViewFig;
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
			this->LabelViewFig = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LabelViewFig
			// 
			this->LabelViewFig->AutoSize = true;
			this->LabelViewFig->BackColor = System::Drawing::SystemColors::Control;
			this->LabelViewFig->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelViewFig->Location = System::Drawing::Point(225, 5);
			this->LabelViewFig->Name = L"LabelViewFig";
			this->LabelViewFig->Size = System::Drawing::Size(442, 63);
			this->LabelViewFig->TabIndex = 1;
			this->LabelViewFig->Text = L"Voir ses figurines";
			// 
			// ViewFigurine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->LabelViewFig);
			this->Name = L"ViewFigurine";
			this->Size = System::Drawing::Size(885, 540);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
