// Практична робота 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   
   //Задача 1
    bool answer;
     int value;

     cout << "Enter a value: ";
     cin >> value;

     answer = (value >= 0 && value <= 10) || (value * 2 > -2 && value * 2 < 20) || ((value - 1) > 1 && (value - 1) / 2 < 10) || (value == 111);
         cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
     return 0;

     /*
     Задача 2
     float num1, num2, num3, num4, num5;
     // cout << num1 << num2 << num3 << num4 << num5;
     cin >> num1 >> num2 >> num3 >> num4 >> num5;

     cout << setprecision(2) << num1 << '\n';
     cout << setprecision(3) << num2 << '\n';
     cout << setprecision(7) << num3 << '\n';
     cout << setprecision(3) << num4 << '\n';
     cout << setprecision(1) << num5 << '\n';
     return 0;*/

     /* Задача 3
     float num1, num2;
    cout << "Enter 1: " << '\n';
    cin >> num1;
    cout << "Enter 2: " << '\n';
    cin >> num2;

    float result1 = 1.0 / num1;
    float result2 = 1.0 / num2;

    if (result1 == result2) {
        cout << "True" << '\n';
    }
    else {
        cout << "False" << '\n';
    }
    */


     /*  
     Задача 4
     int firstNumber, secondNumber, thirdNumber, fourthNumber;

         cout << "Enter firstNumber (1-255): ";
         cin >> firstNumber;

         if (firstNumber < 1 || firstNumber > 255) {
             cout << "Error" << endl;
             return true;
         }
         cout << "Enter secondNumber (1-255): ";
         cin >> secondNumber;
         if (secondNumber < 1 || secondNumber > 255) {
             cout << "Error" << endl;
             return true;
         }
         cout << "Enter thirdNumber (1-255): ";
         cin >> thirdNumber;
         if (thirdNumber < 1 || thirdNumber > 255) {
             cout << "Error" << endl;
             return true;
         }
         cout << "Enter fourthNumber (1-255): ";
         cin >> fourthNumber;
         if (fourthNumber < 1 || fourthNumber > 255) {
             cout << "Error" << endl;
             return true;
         }

         cout << "IP-address: " << firstNumber << "." << secondNumber << "." << thirdNumber << "." << fourthNumber << endl;

         */




}
