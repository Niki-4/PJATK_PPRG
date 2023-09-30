#include <iostream>
using namespace std;

int main() {
    
    int number;
    cout << "Podaj liczbę całkowitą: ";
    cin >> number;
    
    if(number > 0) {
        cout << "Liczba jest dodatnia";
    }

        if(number < 0) {
        cout << "Liczba jest ujemna";
    }

        if(number == 0) {
        cout << "Licba jest zerem";
    }

    return 0;
}