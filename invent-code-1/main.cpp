#include <iostream>
#include <string>
using namespace std;

void GetFactorial(int z) {
  int x = z;
  int answer = z;
  while (x >= 2) {
    x--;
    answer = answer * x;  
  }
  cout << answer; 
  if (z == 0) {
    cout << "The factorial of 0 is 1.";
  }
}

int main() {
  int input = 0;
  cout << "What is your input?";
  cin >> input;
  GetFactorial(input);
  return 0;
}
