#ifndef DEF_FIGURINE_DAL
#define DEF_FIGURINE_DAL

#include "DAL.h"
#include <iostream>

namespace DAL {
	public class FigurineDAL
	{
	public:
		FigurineDAL();
		~FigurineDAL();
	private:
		int c_iId;
		std::string c_sName;
	};
}

#endif // !DEF_FIGURINE_DAL

