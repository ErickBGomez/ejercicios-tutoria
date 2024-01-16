#include <iostream>

using namespace std;

void CalcularDescuento(float costoProducto, int cantidad, float &descuento, float &totalPagar);

int main()
{
  int cantidadInput;
  float costoInput, descuento, totalPagar;

  cout << "Costo del producto (precio unitario): $";
  cin >> costoInput;

  cout << "Cantidad del producto: ";
  cin >> cantidadInput;

  CalcularDescuento(costoInput, cantidadInput, descuento, totalPagar);

  cout << "Descuento aplicado al costo: $" << descuento << "\nTotal a pagar: $" << totalPagar << endl;

  return 0;
}

void CalcularDescuento(float costoProducto, int cantidad, float &descuento, float &totalPagar)
{
  descuento = costoProducto * 0.2;
  totalPagar = cantidad * (costoProducto - descuento);
}
