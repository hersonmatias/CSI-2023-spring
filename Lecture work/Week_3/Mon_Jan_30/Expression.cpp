/* Warm up (IO)
    Ask the user for their name
    Print out a greeting to the user by name

Setup : Declare a string variable to hold a name
    1. Prompt for name (cout)
    2. Use "cin" to take input from user and store in an object
    3. Print greeting with the name (no hard-coding)
*/
#include <iostream>
using namespace std;
int main() {
    /*
    string name;

    cout << "What is your name" << endl;

    cin >> name;

    cout << "Hello, " << name << "!" << endl;

    */
// Variables and Expressions
   
    // Declare
     float myNum; 
     double alsoNum;

    // Initialize
     myNum = 3.14;

    // Access
     //cout << myNum / 3 << endl;

        // Access alsoNum and *assign* it with the value of myNum
        alsoNum = myNum;

    // Update (Assign)
        // Ex1 - Assign myNum with 10 more than itself
        myNum = myNum + 10;

        cout << "myNum: " << myNum << endl;
        cout << "alsoNum: " << alsoNum << endl;

        // Ex2 - Assign myNum with double the value of alsoNum - 7
        myNum = 2 * (alsoNum - 7);
        
        cout << "myNum: " << myNum << endl;

     
}   

