#include <iostream>

using namespace std;

int main()
{

  int edad;

  cout << "ingresa tu edad" << endl;
  cin >> edad;

  if (edad >= 18)
  {
    cout << "puedes ver el contenido";
  }
  else
  {
    cout << "eres menor edad";
  }

  return 0;
}