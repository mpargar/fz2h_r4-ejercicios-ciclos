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
  // TODO: Explicar que chingados es un ternario y aplicarlo aquí
  if (n < m)
  {
    valorInicial = n;
    valorFinal = m;
  }
  else if (n > m)
  {
    valorInicial = m;
    valorFinal = n;
  }
  else
  {
    cout << "Los números son iguales";
    return 1;
  }
  cout << "Los números entre " << n << " y " << m << " son: " << endl;
  // for (int i = valorInicial + 1; i < valorFinal; i++)
  // {
  //   cout << i << " ";
  // }
  while (valorInicial < valorFinal - 1)
  {
    valorInicial++;
    cout << valorInicial << " " << endl;
  }

  return 0;
}
