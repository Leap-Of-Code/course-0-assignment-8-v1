#include <iostream>
#include <string>
using namespace std;

int GetInteger() {
  int input;
  cout << "Enter an integer: ";
  cin >> input;
  return input;
}

char GetMathFunction() {
  char function;
  bool function_is_valid = false;
  while (!function_is_valid) {
    cout << "Enter a math function. It must be one of the following: (+, -, *, /, %, =): ";
    cin >> function;
    if (function == '+' || function == '-' || function == '*' || function == '/'|| function == '%'|| function == '=') {
      function_is_valid = true;
    }
  }
  return function;
}

void GetCurrentTotal() {
    int first_number = GetInteger();
    char function = GetMathFunction();
    int second_number = GetInteger();
  int current_total = 0;
  while (function != '=') {
    if (function == '+') {
    current_total = first_number + second_number;
    }
    if (function == '%') {
    current_total = first_number % second_number;
    }
    if (function == '*') {
    current_total = first_number * second_number;
    }
    if (function == '/') {
      if (second_number == 0) {
        cout << " 0 is indivisible, please re-enter an integer:";
        second_number = GetInteger(); 
        current_total = first_number / second_number;
      }
      else {
        current_total = first_number / second_number;
      }
    }
    if (function == '-') {
    current_total = first_number - second_number;
    }
    cout << first_number << function << second_number << "=" << current_total << endl;
    first_number = current_total;
    function = GetMathFunction();
    if (function == '=') {
     break; 
    } 
    second_number = GetInteger();
  }
  cout << "Answer: " << current_total;
}

int main() {
  GetCurrentTotal();
  return 0;
}
