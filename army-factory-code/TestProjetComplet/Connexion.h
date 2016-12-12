#pragma once
#ifndef DEF_CONNEXION
#define DEF_CONNEXION

#include <string>
#include "DAL.h"
//#include "Figurine.h"

namespace BLL {
	public ref class Connexion {
	public:
		Connexion();
		~Connexion();
		void disconnect();
		bool isConnected();
		DAL::Data* getDataBase();
		std::string getName();
		int getTypeFig();
	private:
		DAL::Data *dt;
		char* c_sName;
		int c_iType;
	};
}

#endif DEF_CONNEXION