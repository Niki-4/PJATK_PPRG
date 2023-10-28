#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

float a;
float b;


cout << "Podaj x: ";
cin >> a;

cout << "Podaj y: ";
cin >> b;

cout << fixed << setprecision(2) << "Suma wynosi: " << a + b << endl;
cout << fixed << setprecision(2) << "Różnica wynosi: " << a - b << endl;
cout << fixed << setprecision(2) << "Iloczyn wynosi: " << a * b << endl;
cout << fixed << setprecision(2) << "Iloraz wynosi: " << a / b << endl;

return 0;
}
