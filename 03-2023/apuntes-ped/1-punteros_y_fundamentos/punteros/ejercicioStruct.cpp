// Función para almacenar arreglo de 3 de struct

#include <iostream>

using namespace std;

struct Producto
{
  string nombre;
  int precio;
  string categoria[2];
} productos[3];

void SolicitarProductos(struct Producto *puntero);
void ImprimirProductos(struct Producto *puntero);

int main()
{
  struct Producto *ptr;

  ptr = productos;

  SolicitarProductos(ptr);
  ImprimirProductos(ptr);

  return 0;
}

void SolicitarProductos(struct Producto *puntero)
{
  cout << "--- Ingreso de productos ---" << endl;

  for (int i = 0; i < 3; i++)
  {
    cout << "Ingrese nombre del producto " << i + 1 << ": ";
    cin >> puntero[i].nombre;

    cout << "Ingrese precio del producto " << i + 1 << ": $";
    cin >> puntero[i].precio;

    for (int j = 0; j < 2; j++)
    {
      cout << "Ingrese categoría " << i + 1 << "." << j + 1 << ": ";
      cin >> puntero[i].categoria[j];
    }

    cout << "\n";
  }
}

void ImprimirProductos(struct Producto *puntero)
{
  cout << "--- Imprimir productos ---" << endl;

  for (int i = 0; i < 3; i++)
  {
    cout << "Nombre: " << puntero[i].nombre << endl;
    cout << "Precio: $" << puntero[i].precio << endl;

    for (int j = 0; j < 2; j++)
    {
      cout << "\tCategoría " << i + 1 << "." << j + 1 << ": " << puntero[i].categoria[j] << endl;
    }

    cout << "\n";
  }
}
