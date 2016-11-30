#include "AboutUs.h"
#include "About.h"
#include "HomePage.h"
//#include "CreateArmy.h"
#include "ViewArmy.h"
#include "ViewFigurine.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WarHammer40KArmyFactory
	/// </summary>
	public ref class WarHammer40KArmyFactory : public System::Windows::Forms::Form
	{
	private:
		System::ComponentModel::IContainer^ components;
		Interface::HomePage^ Home;
		Interface::CreateArmy^ NewArmy;
		Interface::ViewArmy^ VisuArmy;
		Interface::ViewFigurine^ VisuFig;
	public:
		WarHammer40KArmyFactory(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			Home = gcnew Interface::HomePage;
			PanelWH40K->Controls->Add(Home);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WarHammer40KArmyFactory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  MenuHomePage;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  HomeMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  CreateArmyMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ViewArmyMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ViewFigurMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  OptionMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  AboutMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  AboutUsItem;
	private: System::Windows::Forms::ToolStripMenuItem^  AboutItem;
	private: System::Windows::Forms::Panel^  PanelWH40K;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->MenuHomePage = (gcnew System::Windows::Forms::MenuStrip());
			this->HomeMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CreateArmyMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ViewArmyMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ViewFigurMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OptionMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutUsItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PanelWH40K = (gcnew System::Windows::Forms::Panel());
			this->MenuHomePage->SuspendLayout();
			this->SuspendLayout();
			// 
			// MenuHomePage
			// 
			this->MenuHomePage->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->MenuHomePage->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->HomeMenuItem, this->CreateArmyMenuItem,
					this->ViewArmyMenuItem, this->ViewFigurMenuItem, this->OptionMenuItem, this->AboutMenuItem
			});
			this->MenuHomePage->Location = System::Drawing::Point(0, 0);
			this->MenuHomePage->Name = L"MenuHomePage";
			this->MenuHomePage->Size = System::Drawing::Size(884, 28);
			this->MenuHomePage->TabIndex = 6;
			this->MenuHomePage->Text = L"menuStrip1";
			// 
			// HomeMenuItem
			// 
			this->HomeMenuItem->Name = L"HomeMenuItem";
			this->HomeMenuItem->Size = System::Drawing::Size(69, 24);
			this->HomeMenuItem->Text = L"Accueil";
			this->HomeMenuItem->Click += gcnew System::EventHandler(this, &WarHammer40KArmyFactory::HomeMenuItem_Click);
			// 
			// CreateArmyMenuItem
			// 
			this->CreateArmyMenuItem->Name = L"CreateArmyMenuItem";
			this->CreateArmyMenuItem->Size = System::Drawing::Size(130, 24);
			this->CreateArmyMenuItem->Text = L"Créer une armée";
			this->CreateArmyMenuItem->Click += gcnew System::EventHandler(this, &WarHammer40KArmyFactory::CreateArmyMenuItem_Click);
			// 
			// ViewArmyMenuItem
			// 
			this->ViewArmyMenuItem->Name = L"ViewArmyMenuItem";
			this->ViewArmyMenuItem->Size = System::Drawing::Size(159, 24);
			this->ViewArmyMenuItem->Text = L"Visualiser ses armées";
			this->ViewArmyMenuItem->Click += gcnew System::EventHandler(this, &WarHammer40KArmyFactory::ViewArmyMenuItem_Click);
			// 
			// ViewFigurMenuItem
			// 
			this->ViewFigurMenuItem->Name = L"ViewFigurMenuItem";
			this->ViewFigurMenuItem->Size = System::Drawing::Size(168, 24);
			this->ViewFigurMenuItem->Text = L"Visualiser ses figurines";
			this->ViewFigurMenuItem->Click += gcnew System::EventHandler(this, &WarHammer40KArmyFactory::ViewFigurMenuItem_Click);
			// 
			// OptionMenuItem
			// 
			this->OptionMenuItem->Name = L"OptionMenuItem";
			this->OptionMenuItem->Size = System::Drawing::Size(73, 24);
			this->OptionMenuItem->Text = L"Options";
			// 
			// AboutMenuItem
			// 
			this->AboutMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->AboutUsItem,
					this->AboutItem
			});
			this->AboutMenuItem->Name = L"AboutMenuItem";
			this->AboutMenuItem->Size = System::Drawing::Size(82, 24);
			this->AboutMenuItem->Text = L"À propos";
			// 
			// AboutUsItem
			// 
			this->AboutUsItem->Name = L"AboutUsItem";
			this->AboutUsItem->Size = System::Drawing::Size(206, 24);
			this->AboutUsItem->Text = L"Qui sommes nous \?";
			this->AboutUsItem->Click += gcnew System::EventHandler(this, &WarHammer40KArmyFactory::AboutUsItem_Click);
			// 
			// AboutItem
			// 
			this->AboutItem->Name = L"AboutItem";
			this->AboutItem->Size = System::Drawing::Size(206, 24);
			this->AboutItem->Text = L"About";
			this->AboutItem->Click += gcnew System::EventHandler(this, &WarHammer40KArmyFactory::AboutItem_Click);
			// 
			// PanelWH40K
			// 
			this->PanelWH40K->Location = System::Drawing::Point(0, 28);
			this->PanelWH40K->Name = L"PanelWH40K";
			this->PanelWH40K->Size = System::Drawing::Size(885, 530);
			this->PanelWH40K->TabIndex = 7;
			// 
			// WarHammer40KArmyFactory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->PanelWH40K);
			this->Controls->Add(this->MenuHomePage);
			this->Name = L"WarHammer40KArmyFactory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WarHammer40KArmyFactory";
			this->MenuHomePage->ResumeLayout(false);
			this->MenuHomePage->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HomeMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		PanelWH40K->Controls->Clear();
		Home = gcnew Interface::HomePage;
		PanelWH40K->Controls->Add(Home);
	}
	private: System::Void CreateArmyMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		PanelWH40K->Controls->Clear();
		NewArmy = gcnew Interface::CreateArmy;
		PanelWH40K->Controls->Add(NewArmy);
		//this->Controls->Add(PanelWH40K);
	}
	private: System::Void ViewArmyMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		PanelWH40K->Controls->Clear();
		VisuArmy = gcnew Interface::ViewArmy;
		PanelWH40K->Controls->Add(VisuArmy);
	}
	private: System::Void ViewFigurMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		PanelWH40K->Controls->Clear();
		VisuFig = gcnew Interface::ViewFigurine;
		PanelWH40K->Controls->Add(VisuFig);
	}
	private: System::Void AboutUsItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Form ^ f = gcnew AboutUs();
		f->Show();
	}
	private: System::Void AboutItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Form ^ f = gcnew About();
		f->Show();
	}
};
}
