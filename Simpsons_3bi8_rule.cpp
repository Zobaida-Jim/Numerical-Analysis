#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
    return (0.2+25*x - 200*(x*x) + 675*pow(x,3) - 900*pow(x,4) + 400*pow(x,5));
}

int main()
{
    double a = 0,b = 0.8;
    double h = (b-a)/3;
    double fx0 = f(a);
    double fx1 = f(h);
    double fx2 = f(a+2*h);
    double fx3 = f(b);
    cout<<fx0<<" "<<fx1<<" "<<fx2<<" "<<fx3<<endl;

    double I = (b-a)*(fx0 + 3*(fx1+fx2) + fx3)/8;

    cout<<I<<endl;
}