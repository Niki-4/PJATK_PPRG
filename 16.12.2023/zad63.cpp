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
    
    return 0;
}
