#include "cold.hpp"

Cold::Cold( Drink *drink ) : TempDecorator( drink ){
	this->temp = Drink::Temperature::COLD;
}

std::string Cold::getDescription(){
	return "Cold " + this->drink->getDescription();
}

