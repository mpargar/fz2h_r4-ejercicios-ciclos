#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Imprimir los numeros entre 1 y 100 multiplo de: ";
  cin >> n;
  for (int i = 1; i <= 100; i++)
  {
    if (i % n == 0)
    {
      cout << i << endl;
    }
  }
  return 0;
}
