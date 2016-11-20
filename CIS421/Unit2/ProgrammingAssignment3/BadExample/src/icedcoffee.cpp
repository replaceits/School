#include "icedcoffee.hpp"

bool IcedCoffee::isCold(){
	return true;
}

bool IcedCoffee::isHot(){
	return false;
}

std::string IcedCoffee::getName(){
	return "Coffee";
}

std::string IcedCoffee::getDescription(){
	return "Iced Coffee";
}

float IcedCoffee::getSugarContent(){
	return 35.0f;
}

Drink::Temperature IcedCoffee::getTemperature(){
		return Drink::Temperature::COLD;
}

