#include <iostream>

using namespace std;

int main()
{
  int edad;
  string materia;
  string edadEntrada;

  cout << "Edad: ";
  getline(cin, edadEntrada);

  edad = stoi(edadEntrada);

  cout << "Ingrese la materia:";
  getline(cin, materia);

  cout << "edad: " << edad << " Materia: " << materia << endl;

  return 0;
}