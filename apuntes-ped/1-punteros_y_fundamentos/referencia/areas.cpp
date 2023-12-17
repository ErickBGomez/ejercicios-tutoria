#include <iostream>

using namespace std;

void Area(float b, float h, float &areaT, float &areaR);

int main()
{
  int figureInput;
  float base, height;
  float triangleArea, rectangleArea;

  cout << "Ingrese la figura:\n[0] Triángulo\n[1] Rectángulo\n> ";
  cin >> figureInput;

  cout << "Base: ";
  cin >> base;
  cout << "Altura: ";
  cin >> height;

  Area(base, height, triangleArea, rectangleArea);

  (figureInput == 0) ? cout << "Area triángulo: " << triangleArea << endl : cout << "Area rectángulo: " << rectangleArea << endl;
}

void Area(float b, float h, float &areaT, float &areaR)
{
  areaT = (b * h) / 2;
  areaR = b * h;
}
