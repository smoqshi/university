#include <iostream> // Library for input/output
#include <cmath> // Library for mathematical calculations

using namespace std; // The space of names to simplify the spelling and reading of the code

int main() // Creating the main function of the program
{ // The beginning of the body of the program
	double Y, A1, A2, A = -1.5, C = 2.56; // Announcement of variables and their values

	A1 = (((A + 3 * C) / (2 * A * C)) + 5.3 * pow(10, -3) * pow(A, (2 / 5))); // Calculation of the transit a1 = -0.799
	A2 = (exp(cos(A)) - 0.9 * pow(10, 0.8)); // Calculation of the variable A2 = -4.605
	Y = A1 / A2; // Calculation of the variable y = 0.173

	cout << "A1 |A2 |Y" << endl << "----------|---------|---------" << endl << A1 << " |" << A2 << " |" << Y; // Output of the values ​​of variables A1, A2, Y with stylization for the table
	
	return 0; // The team for returning 0 after completing the execution of the program
} // The end of the body of the program
