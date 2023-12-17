#include <iostream>

using namespace std;

struct Node
{
  int element;
  struct Node *next;
};

struct Node *list = nullptr;

void Print();
void Insert(int);
void DeleteFront();
void DeleteBack();

int main()
{
  Insert(10);
  Insert(20);
  Insert(30);

  Print();

  cout << "------------\n";

  DeleteFront();
  Print();

  cout << "------------\n";

  DeleteBack();
  Print();

  return 0;
}

void Print()
{
  struct Node *temp = list;

  if (list != nullptr)
  {
    while (temp != nullptr)
    {
      cout << "Value " << temp->element << " Direction " << temp << " Next direction " << temp->next << endl;

      temp = temp->next;
    }
  }
  else
  {
    cout << "Empty list" << endl;
  }
}

void Insert(int value)
{
  struct Node *newNode = new Node();
  // temp solo se usará cuando se insertar al final de la lista
  struct Node *temp = list;

  if (newNode != nullptr)
  {
    newNode->element = value;
    newNode->next = nullptr;

    if (list == nullptr)
    {
      list = newNode;
    }
    else
    {
      // Agregar al inicio de la lista
      // newNode->next = list;
      // list = newNode;

      // Agregar al final de la lista
      while (temp->next != nullptr)
      {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }
  else
  {
    cout << "Cannot add more nodes" << endl;
  }
}

void DeleteFront()
{
  struct Node *temp = list;
  if (list != nullptr)
  {
    list = temp->next;
    delete temp;
  }
  else
  {
    cout << "Empty list" << endl;
  }
}

void DeleteBack()
{
  // temp recorre toda la lsita
  struct Node *temp = list;
  // temp2 es para guardar el valor anterior de temp en cada iteración.
  struct Node *temp2 = nullptr;

  if (list != nullptr)
  {
    if (temp->next != nullptr)
    {
      while (temp->next != nullptr)
      {
        temp2 = temp;
        temp = temp->next;
      }

      temp2->next = nullptr;

      delete temp;
      temp = nullptr; // recomendación poner esto
    }
    else
    {
      delete list;
      list = nullptr;
    }
  }
  else
  {
    cout << "Empty list" << endl;
  }
}