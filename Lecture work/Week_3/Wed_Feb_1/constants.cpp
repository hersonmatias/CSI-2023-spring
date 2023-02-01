//Write a program that has the following

// a string message
// a true/false value
// a whole number

#include <iostream>
#include <iomanip> // access to setprecision
using namespace std;

int main(){

    // declare objects
    string msg;
    bool truth;
    double num = 10;
    // creates a SALES_TAX constant value
    const double SALES_TAX = 0.0825;

    // format output values to have 2 decimal places shown always
    cout << fixed << setprecision(2);
    num = 10;

    // increment number by +6

    // num = num + 6; equivalent to num += 6

    num = num*(1+SALES_TAX); 
    cout << "The total after tax is: $" << num << endl;

    /*Part 2 - Operations
    */

   // Declare two integer objects with values 100 and 5

    //Declare integers
    int num1 = 100;
    int num2 = 5;
    
    // Declare a third object to hold the value of some arithmetic
    int num3;

    // Multiply the two numbers
    num3 = num1 * num2;
    // Divide the two numbers
    num3 = num1 / num2;
    // Add the two numbers
    num3 = num1 + num2;
    // Subtract the two numbers
    num3 = num1 - num2;
    // *Find the value of the first number modulo second number
    num3 = num1 % num2;
     
    cout << num3 << endl;
}