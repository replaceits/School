#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "observerinstructor.hpp"
#include "subjectstudent.hpp"

int main ( int argc, char* argv[] ){
	srand( time( NULL ) );

	Instructor instructor;
	std::vector< Student* > students;

	for( unsigned short int i = rand() % 8 + 3; i > 0; i-- ){
		students.push_back( new Student( &instructor ) );
	}

	instructor.setQuestion( "Is this a question?" );
	instructor.askQuestion();

	instructor.setQuestion( "Are we on earth?" );
	instructor.askQuestion();

	return 0;
}

