#include <iostream>
using namespace std;
// this program uses a function to set two user-entered integers equal to 0

// function that sets both call-by-reference parameters equal to 0
void zeroBoth(int& integer1, int& integer2) {
  integer1 = 0;
  integer2 = 0;
}

int main() {
  // defines integer variables for user input
  int userInt1;
  int userInt2;
  // displays prompt for input
  cout << "Enter two integers:" << endl;
  // reads two integers from user input
  cin >> userInt1;
  cin >> userInt2;
  // calls the zeroBoth() function to change the two integers into 0
  zeroBoth(userInt1, userInt2);
  // prints the new integer values
  cout << "New integers values: " << userInt1 << " and " << userInt2 << endl;
  return 0;
}
