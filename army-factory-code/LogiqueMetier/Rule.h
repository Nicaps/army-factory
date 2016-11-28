#ifndef DEF_RULE
#define DEF_RULE

/*
* Name : Rule.h
* Desc : class defining a Rule attached to a Figurine
* Authors : Nicolas APERCE & Alexis Cornet
* Last update : 16-11-04
*/

//Classic C++ includes
#include <string>

//Custom includes

//Class definition
class Rule {
public:
	Rule();
	~Rule();
	int getId();
	std::string getName();
	std::string getText();
protected:
	static int NEXT_VALID_ID;
	int c_iId;
	std::string c_sName;
	std::string c_sText;
};
#endif // !DEF_RULE