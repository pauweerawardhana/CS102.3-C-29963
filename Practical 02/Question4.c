#include <stdio.h>
int main ()
{

float  cels,  fahren;

printf ("Enter temperature in Fahrenheit: ", fahren) ;
scanf (" %f ", &fahren);

cels = ( fahren - 32 ) * 5 / 9 ;

printf (" \n ") ;
printf ("Celsius: %.2f ", cels) ;

}
