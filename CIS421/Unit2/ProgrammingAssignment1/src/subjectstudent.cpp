#include "subjectstudent.hpp"

Student::Student( Instructor *instructor ){
	this->instructor = instructor;
	this->number = this->instructor->attach( this );
	
}

void Student::raiseHand(){
	std::cout << "Student " << this->number << " raised their hand!\n" << std::flush;
	this->instructor->seeRaisedHand(this);
}

void Student::update(){
	this->question = this->instructor->getQuestion();
}

void Student::listenToQuestion(){
	this->raiseHand();
}

void Student::awnserQuestion(){
	std::cout << "Student " << this->number << " awnsered \"" << this->question << ' ' 
		<< this->awnsers.at( rand() % this->awnsers.size() ) << "\"\n" << std::endl;
}

unsigned short int Student::getNumber(){
	return this->number;
}

