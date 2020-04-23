#include <iostream>
#include <string>
using namespace std;

void SpaceCalculation(int row) {
  int counter = 0;
  while (counter < row) {
    cout << ' ';
    counter++;
  }
}

void Triangle(int input) {
  int row = 0;
  int starting = 0;

  if (input % 2 == 1 || input % 2 == 0) {
    // First while loop is # of rows
    while (input >= 0) {
      while (input > starting) {
        cout << '#';
        starting++;
      }
      input = input - 2;
      cout << endl;
      row++;
      SpaceCalculation(row);
      starting = 0;
    }
  } 
}



int main() {
 int input;
  cout << "Enter an input: ";
  cin >> input;
  Triangle(input);
  return 0;
}
