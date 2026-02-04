//Name: Kenneth Burroughs
//Project #1
//Project Due Date: 2/2/2026
/*Project Description: In this project, a Fraction class will be used to code a calculator.
This calculator should give the user the ability to specify operations and input operands (Fractions).*/

//Right-click on this file in Project1 to remove it from the project (do not delete)
//Then right-click on the "Project1" and choose to add your own driver into this project.
//Alternatively, you may rename this file to the required naming for submission. Just ensure
//it is in the project.

//Add comments for your submission

#include "Fraction.h"

const string STARS = "****************";

int main(){
	
	//Initialize 4 variables to store the numerators and denominators.
	int n1 {0};
	int n2 {0};
	int d1 {0};
	int d2 {0};
	
	//Prompt the user to enter the numerators and denominators of the fractions.
	cout << "Enter the numerator of the first fraction: ";
	cin >> n1;
	cout << "Enter the denominator of the first fraction: ";
	cin >> d1;
	cout << "Enter the numerator of the second fraction: ";
	cin >> n2;
	cout << "Enter the denominator of the second fraction ";
	cin >> d2;
	cout << endl;
	
    Fraction f1(n1,d1);
    Fraction f2(n2,d2);
    
	//Initialize choice to something other than 0.
	int choice {-1};
	//Loop until user enter "0" to exit the loop.
	while (choice != 0) {
	//Prompt the user operations to perform onto the fractions.
	cout << "Choose an operation to perform onto the two fractions \nusing the corresponding numbers below. Type 0 to exit." << endl << endl;
	cout << "0. Exit program" << endl;
	cout << "1. Compare for equality (==)" << endl;
	cout << "2. Compare for inequality (!=)" << endl;
	cout << "3. Check if the first fraction is less than/equal to the second fraction (<=)" << endl;
	cout << "4. Check if the first fraction is greater than/equal to the second fraction (>=)" << endl;
	cout << "5. Check if the first fraction is less than the second fraction (<)" << endl;
	cout << "6. Check if the first fraction is greater than the second fraction (>)" << endl;
	cout << "7. Find the sum of the fractions (+)" << endl;
	cout << "8. Find the difference of the fractions (-)" << endl;
	cout << "9. Find the product of the fractions (*)" << endl;
	cout << "10. Find the quotient of the fractions (/)" << endl;
	cout << endl;
	cout << "Input: ";
	
	cin >> choice;
	cout << endl;
	cout << STARS << endl;
	
	//Display each command when prompted by user.
	switch (choice) {
		
		case 0: {
			cout << "Exiting program." << endl;
			break;
		}
	
		case 1: {
			if (f1 == f2) {
				f1.PrintReduced(cout), cout << " == ", f2.PrintReduced(cout), cout << endl;
			}
			else {
				cout << "NOT ", f1.PrintReduced(cout), cout << " == ", f2.PrintReduced(cout), cout << endl;
			}
			break;
		}
	
		case 2: {
			if (f1 != f2) {
				f1.PrintReduced(cout), cout << " != ", f2.PrintReduced(cout), cout << endl;
			}
			else {
				cout << "NOT ", f1.PrintReduced(cout), cout << " != ", f2.PrintReduced(cout), cout << endl;
			}
			break;
		}
	
		case 3: {
			if (f1 <= f2) {
				f1.PrintReduced(cout), cout << " <= ", f2.PrintReduced(cout), cout << endl;
			}
			else {
				cout << "NOT ", f1.PrintReduced(cout), cout << " <= ", f2.PrintReduced(cout), cout << endl;
			}
			break;
		}
	
		case 4: {
			if (f1 >= f2) {
				f1.PrintReduced(cout), cout << " >= ", f2.PrintReduced(cout), cout << endl;
			}
			else {
				cout << "NOT ", f1.PrintReduced(cout), cout << " >= ", f2.PrintReduced(cout), cout << endl;
			}
			break;
		}
	
		case 5: {
			if (f1 < f2) {
				f1.PrintReduced(cout), cout << " < ", f2.PrintReduced(cout), cout << endl;
			}
			else {
				cout << "NOT ", f1.PrintReduced(cout), cout << " < ", f2.PrintReduced(cout), cout << endl;
			}
			break;
		}
	
		case 6: {
			if (f1 > f2) {
				f1.PrintReduced(cout), cout << " > ", f2.PrintReduced(cout), cout << endl;
			}
			else {
				cout << "NOT ", f1.PrintReduced(cout), cout << " > ", f2.PrintReduced(cout), cout << endl;
			}
			break;
		}
	
		case 7: {
			f1.PrintReduced(cout);
			cout << " + ";
			f2.PrintReduced(cout);
			cout << " = ";
			(f1 + f2).PrintReduced(cout);
			cout << endl;
			break;
		}
	
		case 8: {
			f1.PrintReduced(cout);
			cout << " - ";
			f2.PrintReduced(cout);
			cout << " = ";
			(f1 - f2).PrintReduced(cout);
			cout << endl;
			break;
		}
	
		case 9: {
			f1.PrintReduced(cout);
			cout << " * ";
			f2.PrintReduced(cout);
			cout << " = ";
			(f1 * f2).PrintReduced(cout);
			cout << endl;
			break;
		}
	
		case 10: {
			f1.PrintReduced(cout);
			cout << " / ";
			f2.PrintReduced(cout);
			cout << " = ";
			(f1 / f2).PrintReduced(cout);
			cout << endl;
			break;
		}
	
		//Default a general output if input doesn't match an item.
		default: {
			cout << "Invalid choice." << endl;
		}
	}
	
	cout << STARS << endl << endl;
} //End of while loop.
	    
    return 0;
}
