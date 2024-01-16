#include <iostream>

using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};

// Arbol de búsqueda binaria: ABB
struct Node *ABB = nullptr;

struct Node *Create(int n);
struct Node *Insert(struct Node *, int);
void InOrder(struct Node *);
void PreOrder(struct Node *);
void PostOrder(struct Node *);
void Search();
struct Node *SearchMinor(struct Node *);
void Delete(Node *&, int);

int main()
{
  return 0;
}

struct Node *Create(int n)
{
  struct Node *newNode = new Node();
  newNode->data = n;

  // Múltiple asignación de izquierda y derecha a nullptr
  newNode->left = newNode->right = nullptr;
  return newNode;
}

// Parámetro del ABB para la recursividad de esta función
struct Node *Insert(struct Node *ABB, int n)
{
  // Sí árbol está vacío
  if (ABB == nullptr)
    return Create(n);

  // Insertar valores para el árbol binario (es recursivo porque vamos a insertar en cada subárbol)
  if (n < ABB->data)
    ABB->left = Insert(ABB->left, n); // Izquierda si es menor que la raíz
  else
    ABB->right = Insert(ABB->right, n); // Derecha si es mayor que la raíz

  return ABB;
}

void InOrder(struct Node *ABB)
{
  if (ABB == nullptr)
  {
    return;
  }
  else
  {
    InOrder(ABB->left);
    cout << ABB->data << " - "; // Raíz
    InOrder(ABB->right);
  }
}

void PreOrder(struct Node *ABB)
{
  if (ABB == nullptr)
  {
    return;
  }
  else
  {
    cout << ABB->data << "-"; // Raíz
    PreOrder(ABB->left);
    PreOrder(ABB->right);
  }
}

void PostOrder(struct Node *ABB)
{
  if (ABB == nullptr)
  {
    return;
  }
  else
  {
    PostOrder(ABB->left);
    PostOrder(ABB->right);
    cout << ABB->data << "-"; // Raíz
  }
}

void Search(struct Node *&ABB, int value, struct Node *&father)
{
  while (ABB != nullptr && ABB->data != value)
  {
    father = ABB;
    if (value < ABB->data)
      ABB = ABB->left;
    else
      ABB = ABB->right;
  }
}

struct Node *SearchMinor(struct Node *ABB)
{
  while (ABB->left != nullptr)
  {
    ABB = ABB->left;
  }

  return ABB;
}

void Delete(Node *&ABB, int value)
{
  struct Node *father = nullptr;
  struct Node *aux = ABB;

  Search(aux, value, father);

  // Si no tiene nodos, hacer nada
  if (aux == nullptr)
  {
    return;
  }

  // Eliminar Nodo hoja
  if (aux->left == nullptr && aux->right == nullptr)
  {
    // Si lo que quiero borrar es la raíz: Eliminar todo el arbol
    if (aux == ABB)
    {
      ABB == nullptr;
    }
    // Si hay información a los lados:
    else
    {
      if (father->left == aux)
      {
        father->left = nullptr;
      }
      else
      {
        father->right = nullptr;
      }
    }

    delete aux;
  }
  // Eliminar Nodo con 2 hijos
  else if (aux->left && aux->right)
  {
    // Buscar subarbol derecho del nodo menor y eliminar
    struct Node *sucessor = SearchMinor(aux->right);
    int sucessorValue = sucessor->data;
    Delete(ABB, sucessor->data);
    aux->data = sucessorValue;
  }
  else
  {
    struct Node *child;

    if (aux->left)
    {
      child = aux->left;
    }
    else
    {
      child = aux->right;
    }
  }
}