/*Using Heron's formula, you can calculate the area of a triangle if you know the lengths of all three sides. Given the length of each side of a triangle as input, calculate the area of the triangle using Heron's formula as follows:

    s = half of the triangle's perimeter
    area = the square root of s(s-a)(s-b)(s-c), where a, b, and c are each sides of the triangle.

Use the math function sqrt() for calculating the square root.

Output each floating-point value with three digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(3); once before all other cout statements.

Ex: If the input for a, b, and c is:

3.0 4.0 5.0

the output is:

The area of the triangle is: 6.000
*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
   
   double a;
   double b;
   double c;
   double s;
   double area;
   
   cin >> a;
   cin >> b;
   cin >> c;
   
   cout << fixed << setprecision(3);
   
   s = (a+b+c)/2;
   area = sqrt(s*(s-a)*(s-b)*(s-c));
   cout << "The area of the triangle is: " << area << endl; 

   return 0;
}
