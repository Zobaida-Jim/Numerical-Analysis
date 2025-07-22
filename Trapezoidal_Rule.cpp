//Trapezoidal rule
#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return (0.2 + 25 * x - 200 * pow(x, 2) + 675 * pow(x, 3) - 900 * pow(x, 4) + 400 * pow(x, 5));
}

int main()
{
    double a = 0.0, b = 0.8;
    double fa = f(a);
    double fb = f(b);

    double I = (b - a) * ((f(a) + f(b)) / 2);

    cout << "Integration : " << I << endl;
}