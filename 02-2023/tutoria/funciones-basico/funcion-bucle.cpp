#include <iostream>

using namespace std;

int Exponentation(int base, int exponent);

int main()
{
  cout << Exponentation(2, 3);

  return 0;
}

int Exponentation(int base, int exponent)
{
  int result = 1;

  for (int i = 0; i < exponent; i++)
  {
    result *= base;
  }

  return result;
}
