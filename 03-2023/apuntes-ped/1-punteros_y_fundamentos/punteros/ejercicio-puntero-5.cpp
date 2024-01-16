#include <iostream>

using namespace std;

int *EncontrarNum(int num);

int main()
{
  int input;
  int *direction;

  cout << "Ingrese el número: ";
  cin >> input;

  direction = EncontrarNum(input);

  if (direction != nullptr)
  {
    cout << "El número: " << input << " sí existe. Dirección: " << direction << endl;
  }
  else
  {
    cout << "El número: " << input << " no existe en el arreglo" << endl;
  }

  return 0;
}

int *EncontrarNum(int num)
{

  int array[5] = {7, 4, 12, 2, 0};

  for (int i = 0; i < 5; i++)
  {
    if (num == array[i])
      return (array + i);
  }

  return nullptr;
}
