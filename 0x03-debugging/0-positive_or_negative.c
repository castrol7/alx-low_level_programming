#include <stdlib.h>
  2 #include <time.h>
  3 #include <stdio.h>
  4 /**
  5  * main -entry point
  6  * Return: 0 (Success)
  7  */
  8 int main(void)
  9 {
 10         int n;
 11 
 12         srand(time(0));
 13         n = rand() - RAND_MAX / 2;
 14         if (n > 0)
 15         {
 16         printf("%i is positive\n", n);
 17         }
 18         else if (n == 0)
 19         {
 20         printf("%i is zero\n", n);
 21         }
 22         else
 23         {
 24         printf("%i is negative\n", n);
 25         }
 26         return (0);
 27 }
