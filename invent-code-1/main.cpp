#include <iostream>
#include <string>
using namespace std;

int FactorialFuction(int user_input) {
  int multiply_num = user_input - 1;
  int final_num = user_input;
  while (multiply_num > 0) {
    final_num = final_num * multiply_num;
    multiply_num--;
  }
  return final_num;
}


int main() {
  int user_input;
  cout << "Enter a number: ";
  cin >> user_input;

  if (user_input == 0) {
    cout << "The factorial of 0 is 1" << endl;
  } else {
    int final_num = FactorialFuction(user_input);
    cout << "The factorial of " << user_input << " is " << final_num << endl;
  }
  
  return 0;
}
