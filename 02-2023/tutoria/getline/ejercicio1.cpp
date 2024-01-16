#include <iostream>

using namespace std;

int main()
{
  string materias[3];
  string nombre;

  cout << "Ingrese su nombre:";
  getline(cin, nombre);

  for (int i = 0; i < 3; i++)
  {
    cout << "Ingrese sus materias fav:";
    getline(cin, materias[i]);
  }
  cout << "N:" << nombre << endl;

  for (int i = 0; i < 3; i++)
  {
    cout << "M:" << materias[i] << endl;
  }

  return 0;
}