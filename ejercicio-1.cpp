#include <iostream>

using namespace std;

int main()
{
  int hora;
  cout << "ingrese la hora" << endl;
  cin >> hora;

  if (hora >= 0 && hora < 12)
  {
    cout << "Buenos dias" << endl;
  }
  else if (hora >= 12 && hora < 20)
  {
    cout << "BUenas tardes" << endl;
  }
  else if (hora >= 20 && hora <= 23)
  {
    cout << "Buenas noches" << endl;
  }
  else
  {
    cout << "hora no valida";
  }

  return 0;
}