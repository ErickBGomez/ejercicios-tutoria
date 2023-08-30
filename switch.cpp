#include <iostream>

using namespace std;

int main()
{
  int num = 21;

  switch (num)
  {
  case 1:
    cout << "10";
    break;

  case 10:
    cout << "ese es su valor";
    break;

  default:
    cout << "Ninguno de los casos";
    break;
  }

  if (num == 1)
  {
    cout << "10";
  }
  else if (num == 10)
  {
    cout << "ese es su valor";
  }
  else if (num > 10 && num < 20)
  {
    cout << "Es mayor que 10";
  }
  else
  {
    cout << "Ninguno de los casos";
  }

  return 0;
}