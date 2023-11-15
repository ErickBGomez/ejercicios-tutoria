#include <iostream>
#include <vector>

using namespace std;

struct Bebida
{
  string nombre_bebida;
  float precio;
};

vector<Bebida> packs;

void ImprimirBebidas();
void AgregarBebida(Bebida);
void BuscarBebida(string);
void BuscarYModificarBebida(string);
void EliminarBebida(string);

int main()
{
  Bebida bebida;
  string bebidaEncontrar, bebidaModificar, bebidaEliminar;

  // Inicializar elementos
  packs.push_back({"Agua", 6.35});
  packs.push_back({"Coca Cola", 12.45});

  ImprimirBebidas();

  // Agregar elementos
  cout << "Ingrese nombre de la bebida: ";
  cin >> bebida.nombre_bebida;

  cout << "Ingrese el precio de la bebida: ";
  cin >> bebida.precio;

  AgregarBebida(bebida);

  ImprimirBebidas();

  // Encontrar
  cout << "Ingrese la bebida que desea buscar: ";
  cin >> bebidaEncontrar;

  BuscarBebida(bebidaEncontrar);

  // Modificar
  cout << "Ingrese la bebida que desea modificar: ";
  cin >> bebidaModificar;

  BuscarYModificarBebida(bebidaModificar);

  ImprimirBebidas();

  // Eliminar
  cout << "Ingrese la bebida que desea eliminar: ";
  cin >> bebidaEliminar;

  EliminarBebida(bebidaEliminar);

  ImprimirBebidas();

  return 0;
}

void ImprimirBebidas()
{
  for (Bebida bebida : packs)
  {
    cout << bebida.nombre_bebida << " - $" << bebida.precio << endl;
  }

  cout << "\n\n";
}

void AgregarBebida(Bebida nuevaBebida)
{
  packs.push_back(nuevaBebida);
}

void BuscarBebida(string nombreBebida)
{
  for (Bebida bebida : packs)
  {
    if (nombreBebida == bebida.nombre_bebida)
    {
      cout << "Bebida encontrada. Precio $" << bebida.precio << endl;
      return;
    }
  }

  cout << "No se ha encontrado la bebida" << endl;
}

void BuscarYModificarBebida(string nombreBebida)
{
  string nuevoNombre;
  int nuevoPrecio;

  for (int i = 0; i < packs.size(); i++)
  {
    if (nombreBebida == packs[i].nombre_bebida)
    {
      cout << "Ingrese el nuevo nombre: ";
      cin >> nuevoNombre;

      cout << "Ingrese el nuevo precio: ";
      cin >> nuevoPrecio;

      packs[i].nombre_bebida = nuevoNombre;
      packs[i].precio = nuevoPrecio;
      return;
    }
  }

  cout << "No se ha encontrado la bebida" << endl;
}

void EliminarBebida(string nombreBebida)
{
  for (int i = 0; i < packs.size(); i++)
  {
    if (nombreBebida == packs[i].nombre_bebida)
    {
      packs.erase(packs.begin() + i);

      cout << "Bebida eliminada" << endl;
      return;
    }
  }

  cout << "No se ha encontrado la bebida" << endl;
}