#include <iostream>

using namespace std;

void Calculadora(int, int, int &, int &, int &);

int main()
{
  int num1 = 20;
  int num2 = 10;

  int suma, resta, multiplicacion;

  Calculadora(num1, num2, suma, resta, multiplicacion);

  cout << "Suma: " << suma << "\nResta: " << resta << "\nMultiplicacion: " << multiplicacion << endl;

  return 0;
}

void Calculadora(int x, int y, int &suma, int &resta, int &multiplicacion)
{
  suma = x + y;
  resta = x - y;
  multiplicacion = x * y;
}
