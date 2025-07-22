#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return exp(-x) - x;
}
double fprime(double x)
{
    return (-exp(-x) - 1);
}

int main()
{
    double x, next_x;
    int itr = 100;
    cout << "Enter initial Value : ";
    cin >> x;
    int it = 0;
    while (it < itr)
    {
        double fx = f(x);
        double fprimex = fprime(x);
        next_x = x - (fx / fprimex);

        if (x == next_x)
        {
            cout << "Root : " << next_x << endl;
            return 0;
        }
        x = next_x;
        it++;
    }
}