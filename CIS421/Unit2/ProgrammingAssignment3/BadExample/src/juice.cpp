#include "juice.hpp"

bool Juice::isCold(){
	return true;
}

bool Juice::isHot(){
	return false;
}

std::string Juice::getName(){
	return "Juice";
}

std::string Juice::getDescription(){
	return "Juice";
}

float Juice::getSugarContent(){
	return 20.0f;
}

Drink::Temperature Juice::getTemperature(){
		return Drink::Temperature::COLD;
}

