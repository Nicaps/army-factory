#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
#include "Connexion.h"
//#include "Unit.h"
#include "AddFigurine.h"
#include "AddEquipment.h"
#include "SaveUnit.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddUnit
	/// </summary>
	public ref class AddUnit : public System::Windows::Forms::Form
	{
	public:
		AddUnit(void)
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
		~AddUnit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelAddUnit;
	private: System::Windows::Forms::Label^  LabelName;
	private: System::Windows::Forms::Label^  LabelRole;
	private: System::Windows::Forms::Label^  LabelNumPoints;
	private: System::Windows::Forms::Label^  LabelLengthUnit;
	private: System::Windows::Forms::Label^  LabelModelUnit;
	private: System::Windows::Forms::ComboBox^  CBModelUnit;
	private: System::Windows::Forms::TextBox^  TBNumPoint;
	private: System::Windows::Forms::ComboBox^  CBRole;
	private: System::Windows::Forms::TextBox^  TBNameUnit;
	private: System::Windows::Forms::Button^  BtnAddFig;
	private: System::Windows::Forms::Button^  BtnAddEquip;
	private: System::Windows::Forms::Button^  BtnOk;
	private: System::Windows::Forms::Label^  LabelEquipList;
	private: System::Windows::Forms::ComboBox^  CBEquipList;

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
			this->LabelAddUnit = (gcnew System::Windows::Forms::Label());
			this->LabelName = (gcnew System::Windows::Forms::Label());
			this->LabelRole = (gcnew System::Windows::Forms::Label());
			this->LabelNumPoints = (gcnew System::Windows::Forms::Label());
			this->LabelLengthUnit = (gcnew System::Windows::Forms::Label());
			this->LabelModelUnit = (gcnew System::Windows::Forms::Label());
			this->CBModelUnit = (gcnew System::Windows::Forms::ComboBox());
			this->TBNumPoint = (gcnew System::Windows::Forms::TextBox());
			this->CBRole = (gcnew System::Windows::Forms::ComboBox());
			this->TBNameUnit = (gcnew System::Windows::Forms::TextBox());
			this->BtnAddFig = (gcnew System::Windows::Forms::Button());
			this->BtnAddEquip = (gcnew System::Windows::Forms::Button());
			this->BtnOk = (gcnew System::Windows::Forms::Button());
			this->LabelEquipList = (gcnew System::Windows::Forms::Label());
			this->CBEquipList = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// LabelAddUnit
			// 
			this->LabelAddUnit->AutoSize = true;
			this->LabelAddUnit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->LabelAddUnit->Location = System::Drawing::Point(175, 0);
			this->LabelAddUnit->Name = L"LabelAddUnit";
			this->LabelAddUnit->Size = System::Drawing::Size(435, 63);
			this->LabelAddUnit->TabIndex = 0;
			this->LabelAddUnit->Text = L"Ajouter une unité";
			// 
			// LabelName
			// 
			this->LabelName->AutoSize = true;
			this->LabelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->LabelName->Location = System::Drawing::Point(30, 180);
			this->LabelName->Name = L"LabelName";
			this->LabelName->Size = System::Drawing::Size(117, 20);
			this->LabelName->TabIndex = 1;
			this->LabelName->Text = L"Nom de l\'unité :";
			// 
			// LabelRole
			// 
			this->LabelRole->AutoSize = true;
			this->LabelRole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->LabelRole->Location = System::Drawing::Point(30, 220);
			this->LabelRole->Name = L"LabelRole";
			this->LabelRole->Size = System::Drawing::Size(144, 20);
			this->LabelRole->TabIndex = 2;
			this->LabelRole->Text = L"Rôle dans l\'armée :";
			// 
			// LabelNumPoints
			// 
			this->LabelNumPoints->AutoSize = true;
			this->LabelNumPoints->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->LabelNumPoints->Location = System::Drawing::Point(30, 260);
			this->LabelNumPoints->Name = L"LabelNumPoints";
			this->LabelNumPoints->Size = System::Drawing::Size(142, 20);
			this->LabelNumPoints->TabIndex = 3;
			this->LabelNumPoints->Text = L"Nombre de points :";
			// 
			// LabelLengthUnit
			// 
			this->LabelLengthUnit->AutoSize = true;
			this->LabelLengthUnit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->LabelLengthUnit->Location = System::Drawing::Point(30, 300);
			this->LabelLengthUnit->Name = L"LabelLengthUnit";
			this->LabelLengthUnit->Size = System::Drawing::Size(120, 20);
			this->LabelLengthUnit->TabIndex = 4;
			this->LabelLengthUnit->Text = L"Taille de l\'unité :";
			// 
			// LabelModelUnit
			// 
			this->LabelModelUnit->AutoSize = true;
			this->LabelModelUnit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->LabelModelUnit->Location = System::Drawing::Point(30, 140);
			this->LabelModelUnit->Name = L"LabelModelUnit";
			this->LabelModelUnit->Size = System::Drawing::Size(120, 20);
			this->LabelModelUnit->TabIndex = 5;
			this->LabelModelUnit->Text = L"Modèle d\'unité :";
			// 
			// CBModelUnit
			// 
			this->CBModelUnit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->CBModelUnit->FormattingEnabled = true;
<<<<<<< HEAD
			this->CBModelUnit->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Unité1", L"Unité2" });
			///TODO

			//this->CBModelUnit->Items->AddRange(Connexion::Connexion::selectBaseUnits());

			//std::vector<BLL::Unit *> units = Connexion::Connexion::selectBaseUnits();
			//array<System::Object ^> ^arr = gcnew cli::array< System::Object^  >(units.size()) {};
			//System::Object ^obj;
			//for (auto &un : units) {
				//obj = static_cast<System::Object^>(un->getName().c_str());
				//obj = (System::Object^)msclr::marshal::PtrToStructure(un, obj);
				//this->CBModelUnit->Items->Add(gcnew System::Object()^ {un});
				//obj = msclr::interop::marshal_as<System::Object^>(un->getName());
				//arr->Add(obj);
			//}

=======
			//this->CBModelUnit->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Unité1", L"Unité2" });
>>>>>>> ca0ad99a12dc7ce255df099e1994f3bfeee5e9b1
			this->CBModelUnit->Location = System::Drawing::Point(186, 138);
			this->CBModelUnit->Name = L"CBModelUnit";
			this->CBModelUnit->Size = System::Drawing::Size(121, 26);
			this->CBModelUnit->TabIndex = 7;
			
			BLL::Unit unite;
			System::Object^ obj;
			//obj = msclr::interop::marshal_as<System::Object^>(
			//obj = gcnew cli::array<System::Object^>;
			obj = msclr::interop::marshal_as<System::Object^>(unite.getName());
			this->CBModelUnit->Items->AddRange(gcnew cli::array<System::Object^> {obj});

			// 
			// TBNumPoint
			// 
			this->TBNumPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TBNumPoint->Location = System::Drawing::Point(186, 258);
			this->TBNumPoint->Name = L"TBNumPoint";
			this->TBNumPoint->ReadOnly = true;
			this->TBNumPoint->Size = System::Drawing::Size(250, 24);
			this->TBNumPoint->TabIndex = 8;
			// 
			// CBRole
			// 
			this->CBRole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->CBRole->FormattingEnabled = true;
			this->CBRole->Location = System::Drawing::Point(186, 218);
			this->CBRole->Name = L"CBRole";
			this->CBRole->Size = System::Drawing::Size(121, 26);
			this->CBRole->TabIndex = 9;
			// 
			// TBNameUnit
			// 
			this->TBNameUnit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TBNameUnit->Location = System::Drawing::Point(186, 178);
			this->TBNameUnit->Name = L"TBNameUnit";
			this->TBNameUnit->Size = System::Drawing::Size(121, 24);
			this->TBNameUnit->TabIndex = 10;
			// 
			// BtnAddFig
			// 
			this->BtnAddFig->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->BtnAddFig->Location = System::Drawing::Point(105, 450);
			this->BtnAddFig->Name = L"BtnAddFig";
			this->BtnAddFig->Size = System::Drawing::Size(180, 30);
			this->BtnAddFig->TabIndex = 11;
			this->BtnAddFig->Text = L"Ajouter une figurine";
			this->BtnAddFig->UseVisualStyleBackColor = true;
			this->BtnAddFig->Click += gcnew System::EventHandler(this, &AddUnit::BtnAddFig_Click);
			// 
			// BtnAddEquip
			// 
			this->BtnAddEquip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->BtnAddEquip->Location = System::Drawing::Point(350, 450);
			this->BtnAddEquip->Name = L"BtnAddEquip";
			this->BtnAddEquip->Size = System::Drawing::Size(180, 30);
			this->BtnAddEquip->TabIndex = 12;
			this->BtnAddEquip->Text = L"Ajouter un équipement";
			this->BtnAddEquip->UseVisualStyleBackColor = true;
			this->BtnAddEquip->Click += gcnew System::EventHandler(this, &AddUnit::BtnAddEquip_Click);
			// 
			// BtnOk
			// 
			this->BtnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnOk->Location = System::Drawing::Point(608, 452);
			this->BtnOk->Name = L"BtnOk";
			this->BtnOk->Size = System::Drawing::Size(75, 28);
			this->BtnOk->TabIndex = 13;
			this->BtnOk->Text = L"Valider";
			this->BtnOk->UseVisualStyleBackColor = true;
			this->BtnOk->Click += gcnew System::EventHandler(this, &AddUnit::BtnOk_Click);
			// 
			// LabelEquipList
			// 
			this->LabelEquipList->AutoSize = true;
			this->LabelEquipList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelEquipList->Location = System::Drawing::Point(400, 140);
			this->LabelEquipList->Name = L"LabelEquipList";
			this->LabelEquipList->Size = System::Drawing::Size(111, 20);
			this->LabelEquipList->TabIndex = 14;
			this->LabelEquipList->Text = L"Équipements :";
			// 
			// CBEquipList
			// 
			this->CBEquipList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CBEquipList->FormattingEnabled = true;
			this->CBEquipList->Location = System::Drawing::Point(535, 140);
			this->CBEquipList->Name = L"CBEquipList";
			this->CBEquipList->Size = System::Drawing::Size(200, 26);
			this->CBEquipList->TabIndex = 15;
			// 
			// AddUnit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 511);
			this->Controls->Add(this->CBEquipList);
			this->Controls->Add(this->LabelEquipList);
			this->Controls->Add(this->BtnOk);
			this->Controls->Add(this->BtnAddEquip);
			this->Controls->Add(this->BtnAddFig);
			this->Controls->Add(this->TBNameUnit);
			this->Controls->Add(this->CBRole);
			this->Controls->Add(this->TBNumPoint);
			this->Controls->Add(this->CBModelUnit);
			this->Controls->Add(this->LabelModelUnit);
			this->Controls->Add(this->LabelLengthUnit);
			this->Controls->Add(this->LabelNumPoints);
			this->Controls->Add(this->LabelRole);
			this->Controls->Add(this->LabelName);
			this->Controls->Add(this->LabelAddUnit);
			this->Name = L"AddUnit";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BtnOk";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CBModelUnit_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void BtnAddFig_Click(System::Object^  sender, System::EventArgs^  e) {
		Form ^f = gcnew AddFigurine();
		f->Show();
	}
	private: System::Void BtnAddEquip_Click(System::Object^  sender, System::EventArgs^  e) {
		Form ^f = gcnew AddEquipment();
		f->Show();
	}
	private: System::Void BtnOk_Click(System::Object^  sender, System::EventArgs^  e) {

		BLL::Unit Unite;
		std::string VarS = "";
		VarS.clear();
		VarS = msclr::interop::marshal_as<std::string>(this->TBNameUnit->ToString());
		Unite.setName(VarS);
		printf(VarS.c_str());
		String^ SvaR = gcnew String(Unite.getName().c_str());

		//TBNumPoint->Text = TBNumPoint->Text + "ok" + SvaR;//gcnew String(Unite.getName().c_str());

		this->TBNumPoint->Text = SvaR;

		//		TBNumPoint->Text = Convert::ToString(SvaR);
		Form ^f = gcnew SaveUnit();
		f->Show();
	}
	};

}
