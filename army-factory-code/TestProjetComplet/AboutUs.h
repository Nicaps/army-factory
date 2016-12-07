#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutUs
	/// </summary>
	public ref class AboutUs : public System::Windows::Forms::Form
	{
	public:
		AboutUs(void)
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
		~AboutUs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelName1;
	private: System::Windows::Forms::Label^  LabelName2;
	private: System::Windows::Forms::Label^  LabelFunction;
	protected:

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
			this->LabelName1 = (gcnew System::Windows::Forms::Label());
			this->LabelName2 = (gcnew System::Windows::Forms::Label());
			this->LabelFunction = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LabelName1
			// 
			this->LabelName1->AutoSize = true;
			this->LabelName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelName1->Location = System::Drawing::Point(35, 100);
			this->LabelName1->Name = L"LabelName1";
			this->LabelName1->Size = System::Drawing::Size(106, 17);
			this->LabelName1->TabIndex = 0;
			this->LabelName1->Text = L"CORNET Alexis";
			// 
			// LabelName2
			// 
			this->LabelName2->AutoSize = true;
			this->LabelName2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelName2->Location = System::Drawing::Point(35, 120);
			this->LabelName2->Name = L"LabelName2";
			this->LabelName2->Size = System::Drawing::Size(113, 17);
			this->LabelName2->TabIndex = 1;
			this->LabelName2->Text = L"APERCE Nicolas";
			// 
			// LabelFunction
			// 
			this->LabelFunction->AutoSize = true;
			this->LabelFunction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelFunction->Location = System::Drawing::Point(35, 140);
			this->LabelFunction->Name = L"LabelFunction";
			this->LabelFunction->Size = System::Drawing::Size(215, 17);
			this->LabelFunction->TabIndex = 2;
			this->LabelFunction->Text = L"Étudiants UQAC - Automne 2016";
			// 
			// AboutUs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->LabelFunction);
			this->Controls->Add(this->LabelName2);
			this->Controls->Add(this->LabelName1);
			this->Name = L"AboutUs";
			this->Text = L"AboutUs";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
