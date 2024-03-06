#include <iostream>

using namespace std;

int main()
{
  int n, m;
  int valorInicial, valorFinal;
  cout << "Ingrese el valor de n: ";
  cin >> n;
  cout << "Ingrese el valor de m: ";
  cin >> m;

  if (n == m)
  {
    cout << "Los números son iguales";
    return 1;
  }

  // Operador ternario
  valorInicial = (n < m ? n : m);
  valorFinal = (n < m ? m : n);

  cout << "Los números entre " << n << " y " << m << " son: " << endl;

  while (valorInicial < valorFinal - 1)
  {
    valorInicial++;
    cout << valorInicial << " " << endl;
  }

  return 0;
}
