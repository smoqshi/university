#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
double A = 0.0, B = 1.0, X[100]{}, K = 0.0, E = 0.0001;
do {
	int i = 0;
	X[i] = (exp(A) - exp(-A) - 2.0) / K;
	std::cout << " " << "Iteration" << setw(10) << "" << "F(X)" << setw(10) << " " << "K = " << K << endl;
	std::cout << " " << i << setw(18) << "" << X[i] << endl;
 	do {
 		X[i + 1] = X[i] - (exp(X[i]) - exp(-X[i]) - 2.0) / K;
		i++;
 		std::cout << " " << i << setw(18) << " " << X[i] << endl;
 		if (i == 100) break;
 	} while (i < 100 && abs(X[i - 1] - X[i]) <= E);
	K+=1.0;
}while(K < 10.0);
return 0;
}
