<<<<<<< HEAD
#include "WarHammer 40K Army Factory.h"
=======
#include "DAL.h"
>>>>>>> 4c103def9c54c58b98dc10740d82b8885bbcb068

//DOIT ÊTRE EN DERNIER
#include "WarHammer 40K Army Factory.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^args) {

	//DAL::Data *dt = new DAL::Data();
	//dt->connection("127.0.0.1", "ArmyFactory", "armyfactory", "test_army_factory");
	//if (dt->isConnected()) {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		Interface::WarHammer40KArmyFactory WH40K;
		Application::Run(%WH40K);
	//	dt->endConnection();
	//}
}