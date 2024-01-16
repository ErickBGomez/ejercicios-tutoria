#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char cadena1[50];
  char cadena2[50];

  cout << "ingrese una palabra: ";
  cin >> cadena1;
  cout << "ingrese otra palabra: ";
  cin >> cadena2;

  cout << "la longitud de la primera cadena es: " << strlen(cadena1) << endl;
  cout << "la longitud de la segunda cadena es: " << strlen(cadena2) << endl;

  int resultado = strcmp(cadena1, cadena2);
  if (resultado > 0)
  {
    cout << cadena1 << " es mayor\n";
  }
  else if (resultado < 0)
  {
    cout << cadena2 << " es mayor\n";
  }
  else
  {
    cout << "son iguales\n";
  }

  strcat(cadena1, cadena2);
  cout << "Al concatnar queda: " << cadena1 << endl;

  return 0;
}