#ifndef DEF_ARMY
#define DEF_ARMY

/*
* Name : Army.h
* Desc : class defining an Army
* Authors : Nicolas APERCE & Alexis Cornet
* Last update : 16-11-26
*/

//Classic C++ includes
#include <string>

//Custom includes
#include "Unit.h"
#include "DataBase.h"

//Class definition
class Army {
public:
	Army();
	Army(std::string p_sNameArmy);
	~Army();
	void addUnit(Unit* p_Unit);
	void delUnit(Unit* p_Unit);
	void showUnits();
	void insertIntoDb(nsDatabase::DataBase *db);
	void deleteFromDb(nsDatabase::DataBase *db);
	std::string getName();
	int getNbUnits();
	int getCost();
protected:
	std::string c_sName;
	int c_iCost;
	int c_iNbUnit;
	std::vector < Unit* > c_ListUnit;	

};

#endif // !DEF_ARMY