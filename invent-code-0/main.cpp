#include <iostream>
#include <string>
using namespace std;

void AllIntegersDivisions(unsigned int input) {
  // Write code here.
  unsigned int number_divided = 1;
  unsigned int answer = 0;
  while (number_divided < input && answer <= input) {
    answer = input / number_divided;
    cout << answer << ",";
    number_divided++;
  }
}

int main() {
  unsigned int input;
  cout << "Enter an integer: ";
  cin >> input;
  AllIntegersDivisions(input);

  return 0;
}
