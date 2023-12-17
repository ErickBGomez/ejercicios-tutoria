#include <iostream>

using namespace std;

int main()
{

  int *ptr;
  ptr = new int; // Reservar

  delete ptr; // Liberar

  // Para reservar arreglos
  int size;
  int *ptr2;

  ptr2 = new int[size];
  delete ptr2;

  return 0;
}