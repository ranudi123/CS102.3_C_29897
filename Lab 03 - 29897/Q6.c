#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character among these: A,B,C,a,b,c,0,1,2,$,*,+,/ \n ");
    scanf("%c",&ch);

     if ('A'==ch)
     printf("The integer value of A is %d\n",'A');
     else if('B'==ch)
     printf("The integer value of B is %d\n",'B');
     else if('C'==ch)
     printf("The integer value of C is %d\n",'C');
     else if('a'==ch)
     printf("The integer value of a is %d\n",'a');
     else if('b'==ch)
     printf("The integer value of b is %d\n",'b');
     else if('c'==ch)
     printf("The integer value of c is %d\n",'c');
     else if('0'==ch)
     printf("The integer value of 0 is %d\n",'0');
     else if('1'==ch)
     printf("The integer value of 1 is %d\n",'1');
     else if('2'==ch)
     printf("The integer value of 2 is %d\n",'2');
     else if('$'==ch)
     printf("The integer value of $ is %d\n",'$');
     else if('*'==ch)
     printf("The integer value of * is %d\n",'*');
     else if('+'==ch)
     printf("The integer value of + is %d\n",'+');
     else if('/'==ch)
     printf("The integer value of / is %d\n",'/');

    return 0;
}
