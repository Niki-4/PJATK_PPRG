#include <iostream>
#include <cmath>

using namespace std;


int main()
{

float a;
float b;
float c;

cout << "Rownanie kwadratowe to ax^2 + bx + c" << endl;

cout << "Podaj a: ";
cin >> a;
cout << "Podaj b: ";
cin >> b;
cout << "Podaj c: ";
cin >> c;

cout << "Równanie kwadratowe wynosi " << a << "x^2 + " << b << "x +" << c << endl;

float delta = b*b - 4*(a*c);

if (delta < 0)
{
    cout << "brak pierwiastków" << endl;
}
else if (delta == 0)
{
    cout << "pierwiastek wynosi " << -b / 2*a << endl;
}
else
{
    cout << "x1 wynosi" << -b - sqrt(delta) / 2*a << endl;
    cout << "x2 wynosi" << -b + sqrt(delta) / 2*a << endl;
}



return 0;
}
