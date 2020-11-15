#include <iostream>
#include <string>
using namespace std;

int GetInputNumber() {
  int number;
  cout << "Enter Number: ";
  cin >> number;
  return number;
}
char GetInputOperator() {
  char operation;
  cout << "Enter Operator: ";
  cin >> operation;
  return operation;
}
void FunctionCalculator() {
  int first_number = GetInputNumber();
  char operation = GetInputOperator();
  int second_number = GetInputNumber();
  int running_total = 0;
  if (operation == '+') {
    running_total = first_number + second_number;
  }
  else if (operation == '%') {
    running_total = first_number % second_number;
  }
  else if (operation == '*') {
    running_total = first_number * second_number;
  }
  else if (operation == '/') {
    running_total = first_number / second_number;
  }
  else {
    running_total = first_number - second_number;
  }
  cout << first_number << " " << operation << " " << second_number << " = " << running_total << endl;

}

int main() {
  int calculations;
  cout << "How many calculations would you like to do? ";
  cin >> calculations;
  for (int i = 0; i < calculations; i++) {
    FunctionCalculator();
  }
}
