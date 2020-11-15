#include <iostream>
#include <string>
using namespace std;

void TriangleMaker () {
  int input;
  int x;
  cout << "Input for Side: ";
  cin >> input;
  for (int i = input; i >= 0; i--) {
    x = 0;
    int a = i;
    while (0 <= a) {
      cout << "#";
      a--;
    }
    cout << endl;
  }

}

int main() {
  TriangleMaker();
  return 0;
}
