#include <iostream>
using namespace std;

const int r = 1740;
const float pi = 3.14;

    int main()
    {
        long S, V;
        S = 4 * pi * r * r;                         // Результат = 3802656
        V = 4 * pi * r * r * r;                     // Результат = 66166382592
        cout << "Площа Місяця =" << S << endl;
        cout << "Об'єм Місяця =" << V;
    }