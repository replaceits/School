#ifndef _HPP_ICEDCOFFEE_INCLUDED
#define _HPP_ICEDCOFFEE_INCLUDED

#include "coffee.hpp"

class IcedCoffee: public Coffee{
	public:
		virtual bool isHot();
		virtual bool isCold();

		virtual std::string getName();
		virtual std::string getDescription();

		virtual float getSugarContent();

		virtual Drink::Temperature getTemperature();
};

#endif
