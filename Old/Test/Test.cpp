#include <stdio.h>
#include <stdlib.h>
#using "../Debug/DAL.dll"

using namespace DAL;

int main()
{
	DAL::Data ^dt = gcnew DAL::Data();
	dt->connection("127.0.0.1", "ArmyFactory", "armyfactory", "test_army_factory");
	if (dt->isConnected()) {
		dt->endConnection();
	}

	return 0;
}