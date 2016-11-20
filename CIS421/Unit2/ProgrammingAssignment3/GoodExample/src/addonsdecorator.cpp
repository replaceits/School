#include "addonsdecorator.hpp"

AddonsDecorator::AddonsDecorator( Drink *drink ){
	this->drink = drink;
	this->name = drink->getName();
	this->sugar = drink->getSugarContent();
	this->temp = drink->getTemperature();
}

