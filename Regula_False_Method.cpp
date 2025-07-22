#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return pow(x, 4) + 8 * pow(x, 3) - 35 * pow(x, 2) + 450 * x - 1001;
}

void Regula_False(double xl, double xu, double Es = 2.0, int maxItr = 100)
{
    if (f(xl) * f(xu) > 0)
    {
        cout << "Invalid Interval" << endl;
        return;
    }
    for (int i = 0; i < maxItr; i++)
    {
        double xr = ((xl * f(xu)) - (xu * f(xl))) / (f(xu) - f(xl));
        if (fabs(f(xr)) < Es)
        {
            cout << "Root found at X = " << xr << " After " << i << " iterations" << endl;
            cout << "The Error is " << fabs(f(xr)) << endl;
            return;
        }
        if (f(xl) * f(xr) < 0)
        {
            xu = xr;
        }
        else
        {
            xl = xr;
        }
    }
    cout << "Root not found in this Iteration" << endl;
}
int main()
{
    double xl = 2, xu = 3;
    Regula_False(xl, xu);

    return 0;
}