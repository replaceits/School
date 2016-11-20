#include "drink.hpp"

Drink::Drink(){
	this->temp = Drink::Temperature::UNKNOWN;
	this->sugar = 0.0f;
	this->name = "Unknown";
	this->description = "";
}

bool Drink::isHot(){
	return this->temp == Drink::Temperature::HOT;
}

bool Drink::isCold(){
	return this->temp == Drink::Temperature::COLD;
}

Drink::Temperature Drink::getTemperature(){
	return this->temp;
}

std::string Drink::getTemperatureString( Drink::Temperature temperature ){
	switch( temperature ){
		case Drink::Temperature::HOT:
			return "Hot";
		case Drink::Temperature::COLD:
			return "Cold";
		default:
			return "Unknown";
	}
}

float Drink::getSugarContent(){
	return this->sugar;
}

std::string Drink::getName(){
	return this->name;
}

std::string Drink::getDescription(){
	return this->description + this->name;
}

