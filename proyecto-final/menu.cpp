#include <iostream>

using namespace std;

struct Plato
{
  string nombre;
  float precio;
};

int main()
{
  Plato desayunos[3];
  Plato almuerzos[2];

  desayunos[0].nombre = "Pupusas";
  desayunos[0].precio = 0.8;

  desayunos[1].nombre = "Tamales";
  desayunos[1].precio = 1.2;

  desayunos[2].nombre = "Pastelitos";
  desayunos[2].precio = 0.6;

  almuerzos[0].nombre = "Sopa";
  almuerzos[0].precio = 5;

  almuerzos[1].nombre = "Pizza";
  almuerzos[1].precio = 5.5;

  // For of: Imprimir elementos del arreglo sin especificar condicion
  cout << "Desayunos: " << endl;
  for (Plato plato : desayunos)
  {
    cout << "\t" << plato.nombre << " $" << plato.precio << endl;
  }

  cout << "Almuerzos: " << endl;
  for (Plato plato : almuerzos)
  {
    cout << "\t" << plato.nombre << " $" << plato.precio << endl;
  }

  // system("cls"); Limpiar consola
  // system("pause"); Pausar consola

  return 0;
}