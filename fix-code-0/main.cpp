#include <iostream>
#include <string>
using namespace std;

void Triangle(int input) {
  //int counter = input;
  int starting = 0;

  while (input >= 0) {
    while (input > starting) {
      cout << '#';
      starting++;
    }
    input--;
    cout << endl;
    starting = 0;
  }
  
}

int main() {
 int input;
  cout << "Enter an input: ";
  cin >> input;
  Triangle(input);
  return 0;
}
