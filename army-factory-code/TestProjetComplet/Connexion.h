#pragma once
#ifndef DEF_CONNEXION
#define DEF_CONNEXION

#include <string>
#include "DAL.h"

namespace BLL {
	public ref class Connexion {
	public:
		Connexion();
		~Connexion();
		void disconnect();
		bool isConnected();
		DAL::Data* getDataBase();
		std::string getName();
		int getType();
	private:
		DAL::Data *dt;
	};
}

#endif DEF_CONNEXION