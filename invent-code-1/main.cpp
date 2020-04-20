#include <iostream>
#include <string>
using namespace std;

void Factorial(int input) {
  int result = input;
  int decrememnt_by_one = input - 1;
  while (decrememnt_by_one > 0) {
    result = result * decrememnt_by_one;
    decrememnt_by_one--;
  }
  cout << result << endl;
}

int main() {
  int input;
  cout << "Enter an integer: ";
  cin >> input;
  Factorial(input);

  return 0;
}
