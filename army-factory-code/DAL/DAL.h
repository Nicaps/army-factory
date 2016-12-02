// DAL.h

#pragma once

using namespace System;

namespace DAL {

	public ref class Data
	{
	public:
		Data();
		void connection(const char *p_sHostname, const char *p_sUser, const char *p_sPsswd, const char *p_sDbName);
		void endConnection();
		bool isConnected();
		bool insertArmy(const char *p_sArmyName);

	private:
		MYSQL *c_mysql;
		bool c_bIsConnected;
	};
}
