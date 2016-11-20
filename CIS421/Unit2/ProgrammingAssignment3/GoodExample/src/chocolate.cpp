#include "chocolate.hpp"

Chocolate::Chocolate( Drink *drink ) : AddonsDecorator( drink ){
	this->sugar = this->getSugarContent() + 10.0f;
}


std::string Chocolate::getDescription(){
	return "Chocolate " + this->drink->getDescription();
}

