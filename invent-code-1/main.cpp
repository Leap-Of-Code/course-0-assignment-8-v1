#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
  int number; 
  cout << "Number for Factorial: ";
  cin >> number; 
  return number;
}
int Factorial(int number) {
  int temp = number;

  for (int i = 0; i <= number - 1; i++) {
    temp *= number - 1;
    number = number - 1; 
  }
  
  return temp;
}

int main() {
  int number = GetUserInput();
  int factorial = Factorial(number);

  cout << "The factorial of " << number << " is " << factorial << endl;

  return 0;
}
