#include <iostream>

using namespace std;

struct Node
{
  int element;
  struct Node *next;
};

struct Node *list = nullptr;

void Print();
int Size();
void Insert(int);
void InsertFront(int);
void InsertMiddle(int, int);
void InsertBack(int);
void DeleteFront();
void DeleteMiddle(int);
void DeleteBack();

int main()
{
  Insert(10);
  Insert(20);
  Insert(30);

  Print();

  cout << "------------\n";

  // DeleteFront();
  // Print();

  // cout << "------------\n";

  // DeleteBack();
  // Print();

  // InsertFront(40);
  // InsertBack(60);

  InsertMiddle(50, 2);

  Print();

  cout << "------------\n";

  DeleteMiddle(2);

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

int Size()
{
  struct Node *temp = list;
  int size = 0;

  if (list != nullptr)
  {
    while (temp != nullptr)
    {
      size++;
      temp = temp->next;
    }
  }

  return size;
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

void InsertFront(int value)
{
  struct Node *newNode = new Node();
  struct Node *temp = list;

  newNode->element = value;
  newNode->next = nullptr;

  if (list == nullptr)
  {
    list = newNode;
  }
  else
  {
    newNode->next = list;
    list = newNode;
  }
}

void InsertMiddle(int value, int position)
{
  struct Node *newNode = new Node();
  struct Node *temp = list;

  newNode->element = value;
  newNode->next = nullptr;

  position--;

  while (position != 1)
  {
    temp = temp->next;
    position--;
  }

  newNode->next = temp->next;
  temp->next = newNode;
}

void InsertBack(int value)
{
  struct Node *newNode = new Node();
  struct Node *temp = list;

  newNode->element = value;
  newNode->next = nullptr;

  if (list == nullptr)
  {
    list = newNode;
  }
  else
  {
    while (temp->next != nullptr)
    {
      temp = temp->next;
    }

    temp->next = newNode;
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

void DeleteMiddle(int position)
{
  struct Node *temp = list;
  struct Node *temp2 = nullptr;

  while (position != 1)
  {
    temp2 = temp;
    temp = temp->next;
    position--;
  }

  temp2->next = temp->next;
  delete temp;
  temp = nullptr;
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