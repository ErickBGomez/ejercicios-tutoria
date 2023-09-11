#include <iostream>

using namespace std;

struct estudiantes
{
  string nombre;
  string apellido;
  string carrera;
  float nota;
};

int main()
{
  estudiantes estudiante[2];

  for (int i = 0; i < 2; i++)
  {
    cout << "Estudiante " << i + 1 << ":" << endl;

    cout << "ingrese su nombre: ";
    getline(cin, estudiante[i].nombre);

    cout << "ingrese su apellido: ";
    getline(cin, estudiante[i].apellido);

    cout << "ingrese la carrera: ";
    getline(cin, estudiante[i].carrera);

    cout << "ingrese su cum: ";
    cin >> estudiante[i].nota;
    cin.ignore();

    cout << "\n";
  }

  return 0;
}