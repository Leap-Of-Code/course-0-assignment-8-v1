#include <iostream>
#include <string>
using namespace std;

bool IsValid(int y) {
  return (y < 5) && (y >= 0);
}

int main() {
  int z = 0;
  while (IsValid(z)) {
    cout << z << endl;
    z++;
  }
  return 0;
}
