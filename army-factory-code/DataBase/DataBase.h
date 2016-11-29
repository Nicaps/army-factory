#pragma once
#ifndef DEF_DB
#define DEF_DB

#include <string>
#include <iostream>
#include <winsock.h>
#include <MYSQL/mysql.h>

class DataBase {
public:
	DataBase();
	void connection(const char *p_sHostname, const char *p_sUser, const char *p_sPsswd, const char *p_sDbName);
	void endConnection();
	bool isConnected();
	bool insertArmy(const char *p_sArmyName);

private:
	MYSQL *c_mysql;
	bool c_bIsConnected;

};

#endif DEF_DB