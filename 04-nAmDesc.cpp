#include <iostream>

using namespace std;

int main()
{
  int n, m;
  cout << "Introduce el valor mayor: ";
  cin >> n;
  cout << "Introduce el valor menor: ";
  cin >> m;
  if (n < m)
  {
    cout << "El valor mayor debe ser mayor que el valor menor" << endl;
    return 1;
  }
  // for (int i = n; i >= m; i--)
  // {
  //   cout << i << endl;
  // }
  while (n >= m)
  {
    cout << n << endl;
    n--;
  }
  return 0;
}
