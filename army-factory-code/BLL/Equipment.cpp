#include "Equipment.h"
namespace BLL {
	int Equipment::NEXT_VALID_ID = 0;

#pragma region Constructors
	Equipment::Equipment() : c_iId(NEXT_VALID_ID), c_sName(""), c_sText("")
	{
		++NEXT_VALID_ID;
		std::stringstream sstm;
		sstm << "equipment:" << c_iId;
		c_sName = sstm.str();
	}

	Equipment::Equipment(std::string p_sName, std::string p_sText) : Equipment()
	{
		c_sName = p_sName;
		c_sText = p_sText;
	}

	Equipment::~Equipment() {}
#pragma endregion

#pragma region Getters
	std::string Equipment::getName() const
	{
		return c_sName;
	}

	int Equipment::getId() const
	{
		return c_iId;
	}
	std::string Equipment::getText() const
	{
		return c_sText;
	}
#pragma endregion

#pragma region Setters
	void Equipment::setName(std::string p_sNewName)
	{
		c_sName = p_sNewName;
	}

	void Equipment::setText(std::string p_sNewText)
	{
		c_sText = p_sNewText;
	}
#pragma endregion
}