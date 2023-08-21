#include <iostream>

using namespace std;

float DollarToYen(float dollar);

int main()
{
  int input;

  cout << "Ingrese dólares: USD ";
  cin >> input;

  cout << "Conversión: JPY " << DollarToYen(input) << endl;

  return 0;
}

float DollarToYen(float dollar)
{
  const float yenValue = 146.16;

  return dollar * yenValue;
}