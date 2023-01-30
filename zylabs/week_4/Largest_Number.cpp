/*Write a program whose inputs are three integers, and whose output is the largest of the three integers, followed by a count of the number of times that largest integer appears.

Ex: If the input is 7 15 3, the output is:

15
1


Ex: If the input is 9 9 8, the output is:

9
2

Hint: Start by writing code that just outputs the largest integer and submit to get most of the points. Then, update your code to output both the largest integer and the count. Incremental development is a great habit to practice!
*/
#include <iostream>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int count = 1;
   
   cin >> num1;
   cin >> num2;
   cin >> num3;
   
   if ((num1 >= num2) && (num1 >= num3)) {
      cout << num1 << endl;
        if (num1 == num2) {
            count = count + 1;
            
        }
        if (num1 == num3) {
            count = count + 1;
            
        }
   }
      else if ((num2 >= num1) && (num2 >= num3)) {
         cout << num2 << endl;
            if (num2 == num1) {
               count = count + 1;
            }
            if (num2 == num3) {
               count = count + 1;
            }
      }   
      else if ((num3 >= num1) && (num3 >= num2)) {
         cout << num3 << endl;
            if (num3 == num1) {
               count = count + 1;
            }
            if (num3 == num2) {
               count = count + 1;
            }
   }
   cout << count << endl;
   
   return 0;
}