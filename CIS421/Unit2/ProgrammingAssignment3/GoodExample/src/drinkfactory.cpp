#include "drinkfactory.hpp"

DrinkFactory::DrinkFactory(){}
DrinkFactory::~DrinkFactory(){}

DrinkFactory& DrinkFactory::getInstance(){
	static DrinkFactory instance = DrinkFactory();
	return instance;
}

