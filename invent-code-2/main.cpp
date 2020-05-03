#include <iostream>
#include <string>
using namespace std;

int PrintTriangle (int input) {;
  string pound = "#";
  string pound_2;
  int number_pound = 1;

  while (number_pound < input) {
    pound = pound + "#";
    number_pound++;
  }
  cout << pound << endl;
  string length_of_space;

  int length_of_line1 = pound.length();
  while (length_of_line1 > 1) {
  length_of_line1--;
  length_of_space = length_of_space + " ";
  pound.erase (pound.begin() + 1);
  pound.erase (pound.end() - 1);
  //pound.pop_back();
  cout << length_of_space << pound << endl;
  }
  return 0;
}

int main() {
  int input = 0;
  cout << "What is your input?";
  cin >> input;
  PrintTriangle(input);
  return 0;
}
