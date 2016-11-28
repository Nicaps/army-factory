#include "Unit.h"

int Unit::NEXT_VALID_ID = 0;

#pragma region Constructor
Unit::Unit() : c_iCost(0), c_iId(0), c_iNbFig(0), c_sName(""){}

Unit::~Unit(){}
#pragma endregion

#pragma region Function
void Unit::addFigurine(Figurine* p_Figurine) {
	c_ListFig.push_back(p_Figurine);
	c_iNbFig++;
}

void Unit::delFigurine(Figurine* p_Figurine) {
	c_ListFig.erase(std::find(c_ListFig.begin(), c_ListFig.end(), p_Figurine));
	c_iNbFig--;
}

void Unit::showFigurines() {

}
#pragma endregion

#pragma region Accessor
int Unit::getNbFigurines() {
	return c_iNbFig;
}

int Unit::getId() {
	return c_iId;
}

int Unit::getCost() {
	return c_iCost;
}

Role Unit::getRole() {
	return c_Role;
}
#pragma endregion

#pragma region Mutator

#pragma endregion
