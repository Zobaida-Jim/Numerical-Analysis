#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
    return exp(-x) - x;
}
int main()
{
    double x0, x1, x2;
    int itr = 100;
    cout << "Enter Xi-1 and Xi : ";
    cin >> x0 >> x1;
    int it = 0;
    while (it < itr)
    {
        double fx0 = f(x0);
        double fx1 = f(x1);
        x2 = x0 - ((fx0 * (x0 - x1)) / (fx0 - fx1));

        if (x1 == x2)
        {
            cout << "Root : " << x2 << endl;
            return 0;
        }

        x0 = x1;
        x1 = x2;
        it++;
    }
}