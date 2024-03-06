#include <iostream>

using namespace std;

int main()
{
  int cantidadDeCalificaciones = 0;
  float calificacion = 0, sumaCalificaciones = 0;
  cout << "Ingrese la cantidad de calificaciones que desea promediar: ";
  cin >> cantidadDeCalificaciones;
  for (int i = cantidadDeCalificaciones; i > 0; i--)
  {
    cout << "Ingrese la calificación: ";
    cin >> calificacion;
    sumaCalificaciones += calificacion;
  }
  cout << "El promedio de las calificaciones es: " << sumaCalificaciones / cantidadDeCalificaciones << endl;
  return 0;
}
