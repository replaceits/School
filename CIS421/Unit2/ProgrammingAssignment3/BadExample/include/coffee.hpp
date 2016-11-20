#ifndef _HPP_COFFEE_INCLUDED
#define _HPP_COFFEE_INCLUDED

#include "drink.hpp"

class Coffee: public Drink{
	public:
		virtual bool isHot();
		virtual bool isCold();

		virtual std::string getName();
		virtual std::string getDescription();

		virtual float getSugarContent();

		virtual Drink::Temperature getTemperature();
};

#endif
