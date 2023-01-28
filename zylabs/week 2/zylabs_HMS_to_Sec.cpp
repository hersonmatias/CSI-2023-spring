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
