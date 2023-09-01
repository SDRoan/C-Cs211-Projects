#include <iostream>
using namespace std;
int main() {
   for (int i = 1; i <= 99; i++) { 
      int square = i * i;
      if (square % 2 != 0 && (square / 10) % 2 != 0) {
         cout << square;
         return 0; 
      }
   }
   
   cout << "There are no perfect square exists whose whose last two digits are both odd.";
   
   return 0;
}