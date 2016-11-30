#include "Army.h"

#pragma region Constructors
Army::Army() : c_sName(""), c_iCost(0), c_iNbUnit(0) {
	
}

Army::Army(std::string p_sNameArmy) : Army::Army() {
	c_sName = p_sNameArmy;
}

Army::~Army(){}
#pragma endregion

#pragma region Functions
void Army::addUnit(Unit* p_Unit) {
	c_ListUnit.push_back(p_Unit);
	c_iNbUnit++;
	c_iCost += p_Unit->getCost();
}

void Army::delUnit(Unit* p_Unit) {
	c_ListUnit.erase(std::find(c_ListUnit.begin(), c_ListUnit.end(), p_Unit));
	c_iNbUnit--;
	c_iCost -= p_Unit->getCost();
}

void Army::showUnits() {

}
void Army::insertIntoDb(nsDatabase::DataBase *db)
{
}

void Army::deleteFromDb(nsDatabase::DataBase * db)
{
}
#pragma endregion

#pragma region Accessors
std::string Army::getName() {
	return c_sName;
}

int Army::getNbUnits() {
	return c_iNbUnit;
}

int Army::getCost() {
	return c_iCost;
}
#pragma endregion

#pragma region Mutators

#pragma endregion
