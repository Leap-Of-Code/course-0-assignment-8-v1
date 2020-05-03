#include <iostream>
#include <string>
using namespace std;

int main() {
  int year = 2020;

  cout << "The leap years are: ";
  // Prints out all the leap years between 2020 to 2050, inclusively.
  while (year >= 2020 && year <= 2050 && year % 4 == 0) {
    cout << "Year: " << year << " ";
    year += 4;
  }
  return 0;
}
