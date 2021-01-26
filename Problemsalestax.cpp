#include <iostream>
using namespace std;
// this program uses a function addTax() which takes in the tax rate and cost before tax and returns the total cost that includes tax

// addTax() function computes and returns the total cost with sales tax
float addTax(float taxRate, float cost) {
  float totalCost = (cost * (taxRate / 100)) + cost;
  return totalCost;
}

int main() {
  // sets up variables for user input of the cost before tax and tax rate
  float userCost;
  float userTaxRate;
  // gets input from user for addTax() function arguments
  cout << "Enter the cost: " << endl;
  cin >> userCost;
  cout << "Enter the tax rate as a percent: " << endl;
  cin >> userTaxRate;
  // calls the addTax() function with the user's arguments
  cout << "The total cost is $" << addTax(userTaxRate, userCost) << "." << endl;
  return 0;
}
