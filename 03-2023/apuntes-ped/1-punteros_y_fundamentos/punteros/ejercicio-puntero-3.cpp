#include <iostream>

using namespace std;

int main()
{
  int n = 35;
  int *p = &n;

  cout << "*p = " << *p << endl;

  return 0;
}