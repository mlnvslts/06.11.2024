#include <iostream>
using namespace std;
 
int main() {
    float a = 4;
    float b = 4;
    float c = 4;

    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
    {
        cout << "Треугольник прямоугольный\n";
    }
    else if (a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a)
    {
        cout << "Треугольник тупоугольный\n";
    }
    else
    {
        cout << "Треугольник остроугольный\n";
    } 

}