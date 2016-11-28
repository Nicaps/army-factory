#include <stdio.h>
#include <stdlib.h>
#include <winsock.h>
#include <MYSQL/mysql.h>

int main()
{
	MYSQL *mysql = mysql_init(NULL);
	mysql_options(mysql, MYSQL_READ_DEFAULT_GROUP, "option");

	if (mysql_real_connect(mysql, "127.0.0.1", "ArmyFactory", "armyfactory", "test_army_factory", 0, NULL, 0))
	{
		printf("Connexion reussie\n");
		mysql_close(mysql);
	}
	else
	{
		printf("Une erreur s'est produite lors de la connexion a la BDD!\n");
	}
	return 0;
}
