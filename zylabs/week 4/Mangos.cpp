#include <iostream>
using namespace std;

int main() {
   int numMangos;
   int cash;

   cin >> numMangos;
   cin >> cash;
   
   if (numMangos < 4) {
         cout << "Not enough mangos." << endl;
   }
   if (numMangos >= 4) {
         numMangos = (numMangos * 2);
         if (numMangos <= cash) {
            cout << "Mangos successfully purchased." << endl;
         }
            else {
               cout << "Need more money to purchase all." << endl;
            }
   
   }
   return 0;
}