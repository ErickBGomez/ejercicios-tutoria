#include <iostream>

using namespace std;

const int dimension = 7;

void ImprimirValores(int *);
void ImprimirValoresYDirecciones(int *);

int main()
{
  // Declarar arreglo
  int miArray[dimension] = {10, 22, 333, 4404, 55555, 60606, 70};

  // Sección 1
  cout << "\t- 1: Obtener valores de un arreglo\n\n";
  cout << "Valor de indice 2 (usando []): " << miArray[2] << endl;
  cout << "Valor de indice 2 (usando *): " << *(miArray + 2) << endl;

  cout << "\n";
  cout << "Valor de indice 0 (usando []): " << miArray[0] << endl;
  cout << "Valor de indice 0 (usando *): " << *miArray << endl;

  // Sección 2
  cout << "\n\n\t- 2: Obtener direcciones de un arreglo\n\n";
  cout << "Dirección de indice 2 (usando &[]): " << &miArray[2] << endl;
  cout << "Dirección de indice 2 (usando puntero): " << (miArray + 2) << endl;

  cout << "\n";
  cout << "Dirección de indice 0 (usando &[]): " << &miArray[0] << endl;
  cout << "Dirección de indice 0 (usando puntero): " << miArray << endl;

  // Sección 3
  cout << "\n\n\t- 3: Usar arreglos en una función\n\n";

  ImprimirValores(miArray);
  cout << "\n";
  ImprimirValoresYDirecciones(miArray);

  return 0;
}

void ImprimirValores(int *array)
{
  cout << "Valores del arreglo: ";

  for (int i = 0; i < dimension; i++)
  {
    cout << *(array + i) << ", ";
  }

  cout << endl;
}

void ImprimirValoresYDirecciones(int *array)
{
  cout << "Valores y direcciones del arreglo:\n";

  for (int i = 0; i < dimension; i++)
  {
    cout << " - " << *(array + i) << " (" << (array + i) << ")" << endl;
    // *: Obtiene el valor de cada elemento
    // Sin *: Obtiene la dirección de cada elemento
  }

  cout << endl;
}