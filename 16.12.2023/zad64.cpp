#include <iostream>

using namespace std;

int main()
{
    string result;
    string con;
    int i;
    
    cout << "Give number of concatenations: ";
    cin >> i;
    cout << "Give string to concatenate: ";
    cin >> con;
    
    for (int j = 0; j < i; j++){
        result = result + con;
    }
    
    cout << "Concatenated string: " << result;

    return 0;
}