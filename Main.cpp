#include "PersonProblem1.h"
#include <iostream>
using namespace std;

// Print the array
void printArray(PersonProblem1** person, int numElements) {

	for (int i = 0; i < numElements; i++) {

		cout << (person[i]->getName()) << " " << (person[i]->getSalary()) << endl;

	}
}

// Main Function
int main() {

	// Get the size of the array
	int numElements;
	cout << "Enter the number of people in the array: ";
	cin >> numElements;

	// Create the array
	PersonProblem1* person[numElements];

	// Create an object person for every element in the array
	for (int i = 0; i < numElements; i++) {

		person[i] = new PersonProblem1;
		person[i]->setPerson();

	}
	
	cout << endl;
	
	cout << "Array before being sorted: " << endl;
	printArray(person, numElements);
	cout << endl;

	cout << "Sorting array by NAME in ascending order: " << endl;
	bsort(person, numElements, true);
	printArray(person, numElements);
	cout << endl;

	cout << "Sorting array by SALARY in ascending order: " << endl;
	bsort(person, numElements, false);
	printArray(person, numElements);
	cout << endl;

	return 0;

}

