#include <iostream>

using namespace std;

// 1. Declarar
void Saludar(string saludo);

int main()
{
  // 3. Invocación
  Saludar("Hola, mundo");

  return 0;
}

// 2. Definición
void Saludar(string saludo)
{
  cout << saludo << endl;
}