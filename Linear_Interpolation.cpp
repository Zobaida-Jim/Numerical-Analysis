#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x = 2,x0 = 1, x1 = 6, x1min = 4;
    double fx0 = 0,fx1 = 1.791759,fx1min = 1.386294;
    double trgt = 0.6931472;

    // x1 = 6
    double fx = fx0 + ((fx1 - fx0)/(x1 - x0))*(x-x0);
    double First_error = ((trgt - fx)/trgt)*100;
    cout<<"f(x) = "<<fx<<setprecision(8)<<" Error : "<<setprecision(3)<<First_error<<" %"<<endl;

    // now x1 = 4
    double f_x = fx0 + ((fx1min - fx0) / (x1min - x0))*(x - x0);
    double Scnd_error = ((trgt - f_x)/trgt)*100;
    cout<<"New f(x) : "<<f_x<<" Error : "<<setprecision(3)<<Scnd_error<<" %"<<endl; 
}