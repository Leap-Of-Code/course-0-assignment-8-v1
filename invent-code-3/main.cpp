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
//  bool function_is_valid = false;
//  while (!function_is_valid) {
    cout << "Enter a math function. It must be one of the following: (+, -, *, /, %, =): ";
    cin >> function;
//    if (function == '+' || function == '-' || function == '*' || function == '/' || function == '%') {
//      function_is_valid = true;
//    } 
//  }
  return function;
}

int GetInputNum() {
  int value;
  cout << "How many number inputs do you need?";
  cin >> value;
  return value;
}

int RunningTotal(int first_number, char math_operator, int second_number) {
 int running_total;
 if (math_operator == '+') {
    running_total = first_number + second_number;
  }
  if (math_operator == '%') {
    running_total = first_number % second_number;
  }
  if (math_operator == '-') {
    running_total = first_number - second_number;
  }
  if (math_operator == '/') {
    running_total = first_number / second_number;
  }
  if (math_operator == '*') {
    running_total = first_number * second_number;
  }
  return running_total;
}


int main() {
  int input_value = GetInputNum();
  if (input_value < 0) {
    cout << endl;
  } else {
    int first_number = GetInteger();
    int running_total = first_number;
    while (input_value > 1) {
      char math_operator = GetMathFunction();
      if (math_operator != '=') {
        int second_number = GetInteger();
        running_total = RunningTotal(running_total, math_operator, second_number);
        cout << " = " << running_total << endl;
        input_value--;
      } else {
          cout << running_total << endl;
          input_value = 0;
      }
    }
  }

  return 0;
}
