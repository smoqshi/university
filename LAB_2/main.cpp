#include <iostream> // Input/output library
#include <iomanip> // Formats library for the input/output library
#include <cmath> // Library of mathematical functions
using namespace std; // Namespace for the input/output library
int main() { // The beginning of the main body of the program
	cout << "Program started..."; // Conclusion of a program for starting the program
	int Y, p, t, A = 5; // Innialization of values
	double X, Z10, E = 2.23; // Innialization of values
	cout << endl << "Input X:"; // The conclusion of the message about the need to enter a value
	cin >> X; // Record of the introduced value
	cout << endl << "Input Y:"; // The conclusion of the message about the need to enter a value
	cin >> Y; // Record of the introduced value
	t = Y % A; // Calculation of the variable
	p = Y / A; // Calculation of the variable
	cout << setw(10) << "X" << "|" << setw(10) << "Y" << "|" << setw(10) << "Z10" << endl; // Output header of the results of the results
	cout << setfill('-') << setw(11) << "+" << setfill('-') << setw(11) << "+" << setfill('-') << setw(11) << " "; // Division of the dividing line of the table
	switch (Y) { // Operator for comparing the variable with various values
	case 0: // Comparison of the operator with the value of N
		if (cos(X) > 0) { // Verification operator under the condition
			Z10 = E * X; // Calculation of the variable
			break; // Interruption of the program in the operator
		} else { // Operator for values ​​that have not passed the condition if
			Z10 = 0.5 * X; // Calculation of the variable
			break; // Interruption of the program in the operator
		} // The end of the body of the operator
		break; // Interruption of the program in the operator
	case 1: // Comparison of the operator with the value of N
		Z10 = pow(pow(X, 2) + pow(E, 2), (1.0 / 3.0)); // Calculation of the variable
		break; // Interruption of the program in the operator
	case 2: // Comparison of the operator with the value of N
		Z10 = 3.7 * pow(10, 0.1) * A + pow(abs(X), (1.0 / 3.0)); // Calculation of the variable
		break; // Interruption of the program in the operator
	default: // The use of other values ​​that have not been tested early
		if ((Y >= 3) & (Y <= 10)) { // Verification operator under the condition
			Z10 = A + E; // Calculation of the variable
			break; // Interruption of the program in the operator
		} // The end of the body of the operator
		if ((Y < 0) | (Y > 10)) { // Verification operator under the condition
			if (t == 0) { // Verification operator under the condition
				Z10 = Y; // Calculation of the variable
				break; // Interruption of the program in the operator
			} else { // Operator for values ​​that have not passed the condition if
				Z10 = X; // Calculation of the variable
				break; // Interruption of the program in the operator
			} // The end of the body of the operator
			break; // Interruption of the program in the operator
		} // The end of the body of the operator
	} // The end of the body of the operator
	cout << endl << setfill(' ') << setw(10) << X << "|" << setw(10) << Y << "|" << setw(10) << Z10; // Conclusion of the obtained values ​​in the form of a table
	return 0; // Return of code 0 at the end of the program
} // The end of the body of the program
