#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int num, originalNum, remainder, n = 0, result = 0;

   cout << "Enter an integer: ";
   cin >> num;

   originalNum = num;

   // count the number of digits
   while (originalNum != 0) {
      n++;
      originalNum /= 10;
   }

   originalNum = num;

   // calculate the sum of nth power of each digit
   while (originalNum != 0) {
      remainder = originalNum % 10;
      result += pow(remainder, n);
      originalNum /= 10;
   }

   // check if the result is equal to the original number
   if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";

   return 0;
}
