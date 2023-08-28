#include <iostream>

using namespace std;

void Imprimir(int nums[5]);

int main()
{
  int arreglo[5] = {7, 934, 3, 10, 5};

  Imprimir(arreglo);

  return 0;
}

void Imprimir(int nums[5])
{
  for (int i = 0; i < 5; i++)
  {
    cout << nums[i] << endl;
  }
}
