#include <iostream>
using namespace std;
 
int main() {
    float a = 2;
    float b = 6;
    float s = 7;
    float r = 2;

    if ((a <= s && b <= r) || (a <= r && b <= s))
    {
        cout << "Кирпич пролезет\n";
    }
    else
    {
        cout << "Кирпич не пролезет\n";
    }
}