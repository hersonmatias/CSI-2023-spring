/*
3.16 LAB: Simple statistics
Part 1

Given 3 integers, output their sum, average, and product, using integer arithmetic.

Ex: If the input is 10 20 5, the output is:

35 11 1000

Note: Integer division discards the fraction. Hence the average of 10 20 5 is output as 11, not 11.6667.

Note: Remember to declare 3 integer variables

Submit the above for grading. Your program will fail the last test cases (which is expected), until you complete part 2 and 3 below.
Part 2

Also output the sum, average and product, using floating-point arithmetic.

Ex: If the input is 10 20 5, the output is:

35 11 1000
35 11.6667 1000

Note that fractions aren't discarded.
Part 3

Finally, output the distance of each number from the average, using integer arithmetic.

Ex: If the input is 10 20 5, the output is:

35 11 1000
35 11.6667 1000
1 9 6

Note: All numbers are positive and use the integer average (ex: (20 - 11) = 9 not (20 - 11.6667) = 8.3333 = 8

*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {

   int num1;
   int num2;
   int num3;
   int sum;
   int average;
   int product;
   
   cin >> num1;
   cin >> num2;
   cin >> num3;
   
   sum = (num1 + num2 + num3);
   average = sum/3;
   product = (num1 * num2 * num3);
   
   //line 1
   cout << sum << " " << average << " " << product << endl; 
   
   //line 2
   cout << static_cast<double>(num1)+static_cast<double>(num2)+static_cast<double>(num3) << " ";
   cout << ((static_cast<double>(num1)+static_cast<double>(num2)+static_cast<double>(num3))/3) << " ";
   cout << static_cast<double>(num1)*static_cast<double>(num2)*static_cast<double>(num3) << endl;
   
   //line 3
   cout << abs(num1 - average) << " " << abs(num2 - average) << " " << abs(num3 - average) << endl;

   return 0;
}
