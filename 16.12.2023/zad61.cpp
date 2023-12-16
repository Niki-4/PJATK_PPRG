#include <iostream>

using namespace std;

int count (int number)
{

  int amnt = 0;
  int i = 1;

  while (i <= number)
    {

      if (i % 5 == 0 && i % 3 != 0)
	{
	  amnt++;
	}
      i++;
    }
  return amnt;
}

int main ()
{

  int n;

  cout << "Input n: ";
  cin >> n;

  cout << "Amount of numbers divided by 5 but not by 3: " << count (n);

  return 0;
}
