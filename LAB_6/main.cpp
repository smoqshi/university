#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int i = 0;
  double Y[100], X = 0.1, Xk = 1, N = 10, P[10]{ 1 };
  double K[N]{ 0,1,2,3,4,5,6,7,8,9 };
  do {
    do {
    P[i + 1] = P[i] * ((2 * K[i + 1] + 1) * pow(X, 2 * K[i + 1])) / K[i + 1];
    Y[i] = (1 + 2 * pow(X, 2)) * exp(pow(X, 2));
    X += Xk / N;
    cout << i << " " << P[i] << " " << Y[i] << endl;
    i++;
   } while (X < 1.0);
 } while (i < 10);
return 0;
}
