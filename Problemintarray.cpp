#include <iostream>
using namespace std;
// this program takes in positive numbers from the user, puts them into an array, and prints them out to the console

int main() {
  // initializes array, variable for user input, and variable to count the amount of numbers in the array
  int numberArray[10];
  int userInt;
  int counter;
  // prompts the user for input
  cout << "Enter a nonnegative integer:" << endl;
  // reads up to 10 nonnegative integers into an array
  for (int i = 0; i < 10; ++i) {
    cin >> userInt;
    // stops the loop if the user enters a negative number
    if (userInt < 0) {
      break;
    }
    else {
      // adds the input into the array
      numberArray[i] = userInt;
      // increases the variable that stores the amount of numbers in the array
      ++counter;
    }
  }
  // prints all user-entered integers back to the screen
  for (int j = 0; j < counter; ++j) {
    cout << "Integer at ";
    cout << j;
    cout << " is ";
    cout << numberArray[j];
    cout << endl;
  }
  return 0;
}
