#include <iostream>

using namespace std;

struct Mascotas
{
  int edad;
  string nombre;
  string raza;
  int vacunas;
} miGato;

void Funcion();

int main()
{
  // miGato.nombre = "Kurama";
  // miGato.raza = "Golden Retriver";
  // miGato.edad = 5;
  // miGato.vacunas = 4;

  cout << "nombre: ";
  getline(cin, miGato.nombre);

  cout << "raza: ";
  getline(cin, miGato.raza);

  cout << "edad: ";
  cin >> miGato.edad;
  cin.ignore();

  cout << "cantidad de vacunas: ";
  cin >> miGato.vacunas;
  cin.ignore();

  return 0;
}
void Funcion()
{
}
