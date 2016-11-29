#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cancel
	/// </summary>
	public ref class Cancel : public System::Windows::Forms::Form
	{
	public:
		Cancel(void)
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
		~Cancel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BtnLeave;
	private: System::Windows::Forms::Label^  LabelCancel;
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
			this->BtnLeave = (gcnew System::Windows::Forms::Button());
			this->LabelCancel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnLeave
			// 
			this->BtnLeave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnLeave->Location = System::Drawing::Point(105, 130);
			this->BtnLeave->Name = L"BtnLeave";
			this->BtnLeave->Size = System::Drawing::Size(75, 28);
			this->BtnLeave->TabIndex = 0;
			this->BtnLeave->Text = L"Fermer";
			this->BtnLeave->UseVisualStyleBackColor = true;
			this->BtnLeave->Click += gcnew System::EventHandler(this, &Cancel::BtnLeave_Click);
			// 
			// LabelCancel
			// 
			this->LabelCancel->AutoSize = true;
			this->LabelCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelCancel->Location = System::Drawing::Point(75, 60);
			this->LabelCancel->Name = L"LabelCancel";
			this->LabelCancel->Size = System::Drawing::Size(128, 18);
			this->LabelCancel->TabIndex = 1;
			this->LabelCancel->Text = L"Opération annulée";
			// 
			// Cancel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->LabelCancel);
			this->Controls->Add(this->BtnLeave);
			this->Name = L"Cancel";
			this->Text = L"Cancel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnLeave_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
