#include <iostream>

using namespace std;

int resta(int num1, int num2);

int main()
{
  int resultado = resta(30, 50);
  cout << resultado;

  return 0;
}

int resta(int num1, int num2)
{
  return num1 - num2;
}