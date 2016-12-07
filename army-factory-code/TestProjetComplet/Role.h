#ifndef DEF_ROLE
#define DEF_ROLE

/*
* Name : Role.h
* Desc : class defining a Role attached to an Unit
* Authors : Nicolas APERCE & Alexis Cornet
* Last update : 16-12-02
*/

//Classic C++ includes
#include <string>
//Custom includes

namespace BLL {
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
}