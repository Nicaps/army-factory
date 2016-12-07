#include "SaveArmy.h"
#include "AddUnit.h"
#include "Cancel.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Interface {

	/// <summary>
	/// Summary for CreateArmy
	/// </summary>
	public ref class CreateArmy : public System::Windows::Forms::UserControl
	{
	public:
		CreateArmy(void)
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
		~CreateArmy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelCreateArmy;
	private: System::Windows::Forms::Label^  LabelNameArmy;
	private: System::Windows::Forms::Label^  LabelPointArmy;
	private: System::Windows::Forms::Button^  BtnAddUnit;

	private: System::Windows::Forms::Button^  BtnSaveArmy;
	private: System::Windows::Forms::Button^  BtnCancel;
	private: System::Windows::Forms::TextBox^  TBNameArmy;
	private: System::Windows::Forms::TextBox^  TBPointArmy;
	private: System::Windows::Forms::DataGridView^  DataArmy;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColUnitName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColRole;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColCost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColNumberFig;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColModify;
























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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->LabelCreateArmy = (gcnew System::Windows::Forms::Label());
			this->LabelNameArmy = (gcnew System::Windows::Forms::Label());
			this->LabelPointArmy = (gcnew System::Windows::Forms::Label());
			this->BtnAddUnit = (gcnew System::Windows::Forms::Button());
			this->BtnSaveArmy = (gcnew System::Windows::Forms::Button());
			this->BtnCancel = (gcnew System::Windows::Forms::Button());
			this->TBNameArmy = (gcnew System::Windows::Forms::TextBox());
			this->TBPointArmy = (gcnew System::Windows::Forms::TextBox());
			this->DataArmy = (gcnew System::Windows::Forms::DataGridView());
			this->ColUnitName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColRole = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColCost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColNumberFig = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColModify = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataArmy))->BeginInit();
			this->SuspendLayout();
			// 
			// LabelCreateArmy
			// 
			this->LabelCreateArmy->AutoSize = true;
			this->LabelCreateArmy->BackColor = System::Drawing::SystemColors::Control;
			this->LabelCreateArmy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelCreateArmy->Location = System::Drawing::Point(225, 5);
			this->LabelCreateArmy->Name = L"LabelCreateArmy";
			this->LabelCreateArmy->Size = System::Drawing::Size(430, 63);
			this->LabelCreateArmy->TabIndex = 0;
			this->LabelCreateArmy->Text = L"Créer son armée";
			// 
			// LabelNameArmy
			// 
			this->LabelNameArmy->AutoSize = true;
			this->LabelNameArmy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelNameArmy->Location = System::Drawing::Point(25, 100);
			this->LabelNameArmy->Name = L"LabelNameArmy";
			this->LabelNameArmy->Size = System::Drawing::Size(127, 20);
			this->LabelNameArmy->TabIndex = 1;
			this->LabelNameArmy->Text = L"Nom de l\'armée :";
			// 
			// LabelPointArmy
			// 
			this->LabelPointArmy->AutoSize = true;
			this->LabelPointArmy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->LabelPointArmy->Location = System::Drawing::Point(25, 130);
			this->LabelPointArmy->Name = L"LabelPointArmy";
			this->LabelPointArmy->Size = System::Drawing::Size(142, 20);
			this->LabelPointArmy->TabIndex = 2;
			this->LabelPointArmy->Text = L"Nombre de points :";
			// 
			// BtnAddUnit
			// 
			this->BtnAddUnit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->BtnAddUnit->Location = System::Drawing::Point(30, 490);
			this->BtnAddUnit->Name = L"BtnAddUnit";
			this->BtnAddUnit->Size = System::Drawing::Size(150, 30);
			this->BtnAddUnit->TabIndex = 3;
			this->BtnAddUnit->Text = L"Ajouter une unité";
			this->BtnAddUnit->UseVisualStyleBackColor = true;
			this->BtnAddUnit->Click += gcnew System::EventHandler(this, &CreateArmy::BtnAddUnit_Click);
			// 
			// BtnSaveArmy
			// 
			this->BtnSaveArmy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->BtnSaveArmy->Location = System::Drawing::Point(600, 490);
			this->BtnSaveArmy->Name = L"BtnSaveArmy";
			this->BtnSaveArmy->Size = System::Drawing::Size(150, 30);
			this->BtnSaveArmy->TabIndex = 5;
			this->BtnSaveArmy->Text = L"Enregistrer l\'armée";
			this->BtnSaveArmy->UseVisualStyleBackColor = true;
			this->BtnSaveArmy->Click += gcnew System::EventHandler(this, &CreateArmy::BtnSaveArmy_Click);
			// 
			// BtnCancel
			// 
			this->BtnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->BtnCancel->Location = System::Drawing::Point(755, 490);
			this->BtnCancel->Name = L"BtnCancel";
			this->BtnCancel->Size = System::Drawing::Size(100, 30);
			this->BtnCancel->TabIndex = 6;
			this->BtnCancel->Text = L"Annuler";
			this->BtnCancel->UseVisualStyleBackColor = true;
			this->BtnCancel->Click += gcnew System::EventHandler(this, &CreateArmy::BtnCancel_Click);
			// 
			// TBNameArmy
			// 
			this->TBNameArmy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->TBNameArmy->Location = System::Drawing::Point(185, 100);
			this->TBNameArmy->Name = L"TBNameArmy";
			this->TBNameArmy->Size = System::Drawing::Size(150, 26);
			this->TBNameArmy->TabIndex = 7;
			// 
			// TBPointArmy
			// 
			this->TBPointArmy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->TBPointArmy->Location = System::Drawing::Point(185, 130);
			this->TBPointArmy->Name = L"TBPointArmy";
			this->TBPointArmy->ReadOnly = true;
			this->TBPointArmy->Size = System::Drawing::Size(50, 26);
			this->TBPointArmy->TabIndex = 8;
			// 
			// DataArmy
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataArmy->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DataArmy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataArmy->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ColUnitName,
					this->ColRole, this->ColCost, this->ColNumberFig, this->ColModify
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DataArmy->DefaultCellStyle = dataGridViewCellStyle2;
			this->DataArmy->Location = System::Drawing::Point(42, 170);
			this->DataArmy->Name = L"DataArmy";
			this->DataArmy->Size = System::Drawing::Size(800, 200);
			this->DataArmy->TabIndex = 10;
			// 
			// ColUnitName
			// 
			this->ColUnitName->HeaderText = L"Nom de l\'unité";
			this->ColUnitName->Name = L"ColUnitName";
			this->ColUnitName->ReadOnly = true;
			this->ColUnitName->Width = 150;
			// 
			// ColRole
			// 
			this->ColRole->HeaderText = L"Rôle";
			this->ColRole->Name = L"ColRole";
			this->ColRole->ReadOnly = true;
			// 
			// ColCost
			// 
			this->ColCost->HeaderText = L"Coût";
			this->ColCost->Name = L"ColCost";
			this->ColCost->ReadOnly = true;
			// 
			// ColNumberFig
			// 
			this->ColNumberFig->HeaderText = L"Nombre d\'unités";
			this->ColNumberFig->Name = L"ColNumberFig";
			this->ColNumberFig->ReadOnly = true;
			this->ColNumberFig->Width = 150;
			// 
			// ColModify
			// 
			this->ColModify->HeaderText = L"Modifier l\'unité";
			this->ColModify->Name = L"ColModify";
			this->ColModify->ReadOnly = true;
			this->ColModify->Width = 150;
			// 
			// CreateArmy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->DataArmy);
			this->Controls->Add(this->TBPointArmy);
			this->Controls->Add(this->TBNameArmy);
			this->Controls->Add(this->BtnCancel);
			this->Controls->Add(this->BtnSaveArmy);
			this->Controls->Add(this->BtnAddUnit);
			this->Controls->Add(this->LabelPointArmy);
			this->Controls->Add(this->LabelNameArmy);
			this->Controls->Add(this->LabelCreateArmy);
			this->Name = L"CreateArmy";
			this->Size = System::Drawing::Size(885, 540);
			this->Load += gcnew System::EventHandler(this, &CreateArmy::CreateArmy_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataArmy))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateArmy_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void BtnSaveArmy_Click(System::Object^  sender, System::EventArgs^  e) {
		Form ^f = gcnew SaveArmy();
		f->Show();
	}
	private: System::Void BtnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		Form ^f = gcnew Cancel();
		TBNameArmy->Clear();
		TBPointArmy->Clear();
		DataArmy->Refresh();
		f->Show();
	}
	private: System::Void BtnAddUnit_Click(System::Object^  sender, System::EventArgs^  e) {
		Form ^f = gcnew AddUnit();
		f->Show();
	}
};
}
