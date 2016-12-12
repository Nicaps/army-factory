#pragma once
#ifndef DEF_CONNEXION
#define DEF_CONNEXION

#include <string>
#include "DAL.h"
#include "BLL.h"

namespace Connexion {
	public ref class Connexion {
	public:
		static void connect();
		static void disconnect();
		static bool isConnected();
		static DAL::Data* getDataBase();
		static void selectBaseFigs();
		static void selectBaseUnits();

	private:
		static DAL::Data *dt;
	};
}

#endif DEF_CONNEXION