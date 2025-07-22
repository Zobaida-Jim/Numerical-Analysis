#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x0 = 1, x1 = 4, x2 = 6, x = 2;
    double fx0 = 0, fx1 = 1.386294, fx2 = 1.791760;

    double f1x = ((x - x1) / (double)(x0 - x1)) * fx0 + ((x - x0) / (double)(x1 - x0)) * fx1;
    double f2x = (((x - x1) * (x - x2)) / (double)((x0 - x1) * (x0 - x2))) * fx0 + (((x - x0) * (x - x2)) / (double)((x1 - x0) * (x1 - x2))) * fx1 + (((x - x0) * (x - x1)) / (double)((x2 - x0) * (x2 - x1))) * fx2;

    cout << "f1(x) = " << f1x << endl
         << "f2(x) = " << f2x << endl;
}