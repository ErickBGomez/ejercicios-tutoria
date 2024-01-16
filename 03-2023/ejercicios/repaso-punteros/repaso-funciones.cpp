#include <iostream>

using namespace std;

void ModificarPorValor(int, int);
void ModificarPorPuntero(int *, int);
void ModificarPorReferencia(int &, int);

int main()
{
  int variable = 0;
  int *puntero = &variable;

  // Sección 1:
  cout << "\t- 1. Presentando valores iniciales:" << endl;
  cout << "Valor inicial de variable: " << variable << endl;
  cout << "Valor inicial de puntero: " << *puntero << endl;

  // Sección 2:
  cout << "\n\t- 2. Modificar variable por valor:" << endl;

  ModificarPorValor(variable, 5); // Los cambios solo se quedarán dentro de la función
  cout << "Valor actual de la variable: " << variable << endl;

  // Sección 3:
  cout << "\n\t- 3. Modificar variable por puntero:" << endl;

  ModificarPorPuntero(puntero, 10); // Se necesita llamar al puntero para ser modificado
  cout << "Valor actual de la variable: " << variable << endl;

  // Sección 4:
  cout << "\n\t- 4. Modificar variable por referencia:" << endl;

  ModificarPorReferencia(variable, 15); // Se puede pasar a la variable y también será modificada
  cout << "Valor actual de la variable: " << variable << endl;

  return 0;
}

void ModificarPorValor(int parametroValor, int nuevoValor)
{
  parametroValor = nuevoValor;
  cout << "Valor modificado por valor: " << parametroValor << endl;
}

void ModificarPorPuntero(int *parametroPuntero, int nuevoValor)
{
  *parametroPuntero = nuevoValor;
  cout << "Valor modificado por puntero: " << *parametroPuntero << endl;
}

void ModificarPorReferencia(int &parametroReferencia, int nuevoValor)
{
  parametroReferencia = nuevoValor;
  cout << "Valor modificado por referencia: " << parametroReferencia << endl;
}