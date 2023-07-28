#include <stdio.h>
int main()
{
   char letter;

    printf("Enter a letter: ");
    scanf(" %c", &letter);

    switch (letter) {
        case 'a': printf(" a is a vowel.\n", letter); break;
        case 'e': printf(" e is a vowel.\n", letter); break;
        case 'i': printf(" i is a vowel.\n", letter); break;
        case 'o': printf(" o is a vowel.\n", letter); break;
        case 'u': printf(" u is a vowel.\n", letter); break;
        case 'A': printf(" A is a vowel.\n", letter); break;
        case 'E': printf(" E is a vowel.\n", letter); break;
        case 'I': printf(" I is a vowel.\n", letter); break;
        case 'O': printf(" O is a vowel.\n", letter); break;
        case 'U': printf(" U is a vowel.\n", letter); break;
        default: printf("%c is not a vowel.\n", letter);
    }

}
