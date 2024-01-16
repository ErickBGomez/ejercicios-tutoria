#include <iostream>

using namespace std;

int main()
{
  int a = 15;
  int b = 60;
  int *ptr;
  int *ptr2;

  ptr = &a;
  ptr2 = ptr;

  // Se accede a la dirección de memoria del puntero, no del elemento que se está apuntando
  if (&ptr == &ptr2)
  {
    cout << "Son iguales";
  }
  else
  {
    cout << "No son iguales";
  }

  cout << ptr << " " << ptr2 << " " << &a;

  return 0;
}