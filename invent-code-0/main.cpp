#include <iostream>
#include <string>
using namespace std;

void AllIntegersDivisions(int input) {
  for (int i = 1; i <= input; i++) {
    cout << (input/i) << ", ";
  }
}

int main() {
  unsigned int input;
  cout << "Enter an integer: ";
  cin >> input;
  AllIntegersDivisions(input);
  return 0;
}
