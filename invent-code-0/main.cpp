#include <iostream>
#include <string>
using namespace std;

void AllIntegersDivisions(const unsigned int input) {
  // Write code here.
  const unsigned int number_divided = 1;
  int answer = input / number_divided;
  while (number_divided < input) {
    cout << answer;
  }
}

int main() {
  unsigned int input;
  cout << "Enter an integer: ";
  cin >> input;
  AllIntegersDivisions(input);

  return 0;
}
