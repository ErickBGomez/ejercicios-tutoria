#include <iostream>

using namespace std;

struct Node
{
  struct Node *next = nullptr;
  int element;
};

struct Node *frontQueue = nullptr;
struct Node *backQueue = nullptr;

bool Empty();
void Insert(int);
void Remove();
void PrintQueue();
void PrintFrontQueue();
void PrintBackQueue();

int main()
{
  int value;

  for (int i = 0; i < 5; i++)
  {
    cout << "Insert new value to queue: ";
    cin >> value;

    Insert(value);
  }

  cout << "-----------\n";

  PrintQueue();

  cout << "Front queue: ";
  PrintFrontQueue();

  cout << "Back queue: ";
  PrintBackQueue();

  Remove();
  cout << "Front element deleted. New order: " << endl;
  PrintQueue();

  return 0;
}

bool Empty()
{
  return frontQueue == nullptr;
}

void Insert(int newValue)
{
  struct Node *newNode = new Node();

  newNode->element = newValue;
  newNode->next = nullptr;

  if (Empty())
  {
    // si está vacio, entonces colocarlo en frente de la cola
    frontQueue = newNode;
  }
  else
  {
    // en caso que hay elementos, crear la conexión (puntero) con el "última actual" y el nuevo nodo
    backQueue->next = newNode;
  }
  // Por último, insertarlo al final de la cola
  backQueue = newNode;
}

void Remove()
{
  // Eliminar elementos solo cuando NO esté vacía
  if (!Empty())
  {
    struct Node *temp = frontQueue;

    // Si solo hay un elemento, eliminarlo de la cola
    if (frontQueue == backQueue)
    {
      frontQueue = nullptr;
      backQueue = nullptr;
    }
    // sino, mover al siguiente elemento al frente
    else
    {
      frontQueue = frontQueue->next;
    }

    delete temp;
  }
}

void PrintQueue()
{
  struct Node *temp = frontQueue;

  while (temp != nullptr)
  {
    cout << temp->element << endl;
    temp = temp->next;
  }
}

void PrintFrontQueue()
{
  cout << frontQueue->element << endl;
}

void PrintBackQueue()
{
  cout << backQueue->element << endl;
}