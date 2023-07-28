#include<stdio.h>
int main()
{
        char uppercase[] = "ABC", lowercase[] = "abc", digits[] = "012", specials [] = "$*+/ ";

    printf("Uppercase letters:\n");
    for (int i = 0; i < 3; i++)
      {
        printf("%c: %d\n", uppercase[i], uppercase[i]);
      }

    printf("\n Lowercase letters:\n");
    for (int i = 0; i < 3; i++)
       {
        printf("%c: %d\n", lowercase[i], lowercase[i]);
       }

    printf("\nDigits:\n");
    for (int i = 0; i < 3; i++)
     {
        printf("%c: %d\n", digits[i], digits[i]);
    }

    printf("\nSpecial symbols:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c: %d\n", specials[i], specials[i]);
    }

}
