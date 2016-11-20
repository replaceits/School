#include "milkshake.hpp"

bool Milkshake::isCold(){
	return true;
}

bool Milkshake::isHot(){
	return false;
}

std::string Milkshake::getName(){
	return "Milkshake";
}

std::string Milkshake::getDescription(){
	return "Milkshake";
}

float Milkshake::getSugarContent(){
	return 60.0f;
}

Drink::Temperature Milkshake::getTemperature(){
		return Drink::Temperature::COLD;
}

