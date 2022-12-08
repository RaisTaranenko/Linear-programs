#include <iostream>
using namespace std;

    int main()
    {
        int a, V, S;
        cout << "Введіть довжину ребра =";
        cin >> a;
        V = a * a * a;
        S = 4 * a * a;
        cout << "Площа бічної поверхні куба =" << S << endl;
        cout << "Об'єм куба =" << V;
     }