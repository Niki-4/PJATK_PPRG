#include <iostream>
#include <vector>

using namespace std;

struct student
{

string name;
string nazwisko;
int numer_indeksu;

};

int main()
{
    
    struct student s1 = {"Jan", "Kowalski", 3};
    struct student s2 = {"Marek", "Janta", 343};
    struct student s3 = {"Cezary", "Milan", 20};
    struct student s4 = {"Anna", "Dzik", 7};
    struct student s5 = {"Jarosław", "Porek", 1};
    
    vector<student> studenci;
    
    studenci.push_back(s1);
    studenci.push_back(s2);
    studenci.push_back(s3);
    studenci.push_back(s4);
    studenci.push_back(s5);
    
    
    for (int i = 0; i < studenci.size() - 1; i++)
    {
        for (int j = 0; j < studenci.size() - i - 1; j++)
        {
            if (studenci[j].numer_indeksu > studenci[j + 1].numer_indeksu)
            {
                student temp = studenci[j];
                studenci[j] = studenci[j + 1];
                studenci[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < studenci.size(); i++)
    {
        cout << studenci[i].name << " " << studenci[i].nazwisko << " " << studenci[i].numer_indeksu << endl;
    }
    
    return 0;
}
