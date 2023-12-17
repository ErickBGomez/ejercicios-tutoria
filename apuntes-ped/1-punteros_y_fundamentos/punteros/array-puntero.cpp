#include <iostream>

using namespace std;

int main()
{
  int vector[5] = {4, 5, 8, 1, 9};
  int *ptr = vector;

  // cout << vector[2] << endl;
  // cout << vector << endl;

  // cout << *(vector + 1) << endl;

  for (int i = 0; i < 5; i++)
  {
    cout << *(vector + i) << " " << (vector + i) << endl;
  }

  cout << "\n";

  for (int i = 0; i < 5; i++)
  {
    cout << *(ptr + i) << " " << (ptr + i) << endl;
  }

  return 0;
}