// Quafratic Interpolation
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x0 = 1, x1 = 4,x2 = 6, x=2;
    double fx0 = 0, fx1 = 1.386294, fx2 = 1.791759;

    double b0 = fx0;
    double b1 = (fx1 - fx0)/(x1 - x0);
    double b2 = (((fx2 - fx1)/(x2-x1)) - ((fx1 - fx0)/(x1-x0))) / (x2 - x0);

    double f2_x = b0 + b1*(x-x0) + b2*(x-x0)*(x-x1);

    cout<<"b0 = "<<b0<<" , b1 = "<<b1<<" , b2 = "<<b2<<endl;
    cout<<"f(x) : "<<f2_x<<endl;
}