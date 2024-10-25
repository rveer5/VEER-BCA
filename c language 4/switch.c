#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character: \n");
    scanf("%c",&ch);
    switch(ch)
    {
      case 'a':
      printf("a is a vowel");
      break;

      case 'e':
      printf("e ia a vowel");
      break;

      case 'i':
      printf("i is a vowel");
      break;

      case 'o':
      printf("o is a vowel");
      break;

      case 'u':
      printf("u is a vowel");
      break;

      default:
      printf("the character is consonant");

    
    }

}
