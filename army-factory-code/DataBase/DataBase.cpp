#include "DataBase.h"

nsDatabase::DataBase::DataBase() : c_bIsConnected(false) {
	c_mysql = mysql_init(NULL);
	mysql_options(c_mysql, MYSQL_READ_DEFAULT_GROUP, "option");
}

void nsDatabase::DataBase::connection(const char * p_hostname, const char * p_user, const char * p_psswd, const char * p_dbName)
{
	bool conn = mysql_real_connect(c_mysql, p_hostname, p_user, p_psswd, p_dbName, 0, NULL, 0);
	if (conn)
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

void nsDatabase::DataBase::endConnection()
{
	if (c_bIsConnected) {
		mysql_close(c_mysql);
		c_bIsConnected = false;
	}
}

bool nsDatabase::DataBase::isConnected()
{
	return c_bIsConnected;
}