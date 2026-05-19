#include <iostream>
#include <cmath>
using namespace std;

int main() { 
    double x; 
    cout << "Enter number (in radians): "; 
    cin >> x; 

    // ----- sin(x) using Taylor series -----
    int n = 1; // power
    int sign = 1;
    double term = x;        // first term = x^1 / 1!
    double sum = term;

    while (fabs(term) > 1e-6) {
        n += 2;                           // next odd power
        sign = -sign;                     // alternate sign
        term = sign * pow(x, n) / tgamma(n + 1);
        sum += term;
    }
    cout << "sin(x) = " << sum << endl;


    // ----- Series: Σ (1/n)^n -----
    int n1 = 1;
    double term1 = 1.0;     // first term
    double sum1 = term1;

    while (fabs(term1) > 1e-6) {
        n1++;
        term1 = pow(1.0 / n1, n1);
        sum1 += term1;
    }
    cout << "sum =   " << sum1 << endl;


    // ----- cos(x) 
    int n2 = 0;
    int sign2 = 1;
    double term2 = 1.0;     
    double sum2 = term2;

    while (fabs(term2) > 1e-6) {
        n2 += 2;                           // next even power
        sign2 = -sign2;
        term2 = sign2 * pow(x, n2) / tgamma(n2 + 1);
        sum2 += term2;
    }
    cout << "cos(x) = " << sum2 << endl;

    return 0;
}
