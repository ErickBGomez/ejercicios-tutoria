#include <iostream>
#include <vector>

using namespace std;

struct Bebida
{
  string nombre_bebida;
  float precio;
};

int main()
{
  vector<Bebida> packs;

  packs.push_back({"Agua", 6.35});
  packs.push_back({"Coca Cola", 12.45});

  for (Bebida bebida : packs)
  {
    cout << bebida.nombre_bebida << " - $" << bebida.precio << endl;
  }

  return 0;
}