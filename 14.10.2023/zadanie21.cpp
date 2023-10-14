#include <iostream>
using namespace std;


int main()
{

int n;
int szereg = 0;
int suma_szeregu = 0;

cout << "podaj rozmiar szeregu, czyli n: " << endl;
cin >> n;

for (int i = 0; i <= n; i++) {
    
szereg = szereg + i;
suma_szeregu = suma_szeregu + szereg;

}

cout << "Suma szeregu: " << suma_szeregu;

return 0;
}
