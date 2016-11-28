#ifndef DEF_TYPE
#define DEF_TYPE

/*
* Name : Type.h
* Desc : class defining a Type attached to a Figurine
* Authors : Nicolas APERCE & Alexis Cornet
* Last update : 16-11-04
*/

//Classic C++ includes
#include <string>

//Custom includes

//Class definition
class Type {
public:
	Type();
	Type(std::string p_sTypeName);
	~Type();
	int getId() const;
	std::string getName() const;

protected:
	static int NEXT_VALID_ID;
	int c_iId;
	std::string c_sName;
};
#endif // !DEF_TYPE
