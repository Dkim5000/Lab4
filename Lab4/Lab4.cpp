// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int A;
	cout << "Factorial: " << endl;
	cout << "Enter a number: ";
	cin >> A;
	if (A < 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> A;
	}
	int i;
	int n;
	n = 1;
	cout << "n! = ";
	for (i = 1; i <= A; i++) {
		n = i * n;
		cout << i;
		if (i < A) {
			cout << " * ";
		}
	}
	cout << " = " << n << endl;
}
void arithmetic() {
	int A;
	cout << "Arithmetic: " << endl;
	cout << "Enter a number to start at: ";
	cin >> A;
	cout << "Enter a number to add each time: " << endl;
}
void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;

		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}

		else if (choice == 1) {
			factorial();
		}

		else if (choice == 2) {
			arithmetic();
		}

		else if (choice == 3) {
			geometric();
		}

		cout << "Go Again? [Y/N] ";
		cin >> again;

	} while (again == 'y' || again == 'Y');
}