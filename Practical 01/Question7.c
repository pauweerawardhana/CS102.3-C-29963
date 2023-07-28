#include <stdio.h>
int main ()
{
   double no1, no2;

   printf ("Enter First Number: ", no1) ;
   scanf ("%lf", &no1) ;
   printf ("Enter Second Number: ", no2) ;
   scanf ("%lf", &no2) ;

   no1 = no1 - no2 ;
   no2 = no1 + no2 ;
   no1 = no2 - no1 ;

   printf ("After swapping, First Number = %.2lf\n", no1) ;
   printf ("After swapping, Second Number = %.2lf", no2) ;
}
