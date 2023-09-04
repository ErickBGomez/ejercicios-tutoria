#include <iostream>

using namespace std;

int main()
{
  int cantidad;

  cout << "Ingrese la cantidad de sus mascotas:";
  cin >> cantidad;
  cin.ignore();

  string mascotas[cantidad];

  for (int i = 0; i < cantidad; i++)
  {
    cout << "Ingrese el nombre de sus mascotas;";
    getline(cin, mascotas[i]);
  }
  for (int i = 0; i < cantidad; i++)
  {
    cout << mascotas[i] << endl;
  }

  return 0;
}