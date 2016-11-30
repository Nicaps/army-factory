#include "DataBase.h"

DataBase::DataBase() : c_bIsConnected(false) {
	c_mysql = mysql_init(NULL);
	mysql_options(c_mysql, MYSQL_READ_DEFAULT_GROUP, "option");
}

void DataBase::connection(const char * p_hostname, const char * p_user, const char * p_psswd, const char * p_dbName)
{
	if (mysql_real_connect(c_mysql, p_hostname, p_user, p_psswd, p_dbName, 0, NULL, 0))
	{
		printf("Connexion reussie\n");
		c_bIsConnected = true;
	}
	else
	{
		printf("Une erreur s'est produite lors de la connexion a la BDD!\n");
		c_bIsConnected = false;
	}
}

void DataBase::endConnection()
{
	mysql_close(c_mysql);
	c_bIsConnected = false;
}

bool DataBase::isConnected()
{
	return c_bIsConnected;
}