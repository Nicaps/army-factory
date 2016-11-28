#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Interface {

	/// <summary>
	/// Summary for ViewArmy
	/// </summary>
	public ref class ViewArmy : public System::Windows::Forms::UserControl
	{
	public:
		ViewArmy(void)
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
		~ViewArmy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelViewArmy;
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
			this->LabelViewArmy = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LabelViewArmy
			// 
			this->LabelViewArmy->AutoSize = true;
			this->LabelViewArmy->BackColor = System::Drawing::SystemColors::Control;
			this->LabelViewArmy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelViewArmy->Location = System::Drawing::Point(225, 5);
			this->LabelViewArmy->Name = L"LabelViewArmy";
			this->LabelViewArmy->Size = System::Drawing::Size(416, 63);
			this->LabelViewArmy->TabIndex = 1;
			this->LabelViewArmy->Text = L"Voir ses armées";
			// 
			// ViewArmy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->LabelViewArmy);
			this->Name = L"ViewArmy";
			this->Size = System::Drawing::Size(885, 540);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
