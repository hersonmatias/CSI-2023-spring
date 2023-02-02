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
    num3 = num1 % num2; // Remainder of the division of num1 and num2

    // Reminder: will be on exam
    // Check if a number is even
    // Check number % 2 is zero if even
            // number % 2 is 1 if odd
    
    if (num3 % 2 == 0) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }

    // What are the possible values of any number -- (numX % 5)
    // 0, 1, 2, 3, 4, 
    // Ex: 50 % 5 = 0, 51 % 5 = 1, 52 % 5 = 2, 53 % 5 = 3, 54 % 5 = 4, 55 % 5 = 0
    
    /* 
    PART 3 - STRINGS   
    */
     
    // access by index
    string msg2 = "Coding is fun!";
    string msg3 = "The first letter of the string is: ";

    cout << msg3[7] << endl; 
    
    // String comparisons
        // equal ==, greater than >, and less than <
        // Declare two strings to hold fruits
        string fruit1 = "Apple";
        string fruit2 = "Fruitx";
    cout << (fruit1 > fruit2) << endl;
 
}