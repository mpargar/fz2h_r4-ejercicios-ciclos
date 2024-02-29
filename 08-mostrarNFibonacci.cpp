#include <iostream>

using namespace std;

int main()
{
  int cantidadDeNumeros, actual = 0, pasado = 1, aux = 0;
  cout << "Ingrese la cantidad de números de la serie de Fibonacci que desea ver: ";
  cin >> cantidadDeNumeros;

  do
  {
    cout << actual << endl;
    aux = actual + pasado;
    pasado = actual;
    actual = aux;
    cantidadDeNumeros--;
  } while (cantidadDeNumeros > 0);

  return 0;
}
