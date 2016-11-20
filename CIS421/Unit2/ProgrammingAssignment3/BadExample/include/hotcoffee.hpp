#ifndef _HPP_HOTCOFFEE_INCLUDED
#define _HPP_HOTCOFFEE_INCLUDED

#include "coffee.hpp"

class HotCoffee: public Coffee{
	public:
		virtual bool isHot();
		virtual bool isCold();

		virtual std::string getName();
		virtual std::string getDescription();

		virtual float getSugarContent();

		virtual Drink::Temperature getTemperature();
};

#endif
