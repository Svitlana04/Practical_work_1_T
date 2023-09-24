// Варіант 33, Юхимович Світлана
#include <iostream>
#include <string>
using namespace std;

//Задача 1
int main() {
	int N;
	Value:
	cout << "Enter value: ";
	cin >> N;

	if (N >= 100 && N <= 999) { 
		int digit1 = N / 100;   
		int digit2 = (N / 10) % 10; 
		int digit3 = N % 10;   

		int count = 0; 

		if (digit1 > 5) {
			count++;
		}
		if (digit2 > 5) {
			count++;
		}
		if (digit3 > 5) {
			count++;
		}
           cout << "Digit: " << digit1 << " " << digit2<< " " << digit3 << " " << endl;
		
		cout << "Count digit > 5: " << count << endl;
	}
	else {
		cout << "Invalid number" << endl;
		goto Value;
	}
	
	// Задача 2
	
	int month = 0;

Month: cout<<"Enter the name of the month(1-12):\n";

cin>>month;

switch(month){
    case 1: {cout <<"Enero\nJanuary"; break;}
    case 2:{cout <<"Febrero\nFebruary"; break;}
    case 3:{cout <<"Marzo\nMarch"; break;}
    case 4:{cout <<"Abril\nApril"; break;}
    case 5:{cout <<"Puede\nMay"; break;}
    case 6:{cout <<"Junio\nJune"; break;}
    case 7:{cout <<"Julio\nJuly"; break;}
    case 8:{cout <<"Agosto\nAugust"; break;}
    case 9:{cout <<"Septiembre\nSeptember"; break;}
    case 10:{cout <<"Octubre\nOctober"; break;}
    case 11:{cout <<"Noviembre\nNovember"; break;}
    case 12:{cout <<"Diciembre\nDecember"; break;}
    default:{
        goto Month;
        }
}


	return 0;
}
    

