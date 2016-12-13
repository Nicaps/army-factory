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

	std::vector<BLL::Unit *> Connexion::selectBaseUnits()
	{
		//throw gcnew System::NotImplementedException();
		const char* query("SELECT * FROM unit WHERE isBase = 1;");
		mysql_query(dt->getMysql(), query);

		MYSQL_RES *result = mysql_use_result(dt->getMysql());
		MYSQL_ROW row;
		const int num_row(mysql_num_rows(result));
		std::vector<BLL::Unit *> units;
		BLL::Unit *unit;

		while (row = mysql_fetch_row(result)) {
			unit = new BLL::Unit();
			unit->setName(row[3]);
			units.push_back(unit);
		}

		return units;
	}

	std::string Connexion::getName() {
		return this->c_sName;
	}

	int Connexion::getTypeFig() {
		return this->c_iType;
	}
}