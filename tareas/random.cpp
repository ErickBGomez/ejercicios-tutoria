#include <iostream>
#include <random>

using namespace std;

int random(int, int);

int main()
{
  const int dimension = 10;
  int numeros[dimension];
  int input;
  int minCercano = 100;

  for (int i = 0; i < dimension; i++)
  {
    numeros[i] = random(1, 10);
  }

  for (int i = 0; i < dimension; i++)
  {
    cout << numeros[i] << ", ";
  }

  cout << "\n\nIngrese un número\n> ";
  cin >> input;

  // Corregir esto luego
  for (int i = 0; i < dimension; i++)
  {
    if (input > numeros[i])
      minCercano = numeros[i];
  }

  cout << "Mínimo cercano: " << minCercano << endl;

  return 0;
}

int random(int min, int max)
{
  random_device rd;
  mt19937 gen(rd());

  uniform_int_distribution<int> distribution(min, max);

  return distribution(gen);
}