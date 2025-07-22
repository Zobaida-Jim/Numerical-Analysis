#include<iostream>
#include<cmath>
using namespace std;

#define f1(x,y,z) (7+y)/2
#define f2(x,y,z) (1+x+z)/2
#define f3(x,y,z) (1+y)/2

int main()
{
    double e;
    cout<<"Enter the tollerance : ";
    cin>>e;

    double x,y,z,x0=0,y0=0,z0=0,e1,e2,e3;
    int itr = 0;

    do{
        x = f1(x0,y0,z0);
        y = f2(x,y0,z0);
        z = f3(x,y,z0);

        itr++;

        e1 = fabs(x0-x);
        e2 = fabs(y0-y);
        e3 = fabs(z0-z);

        x0 = x;
        y0 = y;
        z0 = z;
    }while(e<e1 || e<e2 || e<e3);

    cout<<"Total iteration : "<<itr<<endl;
    cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
}