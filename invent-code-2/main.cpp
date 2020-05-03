#include <iostream>
#include <string>
using namespace std;


int UserInput(){
  int user_input;
  cout << "Enter a number: ";
  cin >> user_input;
  return user_input;
}

void Triangle(int user_input) {
  while (user_input > 0) {
    int print_hash = user_input;
    while (print_hash > 0) {
      cout << "#";
      print_hash--;
    }
    cout << endl;
    user_input--;
  }
}

void Pyramid(int user_input) {
  bool is_even = (user_input % 2 == 0);

  if (is_even) {
    while (user_input) {
      int print_hash = user_input;
      while (print_hash > 0) {
        int print_space = 0;
        int row = 1;
        while (print_space > 0 && print_space < row) {
          cout >> " ";
          print_space++;
        }
        cout << "#";
      }

    }
  }

  }
}

int main() {
  int user_input;
  user_input = UserInput();
  cout << "Print out a triangle." << endl;
  Triangle(user_input);

  user_input = UserInput();
  cout << "Print out a pyramid." << endl;
  Pyramid(user_input);


  return 0;
}
