// Write a program that will do the following
    // 1. Greet the user, they have a new bank account

    // 2. Ask the user how much money they would like to deposit
        // Update the balance

    // 3. Ask the user how much money they would like to withdraw
        // Update the balance
    
    // Say goodbye

#include <iostream>
using namespace std;
int main() {
    float balance;
    float dpstAmt;
    float wdrwAmt;

    // greeting
    cout << "Welcome to your new bank account" << endl;

    // deposit
    cout << "How much money would you like to deposit: " << endl;

    cin >> dpstAmt;

    balance = balance + dpstAmt;

    cout << "Your new balance is: " << balance << endl;
    // withdraw

    cout  << "How much money would like to withdraw :" << endl;

    cin >> wdrwAmt;

    if (balance < wdrwAmt) {
          cout << "You do not have enough balance to withdraw this amount" << endl;
        }
        else {
            balance = balance - wdrwAmt;

            cout << "Your new balance is: " << balance << endl;
        }
    
    cout << "goodbye" << endl;

}
