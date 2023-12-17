#include <iostream>

using namespace std;

int main()
{
  int *edad, numEdad;

  cout << "Cuantas edades se registran: ";
  cin >> numEdad;

  edad = new int[numEdad];

  for (int i = 0; i < numEdad; i++)
  {
    cout << "Ingrese edad: " << i + 1 << ": ";
    cin >> edad[i];
  }

  cout << "Imprimir edades:" << endl;

  for (int i = 0; i < numEdad; i++)
  {

    cout << "Edad: " << i + 1 << ": " << edad[i] << endl;
  }

  delete[] edad;

  return 0;
}