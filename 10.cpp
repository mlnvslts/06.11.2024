#include <iostream>
using namespace std;
 
int main() {
    int x = 432;
    int a = x / 100;
    int b = (x / 10) % 10;
    int c = (x % 100) % 10;
    
    if ((a + b + c) % 3 == 0)
    {
        cout << "Число делится на 3\n";
    }
    else 
    {
        cout << "Число не делится на 3\n";
    }
}