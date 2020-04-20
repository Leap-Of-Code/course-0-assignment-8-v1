#include <iostream>
#include <string>
using namespace std;

void AllIntegersDivisions(const int input) {
  int starting_num = input - 1;
  int counter = 0;
  int print_out;
  while (counter < input) {
    print_out = input / starting_num;
    cout << print_out << endl;
    counter++;
    starting_num--;
  }
}

int main() {
  unsigned int input;
  cout << "Enter an integer: ";
  cin >> input;
  AllIntegersDivisions(input);

  return 0;
}
