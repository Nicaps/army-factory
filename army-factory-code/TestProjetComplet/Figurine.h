#ifndef DEF_FIGURINE
#define DEF_FIGURINE
/*
* Name : Figurine.h
* Desc : class defining a Figurine composing an Unit
* Authors : Nicolas APERCE & Alexis Cornet
* Last update : 16-11-04
*/

//Classic C++ includes
#include <string>
#include <sstream>
#include <vector>
#include <iostream>

//Custom includes
#include "DAL.h"
#include "Connexion.h"
#include "Equipment.h"
#include "Type.h"
#include "Rule.h"

namespace BLL {
	//Class definition
	class Figurine {
	public:
		Figurine();
		~Figurine();
		void addEquipment(Equipment* p_equipToAdd);
		void delEquipment(Equipment* p_equipToDel);
		void addRule(Rule* p_ruleToAdd);
		void delRule(Rule* p_ruleToDel);
		int getId() const;
		std::string getName() const;
		Type getType() const;
		void showEquipments() const;
		void showRules() const;

	protected:
		int c_iId;
		std::string c_sName;
		Type* c_type;
		std::vector<Equipment*> c_listEquipment;
		std::vector<Rule*> c_listRule;
	};
#endif // !DEF_FIGURINE
}