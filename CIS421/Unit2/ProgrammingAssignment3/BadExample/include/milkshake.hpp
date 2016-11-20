#ifndef _HPP_MILKSHAKE_INCLUDED
#define _HPP_MILKSHAKE_INCLUDED

#include "drink.hpp"

class Milkshake: public Drink{
	public:
		virtual bool isHot();
		virtual bool isCold();

		virtual std::string getName();
		virtual std::string getDescription();

		virtual float getSugarContent();

		virtual Drink::Temperature getTemperature();
};

#endif
