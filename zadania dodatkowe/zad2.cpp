#include <iostream>

using namespace std;

int silnia(int num)
{
    
    if(num > 1){
        num = num * silnia(num - 1);
    }
    else{
        return num;
    }

    
    return num;
    
}

int main()
{
    
    int x;
    int y;
    
    cout << "Z jakiej liczby wyliczyć silnię: ";
    cin >> x;
    y = silnia(x);
    cout << y << endl;
    
    if(y % 2 == 0){
        cout << "Wynik dzieli sie na 2" << endl;
    }
    if(y % 3 == 0){
        cout << "Wynik dzieli sie na 3" << endl;
    }
    if(y % 5 == 0){
        cout << "Wynik dzieli sie na 5" << endl;
    }
    if(y % 11 == 0){
        cout << "Wynik dzieli sie na 11" << endl;
    }

    return 0;
}
