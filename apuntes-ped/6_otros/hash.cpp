#include <iostream>

using namespace std;

#define tam 7

struct Registro
{
  int dato;
};

struct Nodo
{
  struct Registro registro;
  struct Nodo *anterior, *siguiente;
};

struct Nodo *tabla[tam] = {nullptr};
struct Nodo *lista = nullptr;

void Agregar(int);
int F_Hash(int);
void Imprimir();
struct Nodo *Buscar(int, int);
void BuscarR(int);
void EliminarR(int);

int main()
{

  Agregar(40);
  Agregar(33);
  Agregar(50);
  Agregar(75);
  EliminarR(33);
  Imprimir();

  return 0;
}

void Agregar(int _dato)
{
  struct Nodo *nuevoNodo = new Nodo();
  struct Registro r;
  r.dato = _dato;

  int clave = F_Hash(_dato);

  nuevoNodo->registro = r;
  nuevoNodo->anterior = nullptr;
  nuevoNodo->siguiente = tabla[clave];

  if (tabla[clave])
    tabla[clave]->anterior = nuevoNodo;
  tabla[clave] = nuevoNodo;

  cout << "Direccion " << tabla[clave] << " Indice donde se almacena " << clave << " Dato almacenado " << r.dato << endl;
}

int F_Hash(int _dato)
{
  return _dato % tam;
}

void Imprimir()
{
  struct Nodo *temporal;
  for (int i = 0; i < tam; i++)
  {
    temporal = tabla[i];

    while (temporal != nullptr)
    {
      cout << "Indice de almacenamiento " << i << " direccion " << temporal << " - " << temporal->registro.dato << endl;
      temporal = temporal->siguiente;
    }
  }
}

struct Nodo *Buscar(int _dato, int _clave)
{
  struct Nodo *nuevoNodo = tabla[_clave];
  while (nuevoNodo)
  {
    if (nuevoNodo->registro.dato == _dato)
    {
      return nuevoNodo;
    }
    nuevoNodo = nuevoNodo->siguiente;
  }
  return nullptr;
}

void EliminarR(int _dato)
{
  int clave = F_Hash(_dato);
  struct Nodo *nuevoNodo = Buscar(_dato, clave);

  if (nuevoNodo)
  {
    cout << "Registro eliminado " << nuevoNodo->registro.dato << endl;

    if (nuevoNodo->siguiente)
    {
      nuevoNodo->siguiente->anterior = nuevoNodo->anterior;
    }
    if (nuevoNodo->anterior)
    {
      nuevoNodo->anterior->siguiente = nuevoNodo->siguiente;
    }
    else
    {
      tabla[clave] = nuevoNodo->siguiente;
    }

    nuevoNodo->anterior->siguiente = nuevoNodo->siguiente;

    delete nuevoNodo;
  }
  else
  {
    cout << "Registro no encontrado" << endl;
  }
}