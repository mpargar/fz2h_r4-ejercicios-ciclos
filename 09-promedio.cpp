#include <iostream>

using namespace std;

int main()
{
  int cantidadDeCalificaciones = 0, calificacio = 0, sumaCalificaciones = 0;
  cout << "Ingrese la cantidad de calificaciones que desea promediar: ";
  cin >> cantidadDeCalificaciones;
  while (cantidadDeCalificaciones > 0)
  {
    cout << "Ingrese la calificación: ";
    cin >> calificacio;
    sumaCalificaciones += calificacio;
    cantidadDeCalificaciones--;
  }
  cout << "El promedio de las calificaciones es: " << sumaCalificaciones / cantidadDeCalificaciones << endl;
  return 0;
}
