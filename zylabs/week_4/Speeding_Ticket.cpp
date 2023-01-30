/*Write a program that is given two integers representing a speed limit and driving speed in miles per hour (mph) and outputs the traffic ticket amount.

Driving 10 mph under the speed limit (or slower) receives a $50 ticket. Driving 6 - 20 mph over the speed limit receives a $75 ticket. Driving 21 - 40 mph over the speed limit receives a $150 ticket. Driving faster than 40 mph over the speed limit receives a $300 ticket. Otherwise, no ticket is received.

Ex: If the input is:

35 45

the output is:

75

Ex: If the input is:

35 26

the output is:

0

*/
#include <iostream>
using namespace std;

int main() {
   int spdLmt;
   int drvSpd;
   int tic50;
   int tic75;
   
   cin >> spdLmt;
   cin >> drvSpd;
   
   tic50 = (spdLmt - drvSpd);
   tic75 = (drvSpd - spdLmt); 
   
   
   if ((tic75 <= -10) && (tic50 >= 0)) {
      cout << "50" << endl;
   }
      else if ((tic75 >= 6) && (tic75 <= 20)) {
         cout << "75" << endl;
      }
      else if ((tic75 >= 21) && (tic75 <= 40)) {
         cout << "150" << endl;
      }
      else if (tic75 >= 41) {
         cout << "300" << endl;
      }
      else {
         cout << 0 << endl;
      }
 
   return 0;

}

