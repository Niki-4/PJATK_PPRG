#include <iostream>

using namespace std;

struct student
{

string name;
int computers;
int mathematics;
int biology;
int polish;

};

int main()
{
    struct student listOfStudents[6];
    
    for(int i = 0; i < 6; i++)
    {
        
       cout << "Give student " << i << " name: ";
       cin >> listOfStudents[i].name;
       cout << "Give his computer science grade: ";
       cin >> listOfStudents[i].computers;
       cout << "Give his mathematics grade: ";
       cin >> listOfStudents[i].mathematics;
       cout << "Give his biology grade: ";
       cin >> listOfStudents[i].biology;
       cout << "Give his polish grade: ";
       cin >> listOfStudents[i].polish;
        
    }
    
    while (0 == 0)
    {
        cout << "Give student number, from 0 to 5: ";
        int sn;
        cin >> sn;
        
        cout << "Give subject number, from 0 to 3: ";
        int sg;
        cin >> sg;
        
        if(sg == 0){
            cout << "CS grade: " << listOfStudents[sn].computers << endl;
        }
        else if(sg == 1){
            cout << "Mathematics grade: " << listOfStudents[sn].mathematics << endl;   
        }
        else if(sg == 2){
            cout << "Biology grade: " << listOfStudents[sn].biology << endl;
        }
        else if(sg == 3){
            cout << "Polish grade: " << listOfStudents[sn].polish << endl;
        }
        else {
            cout << "No subject with that number" << endl;
        }
    }

    return 0;
}