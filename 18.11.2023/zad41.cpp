// stworzone z pomocą chatGPT. Niemniej, rozumiem swój kod i jestem w stanie go wytłumaczyć
#include <iostream>
using namespace std;

int main () {
  int x, n;
  cout << "Wpisz rozmiar tablicy: ";
  cin >> n;
  int *arr = new int (n);
  cout << "Wprowadz " << n << " wartosci:" << endl;
  for (x = 0; x < n; x++) {
    cin >> arr [x];
  }
  int highest_cell = 0;
  for (x = 0; x < n; x++) {
    if (arr [x] > highest_cell) {
      highest_cell = arr [x];
    }
  }
  cout << "Najwyzsza wartosc to: " << highest_cell << endl;
  delete[] arr;
  return 0;
}
