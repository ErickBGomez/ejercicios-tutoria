#include <iostream>
#include <ctime>

using namespace std;

struct Package
{
  string trackingNumber;
  string senderName;
  string destinationName;
  string address;
  bool fragile;
  int priority;
};

struct Node
{
  struct Package package;
  struct Node *next = nullptr;
};

struct Node *queue = nullptr;

string generateTrackingNumber();
void Insert(Package);
Node *Search(string);
void Delete();
void Print();

int main()
{
  int option;
  Package userPackage;
  string inputQuery;
  struct Node *queryResult;

  srand(static_cast<unsigned int>(time(nullptr)));

  do
  {
    cout << "Menu:\n[1] Ingresar paquete\n[2] Seguimiento\n[3] Actualizar información\n[4] Mostrar cola\n[5] Delete package\n[0] Exit\n> ";
    cin >> option;

    cout << "\n";

    switch (option)
    {
    case 0:
      cout << "Exiting...";
      break;

    case 1: // Insert
      char isFragileInput;

      userPackage.trackingNumber = generateTrackingNumber();

      cout << "Insert: Sender name\n> ";
      cin >> userPackage.senderName;

      cout << "Insert: Destination Name\n> ";
      cin >> userPackage.destinationName;

      cout << "Insert: Address\n> ";
      cin >> userPackage.address;

      cout << "Insert: Is this package fragile? [Y/N]\n> ";
      cin >> isFragileInput;

      userPackage.fragile = (isFragileInput == 'Y') ? true : false;

      cout << "Insert: Priority index (1: Three days. 2: Seven days. 3: Fifteen days)\n> ";
      cin >> userPackage.priority;

      Insert(userPackage);

      break;

    case 2: // Search tracking number
      cout << "Type your desired tracking number:\n> ";
      cin >> inputQuery;

      queryResult = Search(inputQuery);

      if (queryResult != nullptr)
      {
        cout << "Package found:" << endl;

        cout << "\tTracking number: " << queryResult->package.trackingNumber << endl;
        cout << "\tSender Name: " << queryResult->package.senderName << endl;
        cout << "\tDestination Name: " << queryResult->package.destinationName << endl;
        cout << "\tAddress: " << queryResult->package.address << endl;
        cout << "\tFragile: " << queryResult->package.fragile << endl;
        cout << "\tPriority: " << queryResult->package.priority << endl;
        cout << "\n------------\n\n";
      }
      else
      {
        cout << "Package not found..." << endl;
      }

      break;

    case 3: // Update package
      cout << "Type your desired tracking number:\n> ";
      cin >> inputQuery;

      queryResult = Search(inputQuery);

      if (queryResult != nullptr)
      {
        cout << "Package found:" << endl;
        cout << "Enter the new address:\n> ";
        cin >> queryResult->package.address;

        cout << "Package information updated." << endl;
      }
      else
      {
        cout << "Package not found..." << endl;
      }

      break;

    case 4: // Print
      Print();
      break;

    case 5: // Delete package
      Delete();
      break;

    default:
      cout << "Error" << endl;
      break;
    }

  } while (option != 0);

  return 0;
}

// 1 -> 2 -> [3] -> 4 -> (5)
//

// queue = 1

// temp = 5
// temp.next = nullptr

// temp2 = 3
// temp2.next = 4

// newNode = 4
// newNode.next = 5

// temp != nullptr = true
// temp < newNode = false
// queue == temp = false

void Insert(Package newPackage)
{
  struct Node *newNode = new Node();
  struct Node *temp = queue;
  struct Node *temp2 = nullptr;

  newNode->package = newPackage;
  newNode->next = nullptr;

  while (temp != nullptr && temp->package.priority < newPackage.priority)
  {
    temp2 = temp;
    temp = temp->next;
  }

  if (queue == temp)
  {
    queue = newNode;
  }
  else
  {
    temp2->next = newNode;
  }

  newNode->next = temp;
}

Node *Search(string query)
{
  struct Node *temp = queue;

  while (temp != nullptr)
  {
    if (temp->package.trackingNumber == query)
    {
      return temp;
    }

    temp = temp->next;
  }

  return nullptr;
}

void Print()
{
  int counter = 1;
  struct Node *temp = queue;

  while (temp != nullptr)
  {
    cout << "Package " << counter << ":\n";
    cout << "\tTracking number: " << temp->package.trackingNumber << endl;
    cout << "\tSender Name: " << temp->package.senderName << endl;
    cout << "\tDestination Name: " << temp->package.destinationName << endl;
    cout << "\tAddress: " << temp->package.address << endl;
    cout << "\tFragile: " << temp->package.fragile << endl;
    cout << "\tPriority: " << temp->package.priority << endl;
    cout << "\n------------\n\n";

    temp = temp->next;
    counter++;
  }
}

void Delete()
{
  struct Node *temp = queue;

  if (queue != nullptr)
  {
    queue = temp->next;

    cout << "Package " << temp->package.trackingNumber << " deleted successfully." << endl;

    delete temp;
  }
  else
  {
    cout << "Queue is empty" << endl;
  }
}

string generateTrackingNumber()
{
  string trackingNumber;
  const int longitudNumero = 10;
  int digito;

  for (int i = 0; i < longitudNumero; i++)
  {
    digito = rand() % 10;
    trackingNumber += to_string(digito);
  }

  return trackingNumber;
}