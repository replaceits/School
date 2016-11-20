#ifndef _HPP_HOTTEA_INCLUDED
#define _HPP_HOTTEA_INCLUDED

#include "tea.hpp"

class HotTea: public Tea{
	public:
		virtual bool isHot();
		virtual bool isCold();

		virtual std::string getName();
		virtual std::string getDescription();

		virtual float getSugarContent();

		virtual Drink::Temperature getTemperature();
};

#endif
