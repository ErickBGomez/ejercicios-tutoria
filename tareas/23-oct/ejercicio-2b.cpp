#include <iostream>

using namespace std;

int EncontrarMayor(int, int[]);

int main()
{
  int cantidad;
  int resultado;

  cout << "Ingrese la cantidad de números: ";
  cin >> cantidad;

  int numeros[cantidad];

  for (int i = 0; i < cantidad; i++)
  {
    cout << "Ingrese número " << i + 1 << ": ";
    cin >> numeros[i];
  }

  resultado = EncontrarMayor(cantidad, numeros);

  cout << "El mayor de todos los números es: " << resultado << endl;

  return 0;
}

int EncontrarMayor(int cantidad, int numeros[])
{
  int max = 0;

  for (int i = 0; i < cantidad; i++)
  {
    if (numeros[i] > max)
    {
      max = numeros[i];
    }
  }

  return max;
}
