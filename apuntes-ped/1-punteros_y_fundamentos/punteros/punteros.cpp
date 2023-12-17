#include <iostream>

using namespace std;

int main()
{
  // Variable
  int a = 15;
  int b = 0;

  int *ptr, *ptr2;

  ptr = &a;
  ptr2 = nullptr;

  *ptr = 20;

  cout << *ptr << " - " << ptr << " - " << ptr2 << endl;

  return 0;
}