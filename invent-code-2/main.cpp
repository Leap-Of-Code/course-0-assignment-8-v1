#include <iostream>
#include <string>
using namespace std;

int PrintTriangle (int input) {;
  string pound = "#";
  string pound_2;
  int number_pound = 1;

  while (number_pound < input) {
    pound = pound + "#";
    number_pound++;
    //
    // 
  }
  cout << pound << endl;
  
  int length_of_line1 = pound.length();
  while (length_of_line1 > 1) {
  length_of_line1--;
  pound_2 = pound;
  pound_2.pop_back();
  cout << pound_2;
  }
  return 0;

int main() {
  int input = 0;
  cout << "What is your input?";
  cin >> input;
  PrintTriangle(input);
  return 0;
}
