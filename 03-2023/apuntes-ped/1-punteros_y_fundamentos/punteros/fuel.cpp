#include <iostream>
#include <unistd.h>

using namespace std;

struct Fuel
{
  float gasoline = 0;
  float diesel = 0;
};

float RandomIntRange(int min, int max);
void InsertFuel(float *selectedFuel);

int main()
{
  int tipoGasolina;
  int tanqueLleno = 10;
  int intervaloGasolina = 1;
  Fuel fuel;
  float *selectedFuel;

  cout << "Ingrese el tipo de combustible:\n[0] Gasolina\n[1] Diesel\n> ";
  cin >> tipoGasolina;

  selectedFuel = (tipoGasolina == 0) ? &fuel.gasoline : &fuel.diesel;

  while (*selectedFuel < tanqueLleno)
  {
    InsertFuel(selectedFuel);

    cout << "Tanque: " << *selectedFuel << endl;

    sleep(intervaloGasolina);
  }

  cout << "Tanque lleno" << endl;

  return 0;
}

float RandomIntRange(int min, int max)
{
  srand(time(NULL));
  return ((rand() % (max - min + 1)) + min);
}

void InsertFuel(float *selectedFuel)
{
  *selectedFuel += RandomIntRange(1, 10) / 10;
}