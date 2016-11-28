#include "Type.h"

int Type::NEXT_VALID_ID = 0;

#pragma region Constructors
Type::Type() : c_iId(NEXT_VALID_ID), c_sName("")
{
	++NEXT_VALID_ID;
}

Type::Type(std::string p_sTypeName) : Type()
{
	c_sName = p_sTypeName;
}

Type::~Type(){}
#pragma endregion

#pragma region Getters
int Type::getId() const
{
	return c_iId;
}

std::string Type::getName() const
{
	return c_sName;
}
#pragma endregion