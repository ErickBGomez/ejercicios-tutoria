#include <iostream>

using namespace std;

void ImprimirNombre(string nombre);

int main()
{
  string nombreInput;

  cout << "Ingrese su nombre: ";
  cin >> nombreInput;

  ImprimirNombre(nombreInput);

  return 0;
}

void ImprimirNombre(string nombre)
{
  cout << "Hola, yo soy " << nombre << endl;
}