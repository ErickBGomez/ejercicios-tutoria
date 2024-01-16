#include <iostream>

using namespace std;

int main() {

  int n = 33;
  int &r = n;

  cout << "&n = " << &n << ", &r= " << &r << endl;

  return 0;
}