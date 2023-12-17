#include <iostream>
#include <unistd.h>

using namespace std;

struct Empresa
{
  string nombre;
  float compra;
  float venta;
} empresa;

void LeerEmpresa(float &actual);
void EstablecerValor(Empresa &empresa);

int main()
{
  cout << "Ingrese nombre de la empresa: ";
  cin >> empresa.nombre;

  empresa.compra = 0;
  empresa.venta = 0;

  cout << "\nValor de compra y venta de: " << empresa.nombre << "\n\n";

  while (true)
  {
    EstablecerValor(empresa);

    cout << "Compra: $" << empresa.compra << " - Venta: $" << empresa.venta << endl;

    sleep(2);
  }

  return 0;
}

void LeerEmpresa(float &compraRandom, float &ventaRandom)
{
  srand(time(NULL));
  compraRandom = rand() % (5000 + 1);
  ventaRandom = rand() % (5000 + 1);
}

void EstablecerValor(Empresa &empresa)
{
  float compraLectura = 0;
  float ventaLectura = 0;

  LeerEmpresa(compraLectura, ventaLectura);

  empresa.compra = compraLectura;
  empresa.venta = ventaLectura;
}