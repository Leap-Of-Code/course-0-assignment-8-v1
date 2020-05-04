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
    cout << "Enter a math function. It must be one of the following: (+, -, *, /, %, =): ";
    cin >> function;
    if (function == '+' || function == '-' || function == '*' || function == '/') {
      function_is_valid = true;
    }
  }
  return function;
}
int GetCurrentTotal(int first_number_input, char function, int second_number_input) {
  int current_total = 0;
  while (function != '=')
    if (function == '+') {
    current_total = first_number_input + second_number_input;
    }
    if (function == '%') {
    current_total = first_number_input % second_number_input;
    }
    if (function == '*') {
    current_total = first_number_input * second_number_input;
    }
    if (function == '/') {
    current_total = first_number_input / second_number_input;
    }
    if (function == '-') {
    current_total = first_number_input - second_number_input;
    }
  return current_total;
}

int main() {
  int first_number = GetInteger();
  char function = GetMathFunction();
  int second_number = GetInteger();
  int current_total = GetCurrentTotal(first_number, function, second_number);
  cout << "Your current total is " << current_total << endl;
  return 0;
}
