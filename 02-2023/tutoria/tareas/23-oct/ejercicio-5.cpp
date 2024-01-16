#include <iostream>

using namespace std;

void OperarLimites(int, int);

int main()
{
  int minInput, maxInput;

  cout << "Limite menor: ";
  cin >> minInput;

  cout << "Limite mayor: ";
  cin >> maxInput;

  OperarLimites(minInput, maxInput);

  return 0;
}

void OperarLimites(int min, int max)
{
  int suma = 0;
  int multi = 1;

  if (min <= max)
  {
    for (int i = min; i <= max; i++)
    {
      suma += i;
      multi *= i;
    }

    cout << "Sumatoria total: " << suma << "\nMultiplicativa total: " << multi << endl;
  }
  else
  {
    cout << "Error: Debe ingresar el límite menor primero" << endl;
  }
}