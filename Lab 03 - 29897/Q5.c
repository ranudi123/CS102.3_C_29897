#include <stdio.h>

int main()
{
    int n1,n2,n;

    printf("Enter two numbers:\n ");
    scanf("%d%d",&n1,&n2);

    n =n1%n2;

    if(n==0)
    printf("\n%d is a multiple of %d \n ",n1,n2);
    else
    printf("\n%d is not a multiply of %d \n",n1,n2);

    return 0;
}
