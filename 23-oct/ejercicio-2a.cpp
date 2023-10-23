#include <iostream>

using namespace std;

void OrdenarMenorAMayor(int, int[]);

int main()
{
  int cantidad;

  cout << "Ingrese la cantidad de números: ";
  cin >> cantidad;

  int numeros[cantidad];

  for (int i = 0; i < cantidad; i++)
  {
    cout << "Ingrese número " << i + 1 << ": ";
    cin >> numeros[i];
  }

  OrdenarMenorAMayor(cantidad, numeros);

  return 0;
}

void OrdenarMenorAMayor(int cantidad, int numeros[])
{
  for (int i = 0; i < cantidad - 1; i++)
  {
    for (int j = 0; j < cantidad - i - 1; j++)
    {
      if (numeros[j] > numeros[j + 1])
      {
        int temp = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < cantidad; i++)
  {
    cout << "Valor: " << numeros[i] << endl;
  }
}
