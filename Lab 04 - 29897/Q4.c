#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    switch(ch)
    {
        case'a':printf("a is a vowel\n");break;
        case'e':printf("e is a vowel\n");break;
        case'i':printf("i is a vowel\n");break;
        case'o':printf("o is a vowel\n");break;
        case'u':printf("u is a vowel\n");break;

        default:printf("%c is not a vowel\n",ch);
    }
    return 0;
}
