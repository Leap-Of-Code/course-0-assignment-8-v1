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
  int counter_half = input/2;
  int baseline_counter_half = counter_half;

  // variables for even
  int even_counter_half = input/2;
  int even_baseline_counter_half = even_counter_half;

  if (input % 2 == 1 || input % 2 == 0) {
    while (input >= 0) {
      // Create 4 while loops to create the #s in inverted triangle
      // While loop for odd numbers decrement
      while (counter_half >= 0 && input % 2 == 1) {
        cout << counter_half;
        counter_half--;
      }
      // While loop for odd #s increment
      counter_half = 1;
      while (counter_half <= baseline_counter_half && input % 2 == 1) {
        cout << counter_half;
        counter_half++;
      }

      // While loop for even #'s decrement
      while (even_counter_half >= 1 && input % 2 == 0) {
        cout << even_counter_half;
        even_counter_half--;
      }
      //While loop for even #'s increment
      even_counter_half = 1;
      while (even_counter_half <= even_baseline_counter_half && input % 2 == 0) {
        cout << even_counter_half;
        even_counter_half++;
      }

      input = input - 2;
      cout << endl;
      row++;
      SpaceCalculation(row);
      starting = 0;
      // odd numbers line
      counter_half = counter_half - 2;
      baseline_counter_half--;
      // even numbers line 
      even_counter_half = even_counter_half - 2;
      even_baseline_counter_half--;
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
