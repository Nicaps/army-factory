// This is the main DLL file.

#include "stdafx.h"

#include "DAL.h"

namespace DAL {
	Data::Data() : c_bIsConnected(false) {
		c_mysql = mysql_init(NULL);
		mysql_options(c_mysql, MYSQL_READ_DEFAULT_GROUP, "option");
	}

	void Data::connection(const char * p_sHostname, const char * p_sUser, const char * p_sPsswd, const char * p_sDbName)
	{
		if (mysql_real_connect(c_mysql, p_sHostname, p_sUser, p_sPsswd, p_sDbName, 0, NULL, 0))
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

	void Data::endConnection()
	{
		mysql_close(c_mysql);
		c_bIsConnected = false;
	}

	bool Data::isConnected()
	{
		return c_bIsConnected;
	}

	bool Data::insertArmy(const char *p_sArmyName)
	{
		if (c_bIsConnected) {
			std::string str1("INSERT INTO `army` (`id`, `name`, `cost`, `nbUnit`) VALUES (NULL, '");
			std::string str2("', '0', '0');");
			str1.append(p_sArmyName).append(str2);
			const char *query = str1.c_str();
			mysql_query(c_mysql, query);
			return true;
		}
		else {
			printf("La base n'est pas connectée.\n");
			return false;
		}
	}
}