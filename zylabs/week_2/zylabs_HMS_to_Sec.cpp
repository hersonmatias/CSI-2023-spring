/*Write a program that reads in hours, minutes and seconds as input, and outputs the time in seconds only.

Ex: If the input is:

1 6 40

where 1 is the number of hours, 6 is the number of minutes, and 40 is the number of seconds, the output is:

Seconds: 4000

*/
#include <iostream>
using namespace std;

int main() {
   int seconds;
   int minutes;
   int hours;
   
   cin >> hours;
   cin >> minutes;
   cin >> seconds;
   
   seconds = ((hours*60)*60) + (minutes*60) + seconds;
   
   cout << "Seconds: " << seconds << endl;

   return 0;
}
