#ifndef _HPP_DRINK_INCLUDED
#define _HPP_DRINK_INCLUDED

#include <string>

class Drink{
	public:
		enum Temperature{
			HOT,
			COLD,
			UNKNOWN
		};

		static std::string getTemperatureString( Drink::Temperature );

		Drink();

		virtual bool isHot();
		virtual bool isCold();
		virtual Drink::Temperature getTemperature();

		virtual float getSugarContent();

		virtual std::string getName();
		virtual std::string getDescription();
	protected:
		Drink::Temperature temp;
		float sugar;

		std::string name;
		std::string description;
};

#endif
