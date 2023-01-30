// 1. Write a c++ program that has no instructions
//2. Enable the use of input and output tools
//3. declare 3 objects;
    // an integer 
    // a message
    // another message
#include <iostream>
using namespace std;

int main() {
    int thisIsTheNumber;
    const double CONSTANTVALUE = 9.8;
    string msg, anotherMsg, yetAnotherMsg, msg3;

    // the Assignment operator is =

    thisIsTheNumber = 15;
     
   //Store the message "hello" in msg
   //Store the message "goodbye" in anotherMsg
   //Assign the message stored in anotherMsg to msg
   //Print another Msg and msg

    msg = "hello";
    anotherMsg = "goodbye";
   // msg = anotherMsg;
    
   /* Your Solution*/
    msg3 = anotherMsg; // copies goodbye into third box
    anotherMsg = msg; // put hello into goodbyes's box
    msg = anotherMsg; // put goodby into hello's box

   
    cout << "After assignments:  \n" << msg << endl;
    cout << anotherMsg << endl;


    thisIsTheNumber;
    CONSTANTVALUE;

     // changing a number value
    // Assign thisIsTheNumber with a value that is 1 greater than before
    thisIsTheNumber = thisIsTheNumber + 1;
}