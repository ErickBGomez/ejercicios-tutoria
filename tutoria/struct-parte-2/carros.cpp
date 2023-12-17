#include <iostream>

using namespace std;

struct Carro
{
  string marca;
};

int main()
{
  Carro carros[3];

  for (int i = 0; i < 3; i++)
  {
    cout << "Ingrese marca del carro " << i << ": ";
    cin >> carros[i].marca;
  }

  cout << "\n";

  for (int i = 0; i < 3; i++)
  {
    cout << "Marca del carro " << i << ": " << carros[i].marca << endl;
  }

  return 0;
}