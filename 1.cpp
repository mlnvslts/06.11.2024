#include <iostream>
using namespace std;
 
int main() {
    float a = 3;
    float b = 5;
    float c = 7;

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Такой треугольник существует\n";

        if (a == b == c)
        {
            cout << "Треугольник равносторонний\n";
        }
        else if (b == c || a == c || a == b)
        {
            cout << "Треугольник равнобедренный\n";
        }
        else{
            cout << "Треугольник разносторонний\n";
        }
    }
    else 
    {
        cout << "Такого треугольника не существует\n";
    }

}