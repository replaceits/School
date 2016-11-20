#ifndef _HPP_HOT_INCLUDED
#define _HPP_HOT_INCLUDED

#include "tempdecorator.hpp"

class Hot: public TempDecorator{
	public:
		Hot( Drink* );

		virtual std::string getDescription();
};

#endif
