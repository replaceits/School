#ifndef _HPP_SODA_INCLUDED
#define _HPP_SODA_INCLUDED

#include "drink.hpp"

class Soda: public Drink{
	public:
		virtual bool isHot();
		virtual bool isCold();

		virtual std::string getName();
		virtual std::string getDescription();

		virtual float getSugarContent();

		virtual Drink::Temperature getTemperature();
};

#endif
