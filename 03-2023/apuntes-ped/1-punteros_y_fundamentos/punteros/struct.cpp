#include <iostream>

using namespace std;

struct Producto
{
  string nombre;
  float precio;
} producto;

int main()
{
  // Crear un puntero de tipo struct
  struct Producto *ptr;
  ptr = &producto;

  cout << ptr->nombre << " - " << ptr->precio << endl;

  return 0;
}