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
  int print_space = 0;
  while (user_input > 0) {
    int print_hash = user_input;
    int print_space1 = print_space;
    while (print_hash > 0) {
      while (print_space1 > 0) {
        cout << " ";
        print_space1--;
      }
      cout << "#";
      print_hash--;
    }
    cout << endl;
    user_input = user_input - 2;
    print_space++;
  }
}


void NumericalPyramid(int user_input) {
  int print_space = 0;
  int originl_value = user_input / 2;
  bool is_odd = (user_input % 2 != 0);

  while (user_input > 0) {
    int first_value = user_input / 2;
    int print_hash = first_value;
    int print_space1 = print_space;
    while (print_hash > 0) {
      while (print_space1 > 0) {
        cout << " ";
        print_space1--;
      }
      cout << print_hash;
      print_hash--;
      
      if (print_hash == 0) {
        int print_hash1 = print_hash;
        while (print_hash1 >= 0 && print_hash1 <= first_value) {
          cout << print_hash1;
          print_hash1++;
        }
      }
    }
    cout << endl;
    user_input = user_input - 2;
    print_space++;
    
    if (user_input == 1 && is_odd) {
      print_space = originl_value;
      while (print_space > 0) {
        cout << " ";
        print_space--;
      }
      cout << "0";
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

  user_input = UserInput();
  cout << "Print out special numerical block pyramid." << endl;
  NumericalPyramid(user_input);   
  
  return 0;
}
