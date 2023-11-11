#include <iostream>
#include <random>

using namespace std;

int random(int, int);

int main()
{
  const int dimension = 10;
  int numeros[dimension];
  int entrada;
  int minimoCercano = 0;

  // Generar números aleatorios y guardarlo en array numeros
  for (int i = 0; i < dimension; i++)
  {
    numeros[i] = random(1, 10);
  }

  // Imprimir array de números
  for (int i = 0; i < dimension; i++)
  {
    cout << numeros[i] << ", ";
  }

  // Pedir la entrada del usuario
  cout << "\n\nIngrese un número\n> ";
  cin >> entrada;

  // Verificar el número mínimo más cercano (salirse del bucle una vez encontrado)
  for (int i = 0; i < dimension; i++)
  {
    if (entrada > numeros[i])
    {
      minimoCercano = numeros[i];
      break;
    }
  }

  // Imprimir resultado
  cout << "Mínimo cercano: " << minimoCercano << endl;

  return 0;
}

// Generar números aleatorios con rango mínimo y máximo (inclusivos)
int random(int min, int max)
{
  random_device rd;
  mt19937 gen(rd());

  uniform_int_distribution<int> distribution(min, max);

  return distribution(gen);
}