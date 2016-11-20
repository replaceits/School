#include "tempdecorator.hpp"

TempDecorator::TempDecorator( Drink *drink ){
	this->drink = drink;
	this->name = drink->getName();
	this->sugar = drink->getSugarContent();
}

