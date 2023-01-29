#include <iostream>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
  
   
   cin >> num1;
   cin >> num2;
   cin >> num3;
   
   
   if (num1 % num2 == 0) {
      cout << num1 << " is a multiple of "<< num2 << "." << endl;
   }
   if (num1 % num3 == 0) {
      cout << num1 << " is a multiple of "<< num3 << "." << endl;
   } 
   if ((num1 % (num2 * num3)) == 0) {
      cout << num1 << " is a multiple of "<< (num2 * num3) << "." << endl;
   } 
   if ((num1 % num2 != 0) && (num1 % num3 != 0) ) {
      cout << num1 << " is not a multiple of " << num2 << ", " << num3 << ", or " << (num2 * num3) << "." << endl;
   }
   
   return 0;
}
