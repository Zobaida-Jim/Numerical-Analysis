// Simpson's rule 1/3
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
    double x1 = (b - a) / 2;
    double fx0 = f(a);
    double fx2 = f(b);
    double fx1 = f(x1);

    double I = (b - a) * ((fx0 + 4 * fx1 + fx2) / 6);

    cout << "Integration : " << I << endl;
}