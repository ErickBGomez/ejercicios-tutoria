#include <iostream>

using namespace std;

void mostrarRestaurantes(string *);
void modificarRestaurante(string *, string);

int main()
{
  string nuevo_nombre;
  int indice;
  int opcion;
  string Restaurantes[4];
  for (int i = 0; i < 4; i++)
  {
    cout << "Ingrese el nombre del restaurante: " << i << endl;
    cin >> Restaurantes[i];
  }

  do
  {
    cout << "Ingrese una opcion: \n 1. imprimir restaurantes \n 2. modificar restaurantes\n 0. salir"
         << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 0:
      cout << "saliendo" << endl;
      break;

    case 1:
      mostrarRestaurantes(Restaurantes);
      break;
    case 2:
      cout << "ingrese el numero del restaurante: ";
      cin >> indice;
      cout << "ingrese el nuevo nombre: ";
      cin >> nuevo_nombre;

      modificarRestaurante(&Restaurantes[indice], nuevo_nombre);
      break;

    default:
      cout << "Valor no valido" << endl;
      break;
    }
  } while (opcion != 0);

  return 0;
}
void mostrarRestaurantes(string *arreglo)
{
  for (int i = 0; i < 4; i++)
  {
    cout << "Restaurante: " << arreglo[i] << endl;
  }
}
void modificarRestaurante(string *seleccionado, string nuevo_valor)
{
  *seleccionado = nuevo_valor;
}