#pragma once
#ifndef DEF_CONNEXION
#define DEF_CONNEXION

#include <string>
#include "BLL.h"
#include "DAL.h"

namespace Connexion {
	public ref class Connexion {
	public:
		static void connect();
		static void disconnect();
		static bool isConnected();
		static DAL::Data* getDataBase();
		static void selectBaseFigs();
		static void selectBaseUnits();
		std::string getName();
		int getTypeFig();

	private:
		static DAL::Data *dt;
		char* c_sName;
		int c_iType;
	};
}

#endif DEF_CONNEXION