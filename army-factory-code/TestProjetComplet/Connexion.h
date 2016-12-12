#pragma once
#ifndef DEF_CONNEXION
#define DEF_CONNEXION

#include <string>
#include "DAL.h"

namespace BLL {
	public class Connexion {
	public:
		Connexion();
		~Connexion();
		void disconnect();
		bool isConnected() const;
		DAL::Data* getDataBase() const;
	private:
		DAL::Data *dt;
	};
}

#endif DEF_CONNEXION