#include <iostream>
#include <cmath>

using namespace std;

    int main()
    {
        float a, b, z1, z2;
        
        cout << "Введіть значення а:";
        cin >> a;
        cout << "Введіть значення b:";
        cin >> b;
        
        z1 = (cos(a) - cos(b)) * (cos(a) - cos(b)) - (sin(a) - sin(b)) * (sin(a) - sin(b));     // Результат при а=40 b=20 1.275
        z2 = - 4 * sin((a - b) / 2) * sin((a - b) / 2) * cos(a + b);                            // Результат при а=40 b=20 1.275
        
        cout << "Значення першого виразу =" << z1 << endl;
        cout << "Значення другого виразу =" << z2;
    }