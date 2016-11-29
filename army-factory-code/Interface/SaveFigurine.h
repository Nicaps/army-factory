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
	private: System::Windows::Forms::Button^  BtnClose;
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
			this->BtnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnClose
			// 
			this->BtnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnClose->Location = System::Drawing::Point(81, 98);
			this->BtnClose->Name = L"BtnClose";
			this->BtnClose->Size = System::Drawing::Size(75, 28);
			this->BtnClose->TabIndex = 0;
			this->BtnClose->Text = L"Fermer";
			this->BtnClose->UseVisualStyleBackColor = true;
			this->BtnClose->Click += gcnew System::EventHandler(this, &SaveFigurine::BtnClose_Click);
			// 
			// SaveFigurine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->BtnClose);
			this->Name = L"SaveFigurine";
			this->Text = L"SaveFigurine";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BtnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
