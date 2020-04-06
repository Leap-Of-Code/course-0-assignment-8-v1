#include <iostream>
#include <string>
using namespace std;

int GetInteger() {
  int input;
  cout << "Enter a integer: ";
  cin >> input;
  return input;
}

char GetMathFunction() {
  char function;
  bool function_is_valid = false;
  while (!function_is_valid) {
    cout << "Enter a math function. It must be one of the following: (+, -, *, /, %, =): "
    cin >> function;
    if (fuction == '+' || fuction == '-' || fuction == '*' || fuction == '/') {
      function_is_valid = true;
    }
  }
  return function;
}

int main() {
  return 0;
}
