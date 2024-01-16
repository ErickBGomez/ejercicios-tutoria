#include <iostream>

using namespace std;

struct estudiante
{
  string nombre;
  int edad;
  int carnet;
  string carrera;
} alumno;

int main()
{
  cout << "Ingrese su nombre: ";
  getline(cin, alumno.nombre);

  cout << "Ingrese su edad: ";
  cin >> alumno.edad;
  cin.ignore();

  cout << "Ingrese su carnet: ";
  cin >> alumno.carnet;
  cin.ignore();

  cout << "Ingrese su carrera: ";
  getline(cin, alumno.carrera);
  return 0;
}