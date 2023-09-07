// Практична робота 1.cpp : Задача №8, 13. Номер в списку 33 
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Задача 8
    int a = 1;
    float b = 12.21;

    double result = 0, e = 2.71828;

    result = (0.81 * pow(a, 1. / 3) - (1 / 2.125) * pow(b, 1. / 3)) * pow(e, a);

    cout << "result = " << result << endl;
   /* 
   //Задача 13
   int a = 3;
    float b = 2.712;

    double result = 0, e = 2.718828, PI = 3.14159, x, y, z;

    x = pow((pow(a, 2) / pow(b, 3)), 2. / 3);
    y = 0.807 * (1 - pow(sin((a - b) * (PI / 4)), 2));
    z = 0.312 * (1 + pow(cos((a + b) * (PI / 4)), 2));

    result = x * pow(e, y / z);
   
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "result = " << result;
    */
}

