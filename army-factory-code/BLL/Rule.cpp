#include "Rule.h"
namespace BLL {
#pragma region Constructors
	Rule::Rule() {}

	Rule::~Rule() {}
#pragma endregion

#pragma region Accessors
	int Rule::getId() {
		return c_iId;
	}

	std::string Rule::getName() {
		return c_sName;
	}

	std::string Rule::getText() {
		return c_sText;
	}
#pragma endregion
}