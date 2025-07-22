#include <iostream>
#include <cmath>
using namespace std;

// Define the function f(x)
double f(double x) {
    return 0.2 + 25 * x - 200 * pow(x, 2) + 675 * pow(x, 3) - 900 * pow(x, 4) + 400 * pow(x, 5);
}

int main() {
    int n = 4;            // number of subintervals
    double a = 0.0, b = 0.8; // limits of integration
    double h = (b - a) / n;

    // Apply Simpson's 1/3 Rule
    double I = f(a) + f(b);
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            I += 2 * f(x);
        } else {
            I += 4 * f(x);
        }
    }
    I *= h / 3.0;

    cout << "Approximate integral using Simpson's 1/3 Rule: " << I << endl;

    return 0;
}