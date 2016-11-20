#include "coffee.hpp"

bool Coffee::isCold(){
	return false;
}

bool Coffee::isHot(){
	return true;
}

std::string Coffee::getName(){
	return "Coffee";
}

std::string Coffee::getDescription(){
	return "Unknown Coffee";
}

float Coffee::getSugarContent(){
	return 30.0f;
}

Drink::Temperature Coffee::getTemperature(){
		return Drink::Temperature::HOT;
}

