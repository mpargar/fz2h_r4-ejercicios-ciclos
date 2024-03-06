#include <iostream>

using namespace std;

int main()
{
  int numero = 0, factorial = 0;
  cout << "Inserte el valor de n para calcular n!: ";
  cin >> numero; // 5
  // i = 2
  for (int i = 1; i <= numero; i++)
  {
    factorial += i;
  }
  cout << numero << "! = " << factorial << endl;
  return 0;
}