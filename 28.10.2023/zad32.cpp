#include <iostream>
using namespace std;


int main()
{

char x;

while (x != 't')
{
    cout << "Podaj znak: ";
    cin >> x;
    if (x != 't')
    {
        cout << x << endl;
    }
    
}


return 0;
}
