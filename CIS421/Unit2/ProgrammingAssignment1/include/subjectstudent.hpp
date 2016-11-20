#ifndef _HPP_SUBJECTSTUDENT_INCLUDED
#define _HPP_SUBJECTSTUDENT_INCLUDED

#include <iostream>
#include <string>
#include <stdlib.h>

#include "observerinstructor.hpp"

class Instructor;

class Student{
	private:
		Instructor *instructor;

		std::string question;

		unsigned short int number;

		void raiseHand();
	public:
		const std::vector< std::string > awnsers = {
			"No idea",
			"Don't know",
			"Prolly",
			"Sure",
			"Unsure"
		};
		
		Student( Instructor* );

		void update();
		void listenToQuestion();
		void awnserQuestion();

		unsigned short int getNumber();
};

#endif

