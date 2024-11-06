#include <iostream>
using namespace std;
 
int main() {
    int k = 3;
    int l = 7;
    int m = 18;

    if (k%l==0)
    {
        cout << "k кратно l\n";
    }
    if (k%m==0)
    {
        cout << "k кратно m\n";
    }
    if (l%k==0)
    {
        cout << "l кратно k\n";
    }
    if (l%m==0)
    {
        cout << "l кратно m\n";
    }
    if (m%k==0)
    {
        cout << "m кратно k\n";
    }
    if (m%l==0);
    {
        cout << "m кратно l\n";
    }
}


