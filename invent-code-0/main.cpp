#include <iostream>
#include <string>
using namespace std;

void AllIntegersDivisions(unsigned int input) {
  // Write code here.
  unsigned int divide_num = 1;
  while (divide_num < input && input!= 0) {
    int print_num = input / divide_num;
    cout << print_num << endl;
    divide_num++;
  }
}

int main() {
  unsigned int input;
  cout << "Enter an integer: ";
  cin >> input;
  AllIntegersDivisions(input);

  return 0;
}
