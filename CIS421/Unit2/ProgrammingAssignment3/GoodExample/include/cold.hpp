#ifndef _HPP_ICEDTEA_INCLUDED
#define _HPP_ICEDTEA_INCLUDED

#include "tempdecorator.hpp"

class Cold: public TempDecorator{
	public:
		Cold( Drink* );

		virtual std::string getDescription();
};

#endif
