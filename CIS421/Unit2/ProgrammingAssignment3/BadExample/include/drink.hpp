#ifndef _HPP_DRINK_INCLUDED
#define _HPP_DRINK_INCLUDED

#include <string>

class Drink{
	private:

	public:
		enum Temperature{
			HOT,
			COLD
		};

		virtual bool isHot();
		virtual bool isCold();
		virtual Drink::Temperature getTemperature();

		virtual float getSugarContent();

		virtual std::string getName();
		virtual std::string getDescription();
};

#endif
