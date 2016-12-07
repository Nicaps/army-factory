#ifndef DEF_EQUIPMENT
#define DEF_EQUIPMENT

/*
* Name : Equipement.h
* Desc : class defining an Equipement used by a Figurine
* Authors : Nicolas APERCE & Alexis Cornet
* Last update : 16-11-04
*/

//Classic C++ includes
#include <string>
#include <sstream>

//Custom includes

namespace BLL {
	//Class definition
	class Equipment {
	public:
		Equipment();
		Equipment(std::string p_sName, std::string p_sText = "");
		~Equipment();
		std::string getName() const;
		int getId() const;
		std::string getText() const;
		void setName(std::string p_sNewName);
		void setText(std::string p_sNewText);

	protected:
		static int NEXT_VALID_ID;
		int c_iId;
		std::string c_sName;
		std::string c_sText;
	};
#endif // !DEF_EQUIPMENT
}