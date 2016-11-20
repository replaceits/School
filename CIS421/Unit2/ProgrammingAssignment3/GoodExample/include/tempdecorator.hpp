#ifndef _HPP_TEMPDECORATOR_INCLUDED
#define _HPP_TEMPDECORATOR_INCLUDED

#include "drink.hpp"

class TempDecorator: public Drink{
	protected:
		Drink *drink;
		TempDecorator( Drink *drink );
	public:
		virtual std::string getDescription() = 0;
};

#endif
