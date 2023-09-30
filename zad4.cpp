#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int number1;
    int number2;
    int number3;

    cout << "Podaj liczbę całkowitą numer 1: ";
    cin >> number1;

    cout << "Podaj liczbę całkowitą numer 2: ";
    cin >> number2;

    cout << "Podaj liczbę całkowitą numer 3: ";
    cin >> number3;
    
    if(number1 == number2 && number2 == number3 && number1 == number3) {
        cout << "Wszystkie liczby są równe";
    }
    
    else {

//first solution
        cout << "Rozwiązanie 1:\n";

        if(number1 > number2 && number1 > number3){
            cout << "Największa jest liczba " << number1;
        }
        
        else if(number2 > number1 && number2 > number3){
            cout << "Największa jest liczba " << number2;
        }

        else if(number3 > number2 && number3 > number1){
            cout << "Największa jest liczba " << number3;
        }
        else {
            if (number1 == number2){
                cout << "Największa jest liczba " << number1;
            }
            if (number3 == number2){
                cout << "Największa jest liczba " << number2;
            }
            if (number1 == number3){
                cout << "Największa jest liczba " << number3;
            }
        }

//second solution
        int high = number1;
        if(number2 > high){
            high = number2;
        }
        if(number3 > high){
            high = number3;
        }
        cout << "\nNajwiększa jest liczba " << high;

//third solution
        high = max(number1, max(number2, number3));
        cout << "\nNajwiększa jest liczba " << high;
    }
    return 0;
}