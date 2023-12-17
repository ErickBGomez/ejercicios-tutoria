#include <iostream>

using namespace std;

struct Node
{
  int element;
  struct Node *next;
  struct Node *before;
};

struct Node *list = nullptr;

void Print();
void InsertFront(int);
void InsertMiddle(int, int);
void InsertBack(int);
void DeleteMiddle(int);

int main()
{

  InsertFront(10);
  InsertFront(20);
  InsertFront(30);
  InsertMiddle(50, 2);

  Print();

  cout << "-------------" << endl;

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
      cout << "Value: " << temp->element;
      cout << "\n\tDirection: " << temp;
      cout << "\n\tBefore direction: " << temp->before;
      cout << "\n\tNext direction: " << temp->next << endl;

      temp = temp->next;
    }
  }
  else
  {
    cout << "Empty list" << endl;
  }
}

void InsertFront(int value)
{
  struct Node *newNode = new Node();
  struct Node *temp = list;

  newNode->element = value;
  newNode->next = nullptr;
  newNode->before = nullptr;

  if (list == nullptr)
  {
    list = newNode;
  }

  else
  {
    newNode->next = list;
    list->before = newNode;
    list = newNode;
  }
}

void InsertMiddle(int value, int position)
{
  struct Node *newNode = new Node();
  struct Node *temp = list;
  struct Node *temp2 = nullptr;

  newNode->element = value;
  newNode->next = nullptr;
  newNode->before = nullptr;

  position--;

  while (position != 1)
  {
    temp = temp->next;
    position--;
  }

  temp2 = temp->next;
  temp->next = newNode;
  temp2->before = newNode;
  newNode->next = temp2;
  newNode->before = temp;
}

void InsertBack(int value)
{
  struct Node *newNode = new Node();
  struct Node *temp = list;

  newNode->element = value;
  newNode->next = nullptr;
  newNode->before = nullptr;

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
    newNode->before = temp;
  }
}

void DeleteMiddle(int position)
{
  struct Node *temp = list;
  struct Node *temp2 = nullptr;
  struct Node *temp3 = nullptr;

  while (position != 1)
  {
    temp2 = temp;
    temp = temp->next;
    temp3 = temp->next;
    position--;
  }

  temp2->next = temp3;
  temp3->before = temp2;

  delete temp;
  temp = nullptr;
}