#pragma once

#ifndef DEF_DAL
#define DEF_DAL

#include <string>
#include <iostream>
#include <winsock.h>
#include <mysql.h>

namespace DAL {
	class Data
	{
	public:
		Data();
		void connection(const char *p_sHostname, const char *p_sUser, const char *p_sPsswd, const char *p_sDbName);
		void endConnection();
		bool isConnected();

	private:
		MYSQL *c_mysql;
		bool c_bIsConnected;
	};
}

#endif 