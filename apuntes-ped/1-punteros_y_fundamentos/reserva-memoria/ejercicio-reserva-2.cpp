#include <iostream>

using namespace std;

int main()
{
  string arrayString;
  int arrayLength;
  string **lugares;

  cout << "Cuantos lugares turísticos?: ";
  getline(cin, arrayString);
  arrayLength = stoi(arrayString);

  lugares = new string *[arrayLength];

  for (int i = 0; i < arrayLength; i++)
  {
    lugares[i] = new string[2];

    cout << "Ingrese el lugar turísticos N°" << i + 1 << ": ";
    getline(cin, lugares[i][0]);

    cout << "Ingrese el país N°" << i + 1 << ": ";
    getline(cin, lugares[i][1]);
  }

  cout << "\n\nImprimiendo lugares turísicos:\n";

  for (int i = 0; i < arrayLength; i++)
  {
    cout << i + 1 << ") Lugar: " << lugares[i][0] << ". País: " << lugares[i][1] << endl;
  }

  for (int i = 0; i < arrayLength; i++)
  {
    delete[] lugares[i];
  }

  delete[] lugares;

  lugares = nullptr;

  return 0;
}