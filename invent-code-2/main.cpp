#include <iostream>
#include <string>
using namespace std;

int PrintTriangle (int input) {;
  int value = input / 2;
  int number_pound = 1;
  

  while (number_pound < input && value >= 0) {
    cout << value;
    if (input % 2 != 0 && value == 0) {
      break;
    }
    else if (value == 1 ) {
    break;
    }
    value = value - 1;
    number_pound++;
  }

  while ( number_pound <= input) {
    if (value == input / 2) {
    break;
    }
    if (input % 2 == 0 && value == 1) {
      cout << "1";
      number_pound++;
    }
  value = value + 1;
  cout << value;
  number_pound++;
  }

  string length_of_space;
  string text = to_string(value);
  int length_of_line1 = text.length();
  while (length_of_line1 > 1) {
  length_of_line1--;
  length_of_space = length_of_space + " ";
  text.erase (text.begin() + 1);
  text.erase (text.end() - 1);
  //value.pop_back();
  cout << length_of_space << text << endl;
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