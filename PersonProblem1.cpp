#include "PersonProblem1.h"
#include <iostream>
#include <string>
using namespace std; 

// Bubble Sort Function
void bsort(PersonProblem1** person, int numElements, bool SalaryOrName) {

	for (int i = 0; i < numElements; i++) {
		for (int j = i + 1; j < numElements; j++) {
			
			if ((SalaryOrName == false && person[i]->getSalary() > person[j]->getSalary())
				|| (SalaryOrName == true && person[i]->getName() > person[j]->getName()))

				// Pass in the 2 current elements into order
				order( (person + i), (person + j) );

		}
	}
}

// Order function, swaps the 2 elements
void order(PersonProblem1** x, PersonProblem1** y) {

	PersonProblem1 temp;

	temp = **x;
	**x = **y;
	**y = temp;

}

// Each person object has a name and salary
void PersonProblem1::setPerson() {

	cout << "Enter the name of the person: ";
	cin >> name;
	cout << "Enter the salary of the person: ";
	cin >> salary;

}

// Get the name of the person
string PersonProblem1::getName() {
	return this -> name;
}

// Get the salary of the person
float PersonProblem1::getSalary() {
	return this -> salary;
}

