#include <iostream>

using namespace std;

int main()
{

  string respuesta = "s";

  while (respuesta == "s")
  {
    cout << "te quiero mucho uwu ";
    // cin >> respuesta;
  }

  do
  {
    cout << "Seguir repitiendo 2? ";
    cin >> respuesta;
  } while (respuesta == "s");

  return 0;
}