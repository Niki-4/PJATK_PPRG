#include <iostream>
using namespace std;

int main() {
    
    int number;
    cout << "Podaj liczbę całkowitą: ";
    cin >> number;
    
    if(number == 0) {
        cout << "Liczba jest zerem";
    }

    else if(number % 2 == 0) {
        cout << "Liczba jest parzysta";
    }

    if(number % 2 != 0) {
        cout << "Liczba jest nieparzysta";
    }


    return 0;
}