#include <iostream>

using namespace std;

float NotaPromedio(float *);

int main()
{
  float Notas[4];

  for (int i = 0; i < 4; i++)
  {
    cout << "Ingrese la nota: " << endl;
    cin >> Notas[i];
  }

  float Promedio = NotaPromedio(Notas);

  cout << "Su promedio es: " << Promedio;

  return 0;
}

float NotaPromedio(float *Notas)
{
  float suma, promedio;

  for (int i = 0; i < 4; i++)
  {
    suma = suma + Notas[i];
  }

  promedio = suma / 4;

  return promedio;
}