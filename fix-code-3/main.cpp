#include <iostream>
#include <string>
using namespace std;

int main() {
  int year = 2048;

  // Prints out all the leap years between 2020 to 2050, inclusively.
  while (year >= 2020) {
    cout << "Year: " << year << endl;
    year -= 4;
  }
  return 0;
}
