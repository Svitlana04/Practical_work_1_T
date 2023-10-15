// Практична робота 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	/*
    Задача 1
    double x;
	for (int i = 1; i <= 5; i++) {
		cout << "Enter value x #" << i << endl;
		cin >> x;

		double y = sin(x) + 1.5 * x;
		cout << "The values of the function y = sin(x) + 1.5x for different values of x = " << x << ": " << y << endl;
	 }*/
   /* Задача 2
    double number = 1; 

    for (int i = 3; i <= 100; i += 3) {
        number *= i; 
    }

    cout << "Добуток чисел, кратних 3 і не більших за 100: " << number << endl;

    return 0;
    */

    // Задача 3
    double a, b, h;

    cout << "Введіть початок відрізку a: ";
    cin >> a;
    cout << "Введіть кінець відрізку b: ";
    cin >> b;
    cout << "Введіть крок h: ";
    cin >> h;

    cout << "-------------------" << endl;
    cout << ": X : Y :" << endl;
    cout << "-------------------" << endl;


    double x = a;
    while (x <= b) {
        if (x >= -1.0 && x <= 1.0) {
            double y = sin(x) + sqrt(-x);
            cout << " : " << x << " : " << y <<  " : " << endl;
        }
        else {
            cout << "Значення x не належить області визначення функції." << endl;
            break;
        }
        x += h;
    }

    cout << "-------------------" << endl;

    return 0;
}
