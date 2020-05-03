#include <iostream>
#include <string>
using namespace std;

int GetFactorial(int z) {
  while (z > 0) {
    int answer = 0;
    answer = z * (z-1) * (z-2);
    cout << answer;
  }
  if (z == 0) {
    cout << "The factorial of 0 is 1.";
  }
  return 0;
}

int main() {
  int input = 0;
  cout << "What is your input?";
  cin >> input;
  GetFactorial(input);
  return 0;
}
