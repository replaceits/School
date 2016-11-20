#include "hottea.hpp"

bool HotTea::isCold(){
	return false;
}

bool HotTea::isHot(){
	return true;
}

std::string HotTea::getName(){
	return "Tea";
}

std::string HotTea::getDescription(){
	return "Hot Tea";
}

float HotTea::getSugarContent(){
	return 25.0f;
}

Drink::Temperature HotTea::getTemperature(){
		return Drink::Temperature::HOT;
}

