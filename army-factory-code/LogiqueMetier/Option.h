#ifndef DEF_OPTION
#define DEF_OPTION

/*
* Name : Option.h
* Desc : class defining an Option attached to an Unit
* Authors : Nicolas APERCE & Alexis CORNET
* Last Update : 16-11-05
*/

//Class C++ includes
#include <string>	

//Custom includes

//Class definition
class Option
{
public:
	Option();
	~Option();
	void addWording(std::string p_sWording);
	std::string getWording();
private:
	std::string c_sNameOption;
	std::string c_sWordingOption;
	int c_iCostOption;
};

#endif // !DEF_OPTION

