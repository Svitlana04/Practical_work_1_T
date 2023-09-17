// Практична робота 2.cpp : Варіант 33
//
#include <iostream>
using namespace std;


int main()
{
	/*int x, y;
	double result;

	cout << "Enter x value:";
	cin >> x;
	cout << "Enter y value:";
	cin >> y;

	if (x <= 1) {
		result = 0.5*cos(x)+4*x;
	}
	if (x < 0) {
		result = 0.25*pow(x,4)+2*pow(x,2);
	}
	if (x > 1) {
		result = 0.9 * pow(x, 1. / 2) - 0.8 * x;
	}

	cout << "Result:" << result;

	return 0;*/
	int x, y;

	cout << "Enter x value:";
	cin >> x;
	cout << "Enter y value:";
	cin >> y;



	if (pow(x, 2) + pow(y, 2) <= 1 && pow(pow(x, 2) + pow(y, 2), 1. / 2) <= 1) {
		cout << "WIN";

	}
	else cout << "LOSE";

}