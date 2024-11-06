#include <iostream>
using namespace std;
 
int main() {
    int A = 4;
    int B = 5;
    int C = 3;

    int R = 2;
    int S = 3;
    int T = 1;

    int S1 = A * B * C;
    int S2 = R * S * T;

    if ((S1 > S2) && ((A > R && B > S && C > T) || (A > R && B > T && C > S) || (A > S && B > R && C > T) || (A > S && B > T && C > R) || (A > T && B > R && C > S) || (A > T && B > S && C > R)))
    {
        cout << "Можно упаковать\n";
    }
    else
    {
        cout << "Нельзя упаковать\n";
    }
}