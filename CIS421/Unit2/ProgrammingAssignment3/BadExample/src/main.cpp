#include <iostream>
#include <string>
#include <vector>

#include "drink.hpp"

#include "tea.hpp"
#include "icedtea.hpp"
#include "hottea.hpp"

#include "coffee.hpp"
#include "icedcoffee.hpp"
#include "hotcoffee.hpp"

#include "soda.hpp"
#include "milkshake.hpp"
#include "juice.hpp"

int main( int argc, char* argv[] ){

	std::vector< Drink* > Drinks = {
		new Tea(),
		new IcedTea(),
		new HotTea(),
		new Coffee(),
		new IcedCoffee(),
		new HotCoffee(),
		new Soda(),
		new Milkshake(),
		new Juice()
	};

	std::cout << "___DRINK_NAMES___\n";
	for( std::vector< Drink* >::iterator it = Drinks.begin(); it != Drinks.end(); ++it ){
		std::cout << (*it)->getName() << '\n';
	}

	std::cout << "\n___DRINK_DESCRIPTION___\n";
	for( std::vector< Drink* >::iterator it = Drinks.begin(); it != Drinks.end(); ++it ){
		std::cout << (*it)->getDescription() << '\n';
	}

	std::cout << "\n___HOT_DRINKS___\n";
	for( std::vector< Drink* >::iterator it = Drinks.begin(); it != Drinks.end(); ++it ){
		if( (*it)->getTemperature() == Drink::Temperature::HOT ){
			std::cout << (*it)->getDescription() << '\n';
		}
	}

	std::cout << "\n___COLD_DRINKS___\n";
	for( std::vector< Drink* >::iterator it = Drinks.begin(); it != Drinks.end(); ++it ){
		if( (*it)->getTemperature() == Drink::Temperature::COLD ){
			std::cout << (*it)->getDescription() << '\n';
		}
	}

	std::cout << "\n___DRINK_TEMPERATURE___\n";
	for( std::vector< Drink* >::iterator it = Drinks.begin(); it != Drinks.end(); ++it ){
		std::cout << (*it)->getDescription() << ": " 
			<< ( (*it)->getTemperature() == Drink::Temperature::COLD ?
					  "COLD"
					: "HOT" )		
			<< '\n';
	}

	std::cout << "\n___SUGAR_CONTENT___\n";
	for( std::vector< Drink* >::iterator it = Drinks.begin(); it != Drinks.end(); ++it ){
		std::cout << (*it)->getDescription() << ": " << (*it)->getSugarContent() << "G\n";
	}

	std::cout << std::flush;

	return 0;
}
