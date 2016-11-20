#ifndef _HPP_ICEDTEA_INCLUDED
#define _HPP_ICEDTEA_INCLUDED

#include "tea.hpp"

class IcedTea: public Tea{
	public:
		virtual bool isHot();
		virtual bool isCold();

		virtual std::string getName();
		virtual std::string getDescription();

		virtual float getSugarContent();

		virtual Drink::Temperature getTemperature();
};

#endif
