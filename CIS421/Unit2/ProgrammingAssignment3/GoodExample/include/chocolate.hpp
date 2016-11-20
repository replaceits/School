#ifndef _HPP_CHOCOLATE_INCLUDED
#define _HPP_CHOCOLATE_INCLUDED

#include "addonsdecorator.hpp"

class Chocolate: public AddonsDecorator{
	public:
		Chocolate( Drink* );

		virtual std::string getDescription();
};

#endif
