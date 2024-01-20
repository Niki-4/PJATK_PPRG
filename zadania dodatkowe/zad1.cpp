#include <iostream>
#include <vector>

using namespace std;

struct student
{
    string name;
    string nazwisko;
};

int main()
{
    student s[3];
    vector<vector<string>> studenci(2); 
    
    for(int i = 0; i < 3; i++){
        cout << "Podaj imie: ";
        cin >> s[i].name;
        studenci[0].push_back(s[i].name);
        cout << "Podaj nazwisko: ";
        cin >> s[i].nazwisko;
        studenci[1].push_back(s[i].nazwisko);
    }
    
    for(int i = 0; i < 3; i++){
        cout << "Imie osoby nr. " << i+1 << " = " << studenci[0][i] << ", Nazwisko = " << studenci[1][i] << endl;
    }

    return 0;
}
