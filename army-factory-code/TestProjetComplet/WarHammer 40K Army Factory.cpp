//DOIT ÊTRE EN DERNIER
#include "WarHammer 40K Army Factory.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Interface::WarHammer40KArmyFactory WH40K;

	if (Connexion::Connexion::isConnected()) {
		Application::Run(%WH40K);
		Connexion::Connexion::disconnect();
	}
}
