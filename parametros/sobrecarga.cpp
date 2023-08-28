#include <iostream>

using namespace std;

int resta(int num1, int num2);
int resta(int num1, int num2, int num3);

int main()
{
  cout << resta(30, 10, 5) << endl;
  cout << resta(40, 15) << endl;

  return 0;
}

int resta(int num1, int num2)
{
  cout << "a";
  return num1 - num2;
}

int resta(int num1, int num2, int num3)
{
  cout << "b";
  return num1 - num2 - num3;
}
