// Варіант 23

#include <iostream>
#include <cmath>

using namespace std;
    
    int main()
    {
        const double x = 2.9;
        double a, w, v, y;
        
        cout << "Веедіть a:";
        cin >> a;
        
        w = sqrt(a + abs(x));
        
        v = pow((cos(a)), 2);
        
        y = pow(v, 3) + pow((cos(w)), 2);
        
        cout << "Значення w =" << w << endl;
        cout << "Значення v =" << v << endl;
        cout << "Значення y =" << y;
    }