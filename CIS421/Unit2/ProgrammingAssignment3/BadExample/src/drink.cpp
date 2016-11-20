#include "drink.hpp"

bool Drink::isHot(){
	return false;
}

bool Drink::isCold(){
	return true;
}

Drink::Temperature Drink::getTemperature(){
	return Drink::Temperature::COLD;
}

float Drink::getSugarContent(){
	return 30.0f;
}

std::string Drink::getName(){
	return "Unknown";
}

std::string Drink::getDescription(){
	return "None";
}

