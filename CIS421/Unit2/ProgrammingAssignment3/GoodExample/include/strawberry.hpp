#ifndef _HPP_STRAWBERRY_INCLUDED
#define _HPP_STRAWBERRY_INCLUDED

#include "addonsdecorator.hpp"

class Strawberry: public AddonsDecorator{
	public:
		Strawberry( Drink* );

		virtual std::string getDescription();
};

#endif
