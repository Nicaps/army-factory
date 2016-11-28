#ifndef DEF_ROLE
#define DEF_ROLE

/*
* Name : Role.h
* Desc : class defining a Role attached to an Unit
* Authors : Nicolas APERCE & Alexis Cornet
* Last update : 16-11-04
*/

//Classic C++ includes
#include <string>
//Custom includes

//Class definition
class Role {
public:
	Role();
	~Role();
	std::string getRoleName();
protected:
	std::string c_sRoleName;

};
#endif // !DEF_ROLE
