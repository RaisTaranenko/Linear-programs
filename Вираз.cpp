#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

    int main()
    {
    	double g, x, y;

	    cout << "Область визначень x: будь яке число" << endl;
	    cout << "Область визначень y: будь яке число окрім 0" << endl;
	    
	    cout << "Введіть x:";
	    cin >> x;
	    
	    cout << "Введіть y:";
	    cin >> y;
	    
	    if (y != 0)
	{
		g = sqrt((cos(x) - cos(y)) * pow((sin((x - y) / (2 * y))), 2));
		cout << "Значення g =" << g << endl;
	}
	else
	{
		cout << "Невірне y!" << endl;
		exit;
	}
    }