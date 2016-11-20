#ifndef _HPP_OBSERVERINSTRUCTOR_INCLUDED
#define _HPP_OBSERVERINSTRUCTOR_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

#include "subjectstudent.hpp"

class Student;

class Instructor{
	private:
		std::vector< Student* > students, raisedHands;

		std::string question;

		void notify();

	public:
		std::string getQuestion();
		void setQuestion( std::string );

		void askQuestion();

		unsigned short int attach( Student* );
		void seeRaisedHand( Student* );
};

#endif

