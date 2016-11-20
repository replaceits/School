#include "tea.hpp"

bool Tea::isCold(){
	return true;
}

bool Tea::isHot(){
	return false;
}

std::string Tea::getName(){
	return "Tea";
}

std::string Tea::getDescription(){
	return "Unknown Tea";
}

float Tea::getSugarContent(){
	return 50.0f;
}

Drink::Temperature Tea::getTemperature(){
	return Drink::Temperature::COLD;
}
