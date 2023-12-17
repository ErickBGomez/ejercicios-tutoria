#include <iostream>

using namespace std;

int main()
{
  int *ptr;
  ptr = new int;

  if (ptr == NULL)
  {
    cout << "error";
  }
  else
  {
    cout << ptr;
  }

  delete ptr;

  return 0;
}