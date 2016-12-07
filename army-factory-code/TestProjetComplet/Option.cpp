#include "Option.h"
namespace BLL {
#pragma region Constructors
	Option::Option() {}

	Option::~Option() {}
#pragma endregion

#pragma region Function
	void Option::addWording(std::string p_sWording) {
		c_sWordingOption = p_sWording;
	}
#pragma endregion

#pragma region Accessors
	std::string Option::getWording() {
		return c_sWordingOption;
	}
#pragma endregion
}