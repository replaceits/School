#ifndef _HPP_ADDONSDECORATOR_INCLUDED
#define _HPP_ADDONSDECORATOR_INCLUDED

#include "drink.hpp"

class AddonsDecorator: public Drink{
	protected:
		Drink *drink;
		AddonsDecorator( Drink * );
	public:
		virtual std::string getDescription() = 0;
};

#endif
