#include <iostream>

using namespace std;

struct Node
{
  int element;
  struct Node *next;
} node;

struct Node *list = nullptr;

void Print();
void InsertFront(int);
void InsertBack(int);
void DeleteFront();
void DeleteLast();

int main()
{
  InsertFront(10);
  InsertFront(20);
  InsertFront(30);
  InsertBack(50);

  Print();

  return 0;
}

void Print()
{
  struct Node *temp = list;

  if (list != nullptr)
  {
    do
    {
      cout << "Value: " << temp->element;
      cout << "\n\tDirection: " << temp;
      cout << "\n\tNext direction: " << temp->next << endl;

      temp = temp->next;
    } while (temp != list);
  }
  else
  {
    cout << "Empty list" << endl;
  }
}

void InsertFront(int value)
{
  struct Node *newNode = new Node();
  struct Node *temp;

  newNode->element = value;

  if (list == nullptr)
  {
    list = newNode;
    list->next = list;
    temp = list;
  }
  else
  {
    newNode->next = list;
    list = newNode;
    temp->next = list;
  }
}

void InsertBack(int value)
{
  struct Node *newNode = new Node();
  struct Node *temp;

  newNode->element = value;

  if (list == nullptr)
  {
    list = newNode;
    list->next = list;
    temp = newNode;
  }
  else
  {
    temp->next = newNode;
    newNode->next = list;
  }
}

void DeleteFront()
{
}

void DeleteLast()
{
}