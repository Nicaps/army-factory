#pragma once
#ifndef DEF_DB
#define DEF_DB

#include <string>
#include <iostream>
#include <winsock.h>
#include <MYSQL/mysql.h>

namespace nsDatabase {

	class DataBase {
	public:
		DataBase();
		void connection(const char *p_hostname, const char *p_user, const char *p_psswd, const char *p_dbName);
		void endConnection();
		bool isConnected();

	private:
		MYSQL *c_mysql;
		bool c_bIsConnected;
	};

}

#endif DEF_DB