// Los punteros nos ayudan a guardar la dirección de memoria y modificar su contenido en cualquier
// parte del código.

#include <iostream>

using namespace std;

int main()
{
  // Declarar variable vs. Declarar puntero
  int variable;
  int *puntero;

  // Inicializar variable vs. Inicializar puntero
  variable = 5;
  puntero = &variable;

  // Nota: Para declarar e inicializar un puntero al mismo tiempo también se hace:
  // int *puntero = &variable;

  // Sección 1: Valores de variables y punteros
  cout << "\t - 1: Valores de variables y punteros\n\n";

  cout << "Valor de variable: " << variable << endl;
  cout << "Valor que apunta el puntero: " << *puntero << "\n\n";

  // Sección 2: Dirección de variables y punteros
  cout << "\t - 2: Dirección de variables y punteros\n\n";

  cout << "Dirección guardada en el puntero: " << puntero << endl;
  cout << "Dirección original de la variable: " << &variable << endl;
  cout << "Dirección del puntero: " << &puntero << "\n\n";

  // Sección 3: Modificación de valores
  cout << "\t - 3: Modificación de valores\n\n";

  cout << "- Modificando valor desde la variable: " << endl;
  variable = 7;
  cout << "Valor de variable: " << variable << endl;
  cout << "Valor guardado en puntero: " << *puntero << endl;

  cout << "\n- Modificando valor desde el puntero: " << endl;
  *puntero = 10;
  cout << "Valor de variable: " << variable << endl;
  cout << "Valor guardado en puntero: " << *puntero << endl;

  return 0;
}