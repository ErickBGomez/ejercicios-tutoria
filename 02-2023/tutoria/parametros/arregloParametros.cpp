#include <iostream>
using namespace std;

void numero(int num1, int num2[7]);

int main()
{
  int lista[7] = {9, 5, 7, 8, 4, 2, 3};
  numero(4, lista);

  return 0;
}

void numero(int num1, int num2[7])
{
  for (int i = 0; i < 7; i++)
  {
    if (num1 == num2[i])
    {
      cout << "numero encontrado:" << num2[i];
    }
  }
}