#include "Army.h"
#include "DataBase.h"

using namespace std;
using namespace nsDatabase;

int main()
{
	DataBase *db = new DataBase();
	db->connection("127.0.0.1","ArmyFactory","armyfactory","test_army_factory");
	if (db->isConnected()) {
		Army *newArmy = new Army("armytest");
		//newArmy->insertIntoDb(db);
		db->endConnection();
	}
	return 0;
}
