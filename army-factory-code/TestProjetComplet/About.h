#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelWH40K;
	private: System::Windows::Forms::Label^  LabelVersion;
	private: System::Windows::Forms::Label^  LabelDate;
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
			this->LabelWH40K = (gcnew System::Windows::Forms::Label());
			this->LabelVersion = (gcnew System::Windows::Forms::Label());
			this->LabelDate = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LabelWH40K
			// 
			this->LabelWH40K->AutoSize = true;
			this->LabelWH40K->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelWH40K->Location = System::Drawing::Point(32, 80);
			this->LabelWH40K->Name = L"LabelWH40K";
			this->LabelWH40K->Size = System::Drawing::Size(221, 18);
			this->LabelWH40K->TabIndex = 0;
			this->LabelWH40K->Text = L"Warhammer 40K : Army Factory";
			// 
			// LabelVersion
			// 
			this->LabelVersion->AutoSize = true;
			this->LabelVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelVersion->Location = System::Drawing::Point(32, 110);
			this->LabelVersion->Name = L"LabelVersion";
			this->LabelVersion->Size = System::Drawing::Size(76, 17);
			this->LabelVersion->TabIndex = 1;
			this->LabelVersion->Text = L"Version1.0";
			// 
			// LabelDate
			// 
			this->LabelDate->AutoSize = true;
			this->LabelDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelDate->Location = System::Drawing::Point(32, 140);
			this->LabelDate->Name = L"LabelDate";
			this->LabelDate->Size = System::Drawing::Size(40, 18);
			this->LabelDate->TabIndex = 2;
			this->LabelDate->Text = L"2016";
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->LabelDate);
			this->Controls->Add(this->LabelVersion);
			this->Controls->Add(this->LabelWH40K);
			this->Name = L"About";
			this->Text = L"About";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
