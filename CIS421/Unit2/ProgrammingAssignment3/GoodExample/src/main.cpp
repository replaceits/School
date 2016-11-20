#include <iostream>
#include <string>
#include <vector>

#include "drinkfactory.hpp"

int main( int argc, char* argv[] ){
	DrinkFactory &drinkFactory = DrinkFactory::getInstance();

	std::vector< Drink* > Drinks = {
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::TEA ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::TEA,
				DrinkFactory::DrinkAttribute::COLD ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::TEA,
				DrinkFactory::DrinkAttribute::VANILLA,
				DrinkFactory::DrinkAttribute::HOT ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::COFFEE ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::COFFEE,
				DrinkFactory::DrinkAttribute::HOT ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::COFFEE,
				DrinkFactory::DrinkAttribute::CHOCOLATE,
				DrinkFactory::DrinkAttribute::COLD ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::COFFEE,
				DrinkFactory::DrinkAttribute::VANILLA,
				DrinkFactory::DrinkAttribute::HOT ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::SODA ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::MILKSHAKE ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::MILKSHAKE,
				DrinkFactory::DrinkAttribute::CHOCOLATE ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::MILKSHAKE,
				DrinkFactory::DrinkAttribute::STRAWBERRY,
				DrinkFactory::DrinkAttribute::CHOCOLATE ),
		drinkFactory.makeDrink(
				DrinkFactory::DrinkType::JUICE )
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
		if( (*it)->isHot() ){
			std::cout << (*it)->getDescription() << '\n';
		}
	}

	std::cout << "\n___COLD_DRINKS___\n";
	for( std::vector< Drink* >::iterator it = Drinks.begin(); it != Drinks.end(); ++it ){
		if( (*it)->isCold() ){
			std::cout << (*it)->getDescription() << '\n';
		}
	}

	std::cout << "\n___DRINK_TEMPERATURE___\n";
	for( std::vector< Drink* >::iterator it = Drinks.begin(); it != Drinks.end(); ++it ){
		std::cout << (*it)->getDescription() << ": " 
			<< Drink::getTemperatureString( (*it)->getTemperature() ) << '\n';
	}

	std::cout << "\n___SUGAR_CONTENT___\n";
	for( std::vector< Drink* >::iterator it = Drinks.begin(); it != Drinks.end(); ++it ){
		std::cout << (*it)->getDescription() << ": " << (*it)->getSugarContent() << "G\n";
	}

	std::cout << std::flush;

	return 0;
}
