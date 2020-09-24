#include <string>
using namespace std;
#ifndef PERSONPROBELM1_H
#define PERSONPROBLEM1_H

// Create a class PersonProblem1
class PersonProblem1 {

	// Private attributes
	private:
		
		string name;
		float salary;

	// Public Functions
	public:

		void setPerson();
		string getName();
		float getSalary();

};

// Declare non-member functions
void bsort(PersonProblem1**, int, bool);
void order(PersonProblem1**, PersonProblem1**);

#endif
