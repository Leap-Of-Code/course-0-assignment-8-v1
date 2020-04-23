#include <iostream>
#include <string>
using namespace std;

/* Asks user for number input
 * Returns:
 *   integer: user_input_1, the number the user inputs
 */
int UserInput() {
  std::cout << "Enter a number: ";
  int user_input_1;
  std::cin >> user_input_1;
  return user_input_1;  
}

/* Asks user for operator
 * Returns:
 *   char: user_input_operator, the operator that the user enters
 */
char OperatorsInput() {
  std::cout << "Enter operator (+ - * / %):" << std:: endl;
  char user_input_operator;
  std::cin >> user_input_operator;
  return user_input_operator;
}

/* Depending on the operator the user entered, it outputs the solution to the equation
 * Args:
 *   char input_operator: operator that user input
 *   int user_inputted: user input from main
 *   int user_inputted_2: new user input
 * Returns:
 *   integer: answer, output of the equation
 */
int AnswerOfOperatorEntered(char input_operator, int user_inputted, int user_inputted_2) {
  //takes the operator, user input from main function, and user input from call_equation to come up with the total
  int answer = 0;
  if (input_operator == '+') {
    answer = user_inputted + user_inputted_2;
  } else if (input_operator == '-') {
    answer = user_inputted - user_inputted_2; 
  } else if (input_operator == '*') {
    answer = user_inputted * user_inputted_2; 
  } else if (input_operator == '/') {
    answer = user_inputted / user_inputted_2; 
  } else if (input_operator == '%') {
    answer = user_inputted % user_inputted_2; 
  } 
  return answer;
}

/* Asks user for operator, input, and executes the equation. These are repetitive steps so we call this function 4 times.
 * Args:
 *   user_input_from_main: user input from main 
 *   user_input_operator: operator that user input
 *   new_user_input: new user input
 * Returns:
 *   integer: answer, output of the equation
 */
int CallingOtherFunctions(int user_input_from_main, char user_input_operator){
  int answer = 0;
  if (user_input_operator == '=') {
    return user_input_from_main;
  } 
  else {
    int new_user_input =  UserInput();
    // I don't know how to bring the [VALUE OF] user_input_1 from the main function.
    // You can bring values from previous function to functions using arguements.
    
    //this takes the user input from of operator, user_input from the main function, and a new user_input. 
    answer = AnswerOfOperatorEntered(user_input_operator, user_input_from_main, new_user_input);
    //std :: cout << answer << std :: endl;
  }
  return answer;
}

int main() {
  std::cout << "This code is calculator. Enter = for value to be returned. " << std::endl;
  //Goes to CallingOtherFunctions in a while loop 
  int answer = UserInput(); 
  char user_input_operator = ' ';
  cout << answer << endl;
  while (!(user_input_operator == '=')) {
    user_input_operator = OperatorsInput();
    answer = CallingOtherFunctions(answer, user_input_operator);
  }
  std::cout << answer << endl;
  return 0; 
}