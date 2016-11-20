#include "icedtea.hpp"

bool IcedTea::isCold(){
	return true;
}

bool IcedTea::isHot(){
	return false;
}

std::string IcedTea::getName(){
	return "Tea";
}

std::string IcedTea::getDescription(){
	return "Iced Tea";
}

float IcedTea::getSugarContent(){
	return 60.0f;
}

Drink::Temperature IcedTea::getTemperature(){
	return Drink::Temperature::COLD;
}
