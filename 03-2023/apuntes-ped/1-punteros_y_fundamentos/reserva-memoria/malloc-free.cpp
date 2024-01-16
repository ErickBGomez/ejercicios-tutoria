#include <iostream>

using namespace std;

int main()
{

  int *ptr; // Buena práctica poner * al lado del nombre, no al tipo de dato.

  ptr = (int *)malloc(100 * sizeof(int)); // Reservar espacio de memoria

  free(ptr); // Liberar memoria

  return 0;
}