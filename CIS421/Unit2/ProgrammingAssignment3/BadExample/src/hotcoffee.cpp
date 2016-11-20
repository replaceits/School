#include "hotcoffee.hpp"

bool HotCoffee::isCold(){
	return false;
}

bool HotCoffee::isHot(){
	return true;
}

std::string HotCoffee::getName(){
	return "Coffee";
}

std::string HotCoffee::getDescription(){
	return "Hot Coffee";
}

float HotCoffee::getSugarContent(){
	return 25.0f;
}

Drink::Temperature HotCoffee::getTemperature(){
		return Drink::Temperature::HOT;
}

