#include <iostream>
#include <string>
using namespace std;

int main() {
  int j = 100;

  // Count down from 100 in steps of 3.
  while (j <= 100 && j >= 0) {
    cout << j << endl;
    j = j - 3;
  }
  return 0;
}
