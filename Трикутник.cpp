#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 4.0;
    double y2 = 3.0;
    double x3 = -4.0;
    double y3 = 5.0;

    double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));

    double p = (a + b + c) / 2.0;                                   // Напівпериметр
    double S = sqrt(p * (p - a) * (p - b) * (p - c));               // Площа
    double h = 2 * S / a;                                           // Висота
    double l = 2 * (sqrt(a * c * p * (p - b))) / (a + c);           // Бісектриса
    
    cout << "Висота а =" << h << endl;
    cout << "Бісектриса b =" << l;
    
    return 0;
}