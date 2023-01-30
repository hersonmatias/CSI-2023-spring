/*Write a program that inputs an integer (0 - 9999) and outputs the number of digits.

Ex: If the input is:

7493

the output is:

4 digits

Ex: If the input is:

7

the output is:

1 digit

*/
#include <iostream>
using namespace std;

int main() {
   int num;
   cin >> num;
   if ((num >= 0) && (num < 10)) {
      cout << "1 digit" << endl;
   }
   if ((num >= 10) && (num < 100)) {
      cout << "2 digits" << endl;
   }
   if ((num >= 100) && (num < 1000)) {
      cout << "3 digits" << endl;
   }
   if ((num >= 1000) && (num < 9999)) {
      cout << "4 digits" << endl;
   }
   
   
   return 0;
}