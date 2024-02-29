#include <iostream>

using namespace std;

int main()
{
  int n, m;
  cout << "Introduce el número inicial: ";
  cin >> n;
  cout << "Introduce el número final: ";
  cin >> m;
  if (n > m)
  {
    cout << "El número inicial debe ser menor o igual al número final." << endl;
    return 1;
  }
  // for (int i = n; i <= m; i++)
  // {
  //   cout << i << endl;
  // }
  while (n <= m)
  {
    cout << n << endl;
    n++;
  }
  return 0;
}
