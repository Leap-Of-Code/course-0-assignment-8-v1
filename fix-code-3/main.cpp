#include <iostream>
#include <string>
using namespace std;

int main() {
  int year = 2020;

  // Prints out all the leap years between 2020 to 2050, inclusively.
  // Source: https://www.wikihow.com/Calculate-Leap-Years
  while (((year <= 2050) && (year % 4 == 0) && (year % 100 != 0)) || ((year <= 2050) && (year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0))) {
    cout << "Year: " << year << endl;
    year++;
  }
  return 0;
}



