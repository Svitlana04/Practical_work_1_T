#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //Задача 3
     int number;
     
    cout << "Введіть число: ";
    cin >> number;

    
   while(number>100){
        cout << "Введіть число: ";
        cin >> number;
   }
    cout << '+';
    for (int i = 0; i < number; i++)
        cout << '-';
    cout << '+' << endl;
    for (int i = 0; i < number; i++) {
        cout << '|';
        for (int j = 0; j < number; j++)
            cout << ' ';
        cout << '|' << endl;
    }
    cout << '+';
    for (int i = 0; i < number; i++)
        cout << '-';
    cout << '+' << endl;
  
    return 0;

   
/*Задача 2
    i double pi4 = 1.;
long n;
cout << "Number of iterations? ";
cin >> n;
for(int i=1; i<n; i++){
pi4 += pow((-1), i)/(i+2);
}
cout.precision(20);
cout << "Pi = " << (pi4 * 4.) << endl;
return 0;

    
    /*
	//Задача 1
    int c0;

   Value:
    cout << "Enter value: ";
    cin >> c0;

    if (c0 <= 0) {
        goto Value;
    }

    int count = 0;

    while (c0 != 1) {
        if (c0 % 2 == 0) {
            
            c0 = c0 / 2;
        } else {
           
            c0 = 3 * c0 + 1;
        }

        count++;
       cout  << c0 << endl;
    }

    cout << "Count: " << count << endl;

    return 0;*/
    

}