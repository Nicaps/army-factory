#include "Figurine.h"
namespace BLL {
	int Figurine::NEXT_VALID_ID = 0;

#pragma region Constructors
	Figurine::Figurine() : c_iId(NEXT_VALID_ID), c_sName(""), c_type(0)
	{
		++NEXT_VALID_ID;
		std::stringstream sstm;
		sstm << "figurine:" << c_iId;
		c_sName = sstm.str();
	}

	Figurine::~Figurine() {}
#pragma endregion

#pragma region Others functions
	void Figurine::addEquipment(Equipment * p_equipToAdd)
	{
		c_listEquipment.push_back(p_equipToAdd);
	}

	void Figurine::delEquipment(Equipment * p_equipToDel)
	{
		c_listEquipment.erase(std::find(c_listEquipment.begin(), c_listEquipment.end(), p_equipToDel));
	}

	void Figurine::addRule(Rule * p_ruleToAdd)
	{
		c_listRule.push_back(p_ruleToAdd);
	}

	void Figurine::delRule(Rule * p_ruleToDel)
	{
		c_listRule.erase(std::find(c_listRule.begin(), c_listRule.end(), p_ruleToDel));
	}

	void Figurine::showEquipments() const
	{
		for (auto &eq : c_listEquipment) {
			std::cout << std::endl << "Equipment : " << eq->getName() << std::endl << "Text : " << eq->getText() << std::endl;
		}
	}

	void Figurine::showRules() const
	{
		for (auto &ru : c_listRule) {
			std::cout << std::endl << "Rule : " << ru->getName() << std::endl << "Text : " << ru->getText() << std::endl;
		}
	}
#pragma endregion

#pragma region Getters
	int Figurine::getId() const
	{
		return c_iId;
	}

	std::string Figurine::getName() const
	{
		return c_sName;
	}

	Type Figurine::getType() const
	{
		return *c_type;
	}
#pragma endregion
}