#ifndef DEF_UNIT
#define DEF_UNIT

/*
* Name : Unit.h
* Desc : class defining an Unit composing an Army
* Authors : Nicolas APERCE & Alexis Cornet
* Last update : 16-12-02
*/

//Classic C++ includes
#include <vector>
//Custom includes
#include "Figurine.h"
#include "Role.h"
#include "Option.h"

namespace BLL {
	//Class definition
	public class Unit {
	public:
		Unit();
		~Unit();
		void addFigurine(Figurine* p_Figurine);
		void delFigurine(Figurine* p_Figurine);
		void showFigurines();
		int getNbFigurines();
		int getId();
		int getCost();
		Role getRole();
		std::string getName();
		void setName(std::string p_sName);
	protected:
		static int NEXT_VALID_ID;
		std::string c_sName;
		int c_iId;
		int c_iCost;
		int c_iNbFig;
		Role c_Role;
		std::vector < Figurine* > c_ListFig;
	};
}
#endif // !DEF_UNIT