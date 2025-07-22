#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double Xr, Xl = 0.0, Xu = 1.0, Es = 10.0, Ea = 11.0, itr = 0, Xr_prev;
    cout << "Function is = 6x^3 - 5x^2 + 7x - 2" << endl;
    double fXl = 6.0 * pow(Xl, 3) - 5.0 * pow(Xl, 2) + 7.0 * Xl - 2.0;
    double fXu = 6.0 * pow(Xu, 3) - 5.0 * pow(Xu, 2) + 7.0 * Xu - 2.0;
    double fXr;
    if (fXl * fXu > 0)
    {
        cout << "There is no roots in this interval\n";
        return 0;
    }
    while (Ea > Es)
    {
        Xr_prev = Xr;
        Xr = (Xu + Xl) / 2.0;
        fXr = 6.0 * pow(Xr, 3) - 5.0 * pow(Xr, 2) + 7.0 * Xr - 2.0;
        if (itr > 0)
        {
            Ea = abs((Xr - Xr_prev) / Xr) * 100.0;
        }
        if (fXr * fXl < 0)
        {
            Xu = Xr;
        }
        else if (fXr * fXl > 0)
        {
            Xl = Xr;
        }
        itr++;
    }
    cout<<"Root = "<<Xr<<endl<<"Iteration : "<<itr<<endl<<"F(Xr) : "<<fXr<<endl<< "Error : "<<Ea<<endl;
}