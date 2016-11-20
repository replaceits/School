#include "observerinstructor.hpp"

std::string Instructor::getQuestion(){
	return this->question;
}

void Instructor::setQuestion( std::string question ){
	this->question = question;
	this->notify();
}

void Instructor::notify(){
	for( std::vector< Student* >::iterator it = this->students.begin(); it != this->students.end(); ++it ){
		(*it)->update();
	}
}

void Instructor::askQuestion(){
	std::cout << "The teacher asked the question \"" << this->question << "\"\n" << std::endl;
	for( std::vector< Student* >::iterator it = this->students.begin(); it != this->students.end(); ++it ){
		(*it)->listenToQuestion();
	}
	Student *studentCalledOn = this->raisedHands.at( rand() % raisedHands.size() );
	std::cout << "\nThe teacher calls on Student " << studentCalledOn->getNumber() << std::endl;
	studentCalledOn->awnserQuestion();
	this->raisedHands.erase( this->raisedHands.begin(), this->raisedHands.end() );
}

unsigned short int Instructor::attach( Student *student ){
	this->students.push_back( student );
	return this->students.size();
}

void Instructor::seeRaisedHand( Student *student ){
	this->raisedHands.push_back( student );
}

