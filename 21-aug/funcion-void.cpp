#include <iostream>

using namespace std;

void Greetings(int time);

int main()
{
  int input;

  cout << "Ingrese la hora (en formato 24h): ";
  cin >> input;

  Greetings(input);

  return 0;
}

void Greetings(int time)
{
  string greetingString;

  if (time >= 0 && time < 6)
  {
    greetingString = "Buenas madrugadas";
  }
  else if (time >= 6 && time < 12)
  {
    greetingString = "Buenos días";
  }
  else if (time >= 12 && time < 18)
  {
    greetingString = "Buenas tardes";
  }
  else if (time >= 18 && time <= 24)
  {
    greetingString = "Buenas noches";
  }
  else
  {
    greetingString = "Formato no adecuado";
  }

  cout << greetingString << endl;
}