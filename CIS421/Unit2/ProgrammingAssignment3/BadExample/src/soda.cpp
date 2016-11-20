#include "soda.hpp"

bool Soda::isCold(){
	return true;
}

bool Soda::isHot(){
	return false;
}

std::string Soda::getName(){
	return "Soda";
}

std::string Soda::getDescription(){
	return "Soda";
}

float Soda::getSugarContent(){
	return 40.0f;
}

Drink::Temperature Soda::getTemperature(){
		return Drink::Temperature::COLD;
}

