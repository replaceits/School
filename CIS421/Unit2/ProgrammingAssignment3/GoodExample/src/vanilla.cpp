#include "vanilla.hpp"

Vanilla::Vanilla( Drink *drink ) : AddonsDecorator( drink ){
	this->sugar = this->getSugarContent() + 7.0f;
}


std::string Vanilla::getDescription(){
	return "Vanilla " + this->drink->getDescription();
}

