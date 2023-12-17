#include <iostream>

using namespace std;

int main()
{
  string arrayString;
  int arrayLength;
  string *lugares;
  string *paises;

  cout << "Cuantos lugares turísticos?: ";
  getline(cin, arrayString);
  arrayLength = stoi(arrayString);

  lugares = new string[arrayLength];
  paises = new string[arrayLength];

  for (int i = 0; i < arrayLength; i++)
  {
    cout << "Ingrese el lugar turísticos N°" << i + 1 << ": ";
    getline(cin, lugares[i]);

    cout << "Ingrese el país N°" << i + 1 << ": ";
    getline(cin, paises[i]);
  }

  cout << "\n\nImprimiendo lugares turísicos:\n";

  for (int i = 0; i < arrayLength; i++)
  {
    cout << i + 1 << ") Lugar: " << lugares[i] << ". País: " << paises[i] << endl;
  }

  delete[] lugares;
  delete[] paises;

  return 0;
}