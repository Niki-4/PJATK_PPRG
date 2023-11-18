// stworzone z pomocą chatGPT. Niemniej, rozumiem swój kod i jestem w stanie go wytłumaczyć
#include<iostream>
using namespace std;

int main () {
  int n;
  cout << "Podaj liczbe elementow:";
  cin >> n;
  int *arr = new int (n);
  cout << "Podaj " << n << " wartosci:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr [i];
  }
  int max_count = 1, res = -1;
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (arr[i] == arr[j])
        count++;
    }
    if (count > max_count) {
      max_count = count;
      res = arr[i];
    }
  }
  if (max_count == 1)
  {
    cout << "zaden z elementow nie pojawia sie najczesciej";
  }
  else
  {
    cout << "Liczba, ktora pojawia sie najczesciej to: " << res << endl;
  }
  delete[] arr;
  return 0;
}

