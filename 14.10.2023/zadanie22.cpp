#include <iostream>
using namespace std;


int main()
{

int a;
int b;


cout << "Podaj a: ";
cin >> a;
cout << "a wynosi " << a << endl;

cout << "Podaj b: ";
cin >> b;
cout << "b wynosi " << b << endl;


cout << "wiersz o dlugosci a:" << endl;
for (int i = 0; i < a; i++) {
    
    cout << "*";

}

cout << endl << "kolumna o dlugosci b:" << endl;
for (int i = 0; i < b; i++) {
    
    cout << "*" << endl;

}


cout << "Prostokat a*b:" << endl;
for (int i = 0; i < a; i++) {
    
    for (int i = 0; i < b; i++) {
    
    cout << "*";

}

    cout << endl;

}

cout << "Obramowane:" << endl;
for (int i = 0; i < a; i++) {

    if (i == 0 || i == a-1)
    {
        for (int i = 0; i < b; i++) {
    
            cout << "*";

        }
        cout << endl;
    }
    else 
    {
        for (int i = 0; i < b; i++) {
            
            if (i == 0 or i == b-1){
                cout << "*";
            }
            else {
                cout << " ";
            }
            
        }


    cout << endl;

}

}

cout << endl << "Trojkat prostokatny:" << endl; 

for (int i = 1; i <= a; i++){
    for (int j = 0; j < i; j++){
        cout << "*";
    }
    cout << endl;
}

cout << endl << "Trojkat prostokatny na odwrot:" << endl; 
int space = 0;

for (int i = a; i > 0; i--){
    for (int k = 0; k < space; k++) {
            cout << " ";
        }
    for (int j = i; j > 0; j--){
        cout << "*";
    }
    cout << endl;
    space++;
}


return 0;
}
