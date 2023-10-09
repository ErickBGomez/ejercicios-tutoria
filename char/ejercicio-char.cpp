#include <iostream>

using namespace std;

int main()
{
  int valor;
  int ascii;
  char letra;

  cout << "seleccione la opcion que desea:\n 1.letra \n 0.numero ";
  cin >> valor;

  if (valor == 1)
  {
    cout << "Ingrese un letra: ";
    cin >> letra;
    cout << "conversion en ascii: " << (int)letra << endl;
  }
  else if (valor == 0)
  {
    cout << "ingrese un numero: ";
    cin >> ascii;
    cout << "conversion a letra: " << (char)ascii << endl;
  }

  return 0;
}