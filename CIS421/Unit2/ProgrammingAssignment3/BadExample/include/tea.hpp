#ifndef _HPP_TEA_INCLUDED
#define _HPP_TEA_INCLUDED

#include "drink.hpp"

class Tea: public Drink{
	public:
		virtual bool isHot();
		virtual bool isCold();

		virtual std::string getName();
		virtual std::string getDescription();

		virtual float getSugarContent();

		virtual Drink::Temperature getTemperature();
};

#endif
