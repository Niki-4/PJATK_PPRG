#include <iostream>
#include <vector>
using namespace std;

int main () {

int vector_size;

cout << "Podaj rozmiar wektora: ";
cin >> vector_size;

vector<int> myVector;

int value;
int highest_value = 0;
int index_highest_value;

for(int i = 0; i < vector_size; i++) {

    cout << "Podaj liczbe: ";
    cin >> value;  
    myVector.push_back(value);

    if (value >= highest_value) {
    
        highest_value = value;
        index_highest_value = i;

    }
    

}


cout << "Najwyzsza wprowadzona wartosc wynosi: " << highest_value << endl;
cout << "Indeks najwyzej wartosci: " << index_highest_value;

return 0;
}
