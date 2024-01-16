#include <iostream>

using namespace std;

int main()
{

  int n = 35;
  int *p = &n;
  int &r = *p;

  cout << "r = " << r << endl;

  return 0;
}