#ifndef _HPP_VANILLA_INCLUDED
#define _HPP_VANILLA_INCLUDED

#include "addonsdecorator.hpp"

class Vanilla: public AddonsDecorator{
	public:
		Vanilla( Drink* );

		virtual std::string getDescription();
};

#endif
