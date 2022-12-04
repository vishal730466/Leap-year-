#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
  
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   
   else if (year % 100 != 0 && year % 4 ==0) {
      printf("%d is a leap year.", year);
   }
//leap year if not divisible by 100
   // but divisible by 4
 
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}