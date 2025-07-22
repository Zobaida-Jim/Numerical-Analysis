#include <iostream>
using namespace std;

double det2x2(double a, double b, double c, double d) {
    return a * d - b * c;
}

int main() {
    double a1, b1, c1;
    double a2, b2, c2;

    cout << "Enter coefficients of the 1st equation (a1 b1 c1): ";
    cin >> a1 >> b1 >> c1;
    cout << "Enter coefficients of the 2nd equation (a2 b2 c2): ";
    cin >> a2 >> b2 >> c2;

    double D  = det2x2(a1, b1, a2, b2);
    double Dx = det2x2(c1, b1, c2, b2);
    double Dy = det2x2(a1, c1, a2, c2);

    if (D == 0) {
        if (Dx == 0 && Dy == 0)
            cout << "Infinite solutions exist.\n";
        else
            cout << "No solution exists.\n";
    } else {
        double x = Dx / D;
        double y = Dy / D;
        cout << "Unique solution:\n";
        cout << "x = " << x << ", y = " << y << endl;
    }

    return 0;
}
