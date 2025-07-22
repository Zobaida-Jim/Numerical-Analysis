#include <iostream>
using namespace std;

double det3x3(double a1, double b1, double c1,
              double a2, double b2, double c2,
              double a3, double b3, double c3) {
    return a1 * (b2 * c3 - b3 * c2)
         - b1 * (a2 * c3 - a3 * c2)
         + c1 * (a2 * b3 - a3 * b2);
}

int main() {
    double a1, b1, c1, d1;
    double a2, b2, c2, d2;
    double a3, b3, c3, d3;

    cout << "Enter coefficients of the 1st equation (a1 b1 c1 d1): ";
    cin >> a1 >> b1 >> c1 >> d1;
    cout << "Enter coefficients of the 2nd equation (a2 b2 c2 d2): ";
    cin >> a2 >> b2 >> c2 >> d2;
    cout << "Enter coefficients of the 3rd equation (a3 b3 c3 d3): ";
    cin >> a3 >> b3 >> c3 >> d3;

    double D  = det3x3(a1, b1, c1, a2, b2, c2, a3, b3, c3);
    double Dx = det3x3(d1, b1, c1, d2, b2, c2, d3, b3, c3);
    double Dy = det3x3(a1, d1, c1, a2, d2, c2, a3, d3, c3);
    double Dz = det3x3(a1, b1, d1, a2, b2, d2, a3, b3, d3);

    if (D == 0) {
        if (Dx == 0 && Dy == 0 && Dz == 0)
            cout << "Infinite solutions exist.\n";
        else
            cout << "No unique solution exists.\n";
    } else {
        double x = Dx / D;
        double y = Dy / D;
        double z = Dz / D;
        cout << "Unique solution:\n";
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }

    return 0;
}
