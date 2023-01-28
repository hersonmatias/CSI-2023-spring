/*
2.12 LAB: Expression for calories burned during workout

The following equation estimates the average calories burned for a person when exercising, which is based on a scientific journal article (source):

Calories = ( (Age x 0.2757) + (Weight x 0.03295) + (Heart Rate x 1.0781) — 75.4991 ) x Time / 8.368

Write a program using inputs age (years), weight (pounds), heart rate (beats per minute), and time (minutes), respectively. Output the average calories burned for a person.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

49 155 148 60

the output is:

Calories: 736.21 calories

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int Age;
   int Weight;
   int HeartRate;
   int Time;
   float Calories;
   
   cin >> Age;
   cin >> Weight;
   cin >> HeartRate;
   cin >> Time;
   
   Calories = ((Age * 0.2757) + (Weight * 0.03295) + (HeartRate * 1.0781) - 75.4991 ) * Time / 8.368;
   
   cout << fixed << setprecision(2);
   
   cout << "Calories: " << Calories << " calories" << endl;

   return 0;
}
