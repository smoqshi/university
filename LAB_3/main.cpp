#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
int i = 0;
double F10, B, Sum1 = 0, Sum4 = 0, Pro1 = 0, Xn = 4.0, Xk = 7.0, H = 0.2, K = (Xk - Xn + H) / H, U1 = 0.01, U2 = 0.02, W1 = -0.2, X = Xn, Arr[16]{ NULL };
string ArrCh[16]{"No"};
cout << setfill(' ') << setw(21) << "X|" << setfill(' ') << setw(21) << "F10|" << setfill(' ') << setw(20) << "R1" << endl;
do {
	B = 2, 8 * pow(10, -2) * sin(X);
	F10 = pow((1 + cos(B)), 1 / 4) * pow(sin(X), 3);
	if (F10 < U1) {
		Sum1 = Sum1 + F10;
			if (Pro1 == 0) {
			Pro1 = F10;
			}	else {
			Pro1 *= F10;
		}
	}
	if (F10 >= U2){
		Sum4 = Sum4 + F10;
	}
	Arr[i] = F10;
	if (F10 < W1) {
		ArrCh[i] = "Yes";
	}
	cout << setfill(' ') << setw(20) << X << "|" << setfill(' ') << setw(20) << Arr[i] << "|" << setfill(' ') << setw(20) << ArrCh[i] << endl;
	X += H;
	i++;
} while ((X <= (Xk + H)));
	cout << setfill('-') << setw(80) << "-" << endl;
	cout << setfill(' ') << setw(21) << "K|" << setfill(' ') << setw(21) << "S1|" << setfill(' ') << setw(20) << "S4|" << setfill(' ') << setw(20) << "P1" << endl;
	cout << setfill(' ') << setw(20) << K << "|" << setfill(' ') << setw(20) << Sum1 << "|" << setfill(' ') << setw(20) << Sum4 << "|" << setfill(' ') << setw(20) << Pro1 << endl;

	return 0;
}
