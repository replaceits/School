#include "hot.hpp"

Hot::Hot( Drink *drink ) : TempDecorator( drink ){
	this->temp = Drink::Temperature::HOT;
}

std::string Hot::getDescription(){
	return "Hot " + this->drink->getDescription();
}

