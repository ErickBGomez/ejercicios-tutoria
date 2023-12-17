#include <iostream>
#include <cmath>

using namespace std;

class Athlete
{
public:
  string name;
  int birthYear;
  float height;
  float weight;
  int age;
  float BMI; // Body Mass Index

  // Algunos métodos son públicos y solo se declaran adentro de la clase
  int CalculateAge(int);
  float CalculateBMI(float, float);
};

// Los métodos se definen afuera de la clase
// Usamos Athlete:: para acceder a los métodos de la clase para definirlo
int Athlete::CalculateAge(int year)
{
  return 2023 - year;
}

float Athlete::CalculateBMI(float weight, float height)
{
  return weight / pow(height, 2);
}

int main()
{
  Athlete athlete1;
  athlete1.name = "Luis";
  athlete1.height = 1.66;
  athlete1.weight = 45;
  athlete1.birthYear = 2005;

  athlete1.age = athlete1.CalculateAge(athlete1.birthYear);
  athlete1.BMI = athlete1.CalculateBMI(athlete1.weight, athlete1.height);

  cout << "Name: " << athlete1.name << "\n\tHeight: " << athlete1.height << "\n\tBirth year: " << athlete1.birthYear << endl;
  cout << "\tAge: " << athlete1.age << "\n\tBody Mass Index: " << athlete1.BMI << endl;

  return 0;
}

// weight (kg) / height^2 (m)