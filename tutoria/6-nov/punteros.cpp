#include <iostream>

using namespace std;

void FuncionPuntero(string *);
void FuncionReferencia(string &);

int main()
{
  string variable = "Adios";

  cout << variable << endl; // Adios

  FuncionReferencia(variable);

  cout << variable << endl; // Adios

  return 0;
}

void FuncionPuntero(string *valor)
{
  *valor = "Hola";

  cout << *valor << endl;
}

void FuncionReferencia(string &valor)
{
  valor = "Hola";

  cout << valor << endl;
}