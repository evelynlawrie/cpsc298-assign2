#include <iostream>
using namespace std;
// this program reads feet and inches measurements from the user and outputs the calculations to meters and centimeters
// using input, calculation, and output functions and allows the user to repeat calculations with a while loop

// function prototypes for functions defined below main method
string userInput(string prompt);
float metersConversion(float feet, float inches);
float centimetersConversion(float feet, float inches);
void consoleOutput(string strToOut);

int main() {
  // defines variables for user input and calculations
  string userFeet;
  string userInches;
  float newUserFeet;
  float newUserInches;
  float userMeters;
  float userCentimeters;
  string meterOutput;
  string centimeterOutput;
  // loop allows the user to continue inputting feet and inches for metric calculations until they type "exit"
  while (true) {
    // calls function consoleOutput() to display user's option for quitting
    consoleOutput("Enter 'exit' to quit.");
    // calls function userInput() to read feet measurement from the user
    userFeet = userInput("Enter number of feet:");
    // checks if the user entered "exit"
    if (userFeet == "exit") {
      break;
    }
    // calls function userInput() to read inches measurement from the user
    userInches = userInput("Enter number of inches:");
    // checks again if the user entered "exit"
    if (userInches == "exit") {
      break;
    }
    // changes the user-entered feet and inches variables from strings to floats for calculations
    newUserFeet = stof(userFeet);
    newUserInches = stof(userInches);
    // calls function metersConversion() to convert feet and inches to meters
    userMeters = metersConversion(newUserFeet, newUserInches);
    // calls function centimetersConversion() to convert feet and inches to centimeters
    userCentimeters = centimetersConversion(newUserFeet, newUserInches);
    // creates strings for outputting the conversions to meters and centimeters
    meterOutput = userFeet + " feet and " + userInches + " inches is " + to_string(userMeters) + " meters.";
    centimeterOutput = userFeet + " feet and " + userInches + " inches is " + to_string(userCentimeters) + " centimeters.";
    // calls function consoleOutput() to output the conversion strings to the screen
    consoleOutput(meterOutput);
    consoleOutput(centimeterOutput);
  }
  return 0;
}

// function that prompts the user for input, reads the input from the user, and stores it in a variable
string userInput(string prompt) {
  string userInput;
  cout << prompt << endl;
  cin >> userInput;
  // returns the user input variable
  return userInput;
}

// function that converts feet and inches to meters
float metersConversion(float feet, float inches) {
  // changes inches and feet to total feet
  float totalFeet = (inches / 12.0) + feet;
  // initializes variable for meters
  float meters;
  // calculates meters using the conversion rate from feet to meters
  meters = totalFeet * 0.3048;
  // returns the calculated meters variable
  return meters;
}

// function that converts feet and inches to centimeters
float centimetersConversion(float feet, float inches) {
  // initializes variables for meters and centimeters
  float centimeters;
  float meters;
  // calls function metersConversion() to get the conversion from feet and inches to meters
  meters = metersConversion(feet, inches);
  // calculates centimeters using conversion rate from meters to centimeters
  centimeters = meters * 100;
  // returns the calculated centimeters variable
  return centimeters;
}

// function that outputs any string parameter to the screen
void consoleOutput(string strToOut) {
  cout << strToOut << endl;
}
