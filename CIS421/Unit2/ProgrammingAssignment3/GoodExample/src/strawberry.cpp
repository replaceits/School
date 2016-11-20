#include "strawberry.hpp"

Strawberry::Strawberry( Drink *drink ) : AddonsDecorator( drink ){
	this->sugar = this->getSugarContent() + 5.0f;
}


std::string Strawberry::getDescription(){
	return "Strawberry " + this->drink->getDescription();
}

