#include <iostream>

using namespace std;

int IncrementoPorValor(int i);
int IncrementoPuntero(int *i);
int IncrementoReferencia(int &i);

int main()
{
  int num = 4;

  // Por valor (copia)
  cout << num << endl;                     // 4
  cout << IncrementoPorValor(num) << endl; // 5
  cout << num << endl;                     // 4

  // Por puntero
  cout << IncrementoPuntero(&num) << endl; // 5

  // Por referencia
  cout << IncrementoReferencia(num) << endl; // 6

  cout << num << endl; // 6

  return 0;
}

int IncrementoPorValor(int i)
{
  return i += 1;
}

int IncrementoPuntero(int *i)
{
  return *i += 1;
}

int IncrementoReferencia(int &i)
{
  return i += 1;
}