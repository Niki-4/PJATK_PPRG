#include <iostream>
#include <vector>

using namespace std;


int main()
{

    int radius;
    float area;
    
    cout << "Podaj promień: ";
    cin >> radius;
    
    area = radius * radius * 3.14;
    
    vector<vector<float>> vec(10);
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            
            vec[i].push_back(area);
            area = area + 3;
            
        }
    }
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            
            cout << vec[i][j] << " ";
            
        }
        
        cout << endl;
        
    }

    return 0;
}
