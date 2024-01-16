#include <iostream>

using namespace std;

// Constante
#define tamano 5

struct Nodo
{
  // Frente y final tienen el int para acceder al indice de elemento[]
  int frenteCola;
  int finalCola;

  // Para acceder al elemento de frente o final, llamamos elemento[] y llamamos a frente y final como el índice
  string elemento[tamano];
} nodo;

// Declaracion de funciones / creacion de prototipo
void Crear(struct Nodo *);
bool Vacia(struct Nodo *);
int Llena(Nodo *);
void Insertar(struct Nodo *, string);
void Eliminar(struct Nodo *);
int Dimension(Nodo *);

int main()
{
  Crear(&nodo);
  Insertar(&nodo, "A");
  Insertar(&nodo, "B");
  Insertar(&nodo, "C");
  Insertar(&nodo, "D");
  Insertar(&nodo, "E");
  cout << "Frente " << nodo.elemento[nodo.frenteCola] << "\n"
       << "Final " << nodo.elemento[nodo.finalCola] << "\n";

  Eliminar(&nodo);

  cout << "Frente " << nodo.elemento[nodo.frenteCola] << "\n"
       << "Final " << nodo.elemento[nodo.finalCola] << "\n";

  Eliminar(&nodo);
  Eliminar(&nodo);

  cout << "Frente " << nodo.elemento[nodo.frenteCola] << "\n"
       << "Final " << nodo.elemento[nodo.finalCola] << "\n";

  return 0;
}

// Crear Cola vacía
void Crear(Nodo *p)
{
  // Los arrays tienen como indice 0. Entonces se empieza con un índice antes de la primera.
  // Es prácticamente iniciar el arreglo vacío
  // Nota: Aquí no se usan punteros, sino que arrays.
  p->frenteCola = -1;
  p->finalCola = -1;
}

// Vacia
bool Vacia(Nodo *p)
{
  // Si el final está vacía
  if (p->finalCola == -1)
  {
    return true;
  }
  else
  {
    return false;
  }

  // Alternativa:
  // return (p->finalCOla == -1);
}

// Dimension
int Dimension(Nodo *p)
{
  if (Vacia(p))
  {
    return 0;
  }
  else
  {

    if (p->frenteCola <= p->finalCola)
    {
      return p->finalCola - p->frenteCola + 1;
    }
    else
    {

      return tamano - p->frenteCola + p->finalCola + 1;
    }
  }
}

// Llena
int Llena(Nodo *p)
{
  if (Dimension(p) == tamano)
  {
    return true;
  }
  else
  {
    return false;
  }
}

// Encolar -- final de la lista
void Insertar(Nodo *p, string n)
{
  // Si no está lleno, ingresar la insersión
  if (!Llena(p))
  {
    // Si está completamente vacío, entonces va al inicio
    if (Vacia(p))
    {
      // 0 es la primera posición del array, por ende la primera de la cola.
      p->frenteCola = 0;
    }
    // Si la posición del final de la cola es al tamaño-1 (por los índices del array) entonces
    // Regresar a la primera posición de la cola (empezar el círculo)
    if (p->finalCola == tamano - 1)
    {
      p->finalCola = 0;
    }
    // Sino, la posición final solo se incrementa
    else
    {
      p->finalCola++;
    }

    // Aquí se ingresa el valor.
    p->elemento[p->finalCola] = n;
  }
  // Si está lleno, entonces no agregar más elementos
  else
  {
    cout << "Cola llena";
  }
}

// Desencolar -- inicio de la lista
void Eliminar(Nodo *p)
{
  if (!Vacia(p))
  {
    // Si la cola está vacía. Entonces crear cola
    if (Dimension(p) == 1)
    {
      Crear(p);
    }
    else
    {
      // en el caso que tenga elementos, movemos el frente a una posición más
      p->frenteCola++;
    }
  }
  else
  {
    cout << "Cola esta vacia";
  }
}