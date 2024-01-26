#include <iostream>

using namespace std;

struct Inventario
{
  string nombreProducto;
  int cantidadProducto;
  int cantidadVendida;
};

struct Nodo
{
  struct Inventario inventario;
  struct Nodo *siguiente = nullptr;
};

struct Nodo *pila = nullptr;

void CalcularDisponible();
void Insertar(Inventario);
void Imprimir();
void Eliminar();

int main()
{
  int opcion;
  Inventario nuevoInventario;

  do
  {
    cout << "[1] Insertar nuevo inventario\n[2] Imprimir inventarios\n[3] Eliminar inventario\n[4] Imprimir cantidad disponible de cada inventario\n[0] Salir\n> ";
    cin >> opcion;

    cout << "\n";

    switch (opcion)
    {
    case 0:
      cout << "Saliendo..." << endl;
      break;

    case 1:
      cout << "Ingrese el nombre del producto:\n> ";
      cin >> nuevoInventario.nombreProducto;

      cout << "Ingrese cantidad del producto:\n> ";
      cin >> nuevoInventario.cantidadProducto;

      cout << "Ingrese cantidad del producto vendido:\n> ";
      cin >> nuevoInventario.cantidadVendida;

      Insertar(nuevoInventario);

      cout << "Inventario agregado exitosamente" << endl;
      break;

    case 2:
      Imprimir();
      break;

    case 3:
      Eliminar();

      cout << "Inventario eliminado exitosamente" << endl;

      break;

    case 4:
      CalcularDisponible();
      break;

    default:
      cout << "Opción no válida" << endl;
    }
  } while (opcion != 0);
}

void CalcularDisponible()
{
  struct Nodo *temp = pila;
  int cantidadDisponibleActual;

  if (pila != nullptr)
  {
    // Recorrer cada uno de los elementos de la pila
    while (temp != nullptr)
    {
      cantidadDisponibleActual = temp->inventario.cantidadProducto - temp->inventario.cantidadVendida;

      // Accedemos la información de cada inventario por medio de temp->inventario
      cout << "Nombre del producto: " << temp->inventario.nombreProducto << endl;
      cout << " - Cantidad de producto disponible: " << cantidadDisponibleActual << endl;

      cout << "------------------\n\n";

      temp = temp->siguiente;
    }
  }
  else
  {
    cout << "Pila vacía" << endl;
  }
}

void Insertar(Inventario nuevoInventario)
{
  struct Nodo *nuevoNodo = new Nodo;       // Crear un espacio memoria del nodo
  nuevoNodo->inventario = nuevoInventario; // Acceder a la información guardada del nuevo inventario

  // En el caso que la pila esta vacia: La conexión al siguiente elemento será nullptr
  // En el caso que tiene más de un elemento: La conexión al siguiente elemento será el que actualmente es el tope de la pila
  nuevoNodo->siguiente = pila;

  // Cambiamos el tope de la pila con el nuevo elemento que hemos insertado
  pila = nuevoNodo;
}

void Imprimir()
{
  struct Nodo *temp = pila;

  if (pila != nullptr)
  {
    // Recorrer cada uno de los elementos de la pila
    while (temp != nullptr)
    {
      // Accedemos la información de cada inventario por medio de temp->inventario
      cout << "Nombre del producto: " << temp->inventario.nombreProducto << endl;
      cout << " - Cantidad del producto: " << temp->inventario.cantidadProducto << endl;
      cout << " - Cantidad del producto vendido: " << temp->inventario.cantidadVendida << endl;
      cout << "------------------\n\n";

      temp = temp->siguiente;
    }
  }
  else
  {
    cout << "Pila vacía" << endl;
  }
}

void Eliminar()
{
  if (pila != nullptr)
  {
    struct Nodo *temp = pila; // Empezamos un temporal en el tope de la pila
    pila = temp->siguiente;   // El tope de la pila se mueve al elemento que le sigue
    delete temp;              // Eliminamos el temporal (el antiguo tope de la pila)
  }
  else
  {
    cout << "Pila vacía" << endl;
  }
}