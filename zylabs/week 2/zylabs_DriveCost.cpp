#include <iostream>
#include <iomanip>      //For setprecision
using namespace std;

int main() {

   float mileage;
   float gasCost;
   float gas20;
   float gas75;
   float gas500;
   cin >> mileage;
   cin >> gasCost;
   
   gas20 = (20/mileage)*gasCost;
   gas75 = (75/mileage)*gasCost;
   gas500 = (500/mileage)*gasCost;
   
   cout << fixed << setprecision(2);   // All later cout's will print floating-point values to exactly 2 decimal places.
                                       // Ex: 3.60
   // Type your cout code here
   cout << gas20 << " " << gas75 << " " << gas500 << endl;
   return 0;
}
