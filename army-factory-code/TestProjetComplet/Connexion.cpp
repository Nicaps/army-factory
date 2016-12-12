#include "Connexion.h"

BLL::Connexion::Connexion()
{
	dt = new DAL::Data();
	dt->connection("127.0.0.1", "ArmyFactory", "armyfactory", "test_army_factory");
	if (dt->isConnected()) {
		printf("Connexion réussie.\n");
	}
	else {
		printf("Échec de connexion.\n");
	}
}

BLL::Connexion::~Connexion()
{
	disconnect();
	delete dt;
}

void BLL::Connexion::disconnect()
{
	if (dt->isConnected()) {
		dt->endConnection();
	}
}

bool BLL::Connexion::isConnected() const
{
	return dt->isConnected();
}

DAL::Data * BLL::Connexion::getDataBase() const
{
	return dt;
}
