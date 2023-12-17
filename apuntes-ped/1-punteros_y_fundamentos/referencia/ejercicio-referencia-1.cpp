#include <iostream>

using namespace std;

void InvertirValores(int *x, int *y);

int main()
{
  int num1, num2;

  cout << "Ingrese primer número: ";
  cin >> num1;

  cout << "Ingrese segundo número: ";
  cin >> num2;

  InvertirValores(&num1, &num2);

  cout << "Valor x: " << num1 << "\nValor y: " << num2 << endl;

  return 0;
}

void InvertirValores(int *x, int *y)
{
  int temp = *x;

  *x = *y;
  *y = temp;
}
