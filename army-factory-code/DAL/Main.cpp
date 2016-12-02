#include <stdio.h>
#include <stdlib.h>
#include "DAL.h"

int main()
{
	DataBase db;
	db.connection("127.0.0.1", "ArmyFactory", "armyfactory", "test_army_factory");
	if (db.isConnected()) {
		db.insertArmy("army4fun");
		db.endConnection();
	}
	return 0;
}
