#include <iostream>
using namespace std;

int main() {
  
  int pizza_amount;
  int guest_amount;
  
  cout << "Podaj ilość pizz: " << endl;
  cin >> pizza_amount;
  
  cout << "Podaj ilość gości: " << endl;
  cin >> guest_amount;
  
  pizza_amount = pizza_amount * 8;
  
  cout << "Każdy z gości powinien dostać " << pizza_amount / guest_amount << " kawałków pizzy" << endl;
  cout << "Organizatorowi przypada " << pizza_amount % guest_amount << " kawałki pizzy";
  
  
  return 0;
}
