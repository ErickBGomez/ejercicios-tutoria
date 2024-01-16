#include <iostream>

using namespace std;

// Imprimir cuenta regresiva

int mcd(int, int);
int mcm(int, int);
int potencia(int, int);
void contarRegresiva(int);

int main()
{
  // cout << potencia(2, 1);

  contarRegresiva(5);

  return 0;
}

int mcd(int num1, int num2)
{
  if (num2 == 0)
  {
    return num1;
  }

  // llamado recursivo directo
  return mcd(num2, num1 % num2);
}

int mcm(int num1, int num2)
{
  if (num1 == 0 || num2 == 0)
  {
    return 0;
  }

  // Llamado recursivo indirecto
  return (num1 * num2) / mcd(num1, num2);
}

int potencia(int base, int exponente)
{
  if (exponente == 0)
  {
    return 1;
  }

  return base * potencia(base, exponente - 1);
}

void contarRegresiva(int contador)
{
  // if (contador > 0)
  // {
  //   cout << contador << endl;

  //   contarRegresiva(contador - 1);
  // }

  if (contador < 1)
  {
    cout << "Tiempo terminado" << endl;
  }
  else
  {
    cout << contador << endl;

    contarRegresiva(contador - 1);
  }
}
