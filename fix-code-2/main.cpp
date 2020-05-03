#include <iostream>
#include <string>
using namespace std;

bool IsValid(int z) {
  return (z < 5) && (z >= 0);
}

int main() {
  int z = 0;
  while (IsValid(z)) {
    cout << z << endl;
    z++;
  }
  return 0;
}
