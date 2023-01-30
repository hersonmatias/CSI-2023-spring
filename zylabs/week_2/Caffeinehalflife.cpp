/*
2.14 LAB: Caffeine levels

A half-life is the amount of time it takes for a substance or entity to fall to half its original value. Caffeine has a half-life of about 6 hours in humans. Given caffeine amount (in mg) as input, output the caffeine level after 6, 12, and 24 hours.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

100

the output is:

After 6 hours: 50.00 mg
After 12 hours: 25.00 mg
After 24 hours: 6.25 mg

Note: A cup of coffee has about 100 mg. A soda has about 40 mg. An "energy" drink (a misnomer) has between 100 mg and 200 mg.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double caffeineMg;  // "double" supports floating-point like 75.5, versus int for integers like 75.
   double caffeine6;
   double caffeine12;
   double caffeine24;
   
   cin >> caffeineMg;
   
   caffeine6 = caffeineMg / 2;
   caffeine12 = caffeine6 / 2;
   caffeine24 = caffeine12 / 4;
   
   cout << fixed << setprecision(2);
   
   cout << "After 6 hours: " << caffeine6 << " mg" << endl;
   cout << "After 12 hours: " << caffeine12 << " mg" << endl;
   cout << "After 24 hours: " << caffeine24 << " mg" << endl;

   return 0;
}
