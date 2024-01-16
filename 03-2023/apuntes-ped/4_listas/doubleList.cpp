#include <iostream>

using namespace std;

struct Nodo
{
  string elemento;
  struct Nodo *siguiente;
  struct Nodo *anterior;
};

struct Nodo *lista = nullptr;

void InsertarInicio(string);
void InsertarFinal(string);
void InsertarIntermedio(string, int);
void EliminarInicio();
void EliminarFinal();
void Imprimir();

int main()
{

  // A, B
  InsertarInicio("A");
  InsertarFinal("B");

  // A, C, B
  InsertarIntermedio("C", 2);

  Imprimir();

  return 0;
}

// C, A, B
// C

// temp = A

// nuevoNodo = C
//  nuevoNodo.sig = A
//  nuevoNodo.ant = nullptr

// lista = C
//  lista.sig = A
//  lista.ant = nullptr

void InsertarInicio(string n)
{
  struct Nodo *nuevoNodo = new Nodo;
  struct Nodo *temporal = lista;

  nuevoNodo->elemento = n;
  nuevoNodo->siguiente = nullptr;
  nuevoNodo->anterior = nullptr;

  // Si la lista esta vacia
  if (lista == nullptr)
  {
    lista = nuevoNodo;
  }
  else
  {
    // conexion del nuevo nodo con la lista
    nuevoNodo->siguiente = lista;
    lista->anterior = nuevoNodo;
    // asignar el nuevonodo a la cabeza de la lista
    lista = nuevoNodo;
  }
}

// A, (B), C
//

// temp = B
//  temp.sig = C
//  temp.ant = A

// nuevoNodo = C
//  nuevoNodo.sig = nullptr
//  nuevoNodo.ant = B

// lista = A
//  lista.sig = B
//  lista.ant = nullptr

// Insertar nodos al final de la lista
void InsertarFinal(string n)
{
  struct Nodo *nuevoNodo = new Nodo;
  struct Nodo *temporal = lista;

  nuevoNodo->elemento = n;
  nuevoNodo->siguiente = nullptr;
  nuevoNodo->anterior = nullptr;

  // Si la lista esta vacia
  if (lista == nullptr)
  {
    lista = nuevoNodo;
  }
  else
  {
    while (temporal->siguiente != nullptr)
    {
      temporal = temporal->siguiente;
    }
    // conexiones de nuevonodo a temporal
    temporal->siguiente = nuevoNodo;
    nuevoNodo->anterior = temporal;
  }
}

// A, B
// C

// temp = A
//  temp.sig = B
//  temp.ant = nullptr

// temp2 =
//  temp2.sig =
//  temp2.ant =

// nuevoNodo = C
//  nuevoNodo.sig = nullptr
//  nuevoNodo.ant = nullptr

// lista = A
//  lista.sig = B
//  lista.ant = nullptr

// Insertar intermedio
void InsertarIntermedio(string n, int posicion)
{
  // Reserva de memoria
  struct Nodo *nuevoNodo = new Nodo;
  // Variable auxiliar almacena el nodo actual
  struct Nodo *temporal = lista;
  struct Nodo *temporal2;

  nuevoNodo->elemento = n;
  nuevoNodo->siguiente = nullptr;
  nuevoNodo->anterior = nullptr;

  // Mover posiciones en la lista usando while
  // posicion--;
  // while (posicion != 1)
  // {
  //   temporal = temporal->siguiente;
  //   posicion--;
  // }

  // Mover posiciones en la lista usando for
  posicion--;
  for (int i = 1; i < posicion; i++)
  {
    temporal = temporal->siguiente;
  }

  // Conexiones del nuevoNodo con la lista
  temporal2 = temporal->siguiente;
  temporal->siguiente = nuevoNodo;
  temporal2->anterior = nuevoNodo;
  nuevoNodo->siguiente = temporal2;
  nuevoNodo->anterior = temporal;
}

void Imprimir()
{
  struct Nodo *temporal = lista;

  if (temporal != nullptr)
  {
    // Imprimir cuando se inserta al final de la lista
    while (temporal != nullptr)
    {
      cout << temporal->elemento << ", ";
      temporal = temporal->siguiente;
    }
  }
  else
  {
    cout << "Lista vacia";
  }
}

// (B), C
void EliminarInicio()
{
  struct Nodo *temporal = lista;

  if (lista != nullptr)
  {
    if (temporal->siguiente != nullptr)
    {
      lista = lista->siguiente;
      delete temporal;
      temporal = nullptr;
      lista->anterior = nullptr;
    }
    else
    {
      delete lista;
      lista = nullptr;
    }
  }
  else
  {
    cout << "Lista vacia";
  }
}

// A, [B]

// () temp = C
// temp.ant = B

// [] temp2 = B
// temp2.sig =

// Borrar el ultimo nodo de la lista
void EliminarFinal()
{
  struct Nodo *temporal = lista;
  struct Nodo *temporal2;

  if (lista != nullptr)
  {
    if (temporal->siguiente != nullptr)
    {
      while (temporal->siguiente != nullptr)
      {
        temporal = temporal->siguiente;
      }

      temporal2 = temporal->anterior;
      temporal2->siguiente = nullptr;
      delete temporal;
      temporal = nullptr;
    }
    else
    {
      delete lista;
      lista = nullptr;
    }
  }
  else
  {
    cout << "Lista vacia";
  }
}