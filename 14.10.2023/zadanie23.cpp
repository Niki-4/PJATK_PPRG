#include <iostream>
using namespace std;


int main()
{

int day;

cout << "podaj numer miesiaca, od 1 do 12: ";
cin >> day;

if (day > 12 || day < 1) {
    cout << "podales nieodpowiednia liczbe";
    return 1;
}

switch (day) {
    case 1:
        cout << "Styczen";
        cout << ", 31 dni, pochmurno";
        break;
    case 2:
        cout << "Luty";
        cout << ", 28 dni, pochmurno";
        break;
    case 3:
        cout << "Marzec";
        cout << ", 31 dni, pochmurno";
        break;
    case 4:
        cout << "Kwiecien";
        cout << ", 30 dni, slonecznie";
        break;
    case 5:
        cout << "Maj";
        cout << ", 31 dni, slonecznie";
        break;
    case 6:
        cout << "Czerwiec";
        cout << ", 30 dni, slonecznie";
        break;
    case 7:
        cout << "Lipiec";
        cout << ", 31 dni, slonecznie";
        break;
    case 8:
        cout << "Sierpien";
        cout << ", 31 dni, slonecznie";
        break;
    case 9:
        cout << "Wrzesien";
        cout << ", 30 dni, slonecznie";
        break;
    case 10:
        cout << "Pazdziernik";
        cout << ", 31 dni, pochmurno";
        break;
    case 11:
        cout << "Listopad";
        cout << ", 30 dni, pochmurno";
        break;
    case 12:
        cout << "Grudzien";
        cout << ", 31 dni, pochmurno";
        break;
}


return 0;
}
