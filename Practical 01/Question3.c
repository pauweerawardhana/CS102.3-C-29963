#include <stdio.h>
int main ()
{
int no1;
float no2;
double no3 ;
char a[20] ;

 printf ("Enter an integer number") ;
 scanf ("%d", &no1) ;
 printf ("Enter a float number") ;
 scanf ("%f", &no2) ;
 printf ("Enter a double number") ;
 scanf ("%lf", &no3) ;
 printf ("Enter a set of characters") ;
 scanf ("%s", &a) ;

  printf ("The integer number: %d \n " , no1);
  printf ("The float number: %.2f \n " , no2);
  printf ("The double number: %lf \n " , no3);
  printf ("The set of characters: %s \n " , a);
  }
