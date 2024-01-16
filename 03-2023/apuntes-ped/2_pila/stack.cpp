#include <iostream>

using namespace std;

struct Node
{
  int element;
  struct Node *next;
};

struct Node *stack = nullptr;

void Push(int);
void Pop(int &);
void Print();
bool IsEmpty();
bool IsFull();
int Top();
Node *TopDirection();

int main()
{
  int input;
  int popped;

  for (int i = 0; i < 3; i++)
  {
    cout << "Insert value: ";
    cin >> input;
    Push(input);
  }

  Print();

  // Pop(popped);

  // cout << "Popped value: " << popped << endl;

  // Print();

  cout << "Is stack empty?: " << IsEmpty() << endl;
  cout << "Is stack full?: " << IsFull() << endl;

  cout << "Top value: " << Top() << endl;
  cout << "Top value direction: " << TopDirection() << endl;

  return 0;
}

void Push(int value)
{
  // Reservar memoria
  struct Node *newNode = new Node();

  // Asignar valor al nodo
  newNode->element = value;

  // Direccionar el siguiente elemento del stack. Va a contener el último elemento referenciado en el stack
  newNode->next = stack;

  // El stack va a contener este nuevo elemento ingresado
  stack = newNode;
}

void Pop(int &value)
{
  // Prevenir un stack vacío
  if (stack != nullptr)
  {
    // Asignar el temporal al último elemento de stack
    struct Node *temp = stack;

    // Devolvemos el valor eliminado y el stack tendrá el valor que le sigue a temp
    value = temp->element;
    stack = temp->next;

    // Borrar el último elemento actual (temp)
    delete temp;
  }
}

void Print()
{
  // Empezar con el último elemento del stack
  struct Node *temp = stack;

  // Recorrer todos los elementos hasta llegar a null
  while (temp != nullptr)
  {
    // Imprimir valor actual del nodo
    cout << temp->element << endl;
    // Ir al siguiente elemento del stack
    temp = temp->next;
  }
}

bool IsEmpty()
{
  return stack == nullptr;
}

bool IsFull()
{
  return stack != nullptr;
}

int Top()
{
  return (stack != nullptr ? stack->element : 0);
}

Node *TopDirection()
{
  return stack;
}