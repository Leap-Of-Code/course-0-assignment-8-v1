#include <iostream>
#include <string>
using namespace std;

int main() {
  int year = 2020

  // Prints out all the leap years between 2020 to 2050, inclusively.
  while (year < 2030) {
    cout << "Year: " << year;
    year--;
  }
  return 0;
}
