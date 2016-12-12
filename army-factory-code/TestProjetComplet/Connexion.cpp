#include "Connexion.h"

namespace Connexion {
	void Connexion::connect()
	{
		//throw gcnew System::NotImplementedException();
		dt = new DAL::Data();
		dt->connection("127.0.0.1", "ArmyFactory", "armyfactory", "test_army_factory");
		if (dt->isConnected()) {
			printf("Connexion réussie.\n");
		}
		else {
			printf("Échec de connexion.\n");
		}
	}
	void Connexion::disconnect()
	{
		//throw gcnew System::NotImplementedException();
		dt->endConnection();
		delete dt;
	}

	bool Connexion::isConnected()
	{
		return dt->isConnected();
	}

	DAL::Data * Connexion::getDataBase()
	{
		return dt;
	}

	void Connexion::selectBaseFigs()
	{
		//throw gcnew System::NotImplementedException();
		const char* query("SELECT * FROM figurines;");
		mysql_query(dt->getMysql(), query);
		MYSQL_RES *result = mysql_use_result(dt->getMysql());
	}

	void Connexion::selectBaseUnits()
	{
		//throw gcnew System::NotImplementedException();
		const char* query("SELECT * FROM unit WHERE isBase = 1;");
		mysql_query(dt->getMysql(), query);
		MYSQL_RES *result = mysql_use_result(dt->getMysql());
	}
}