#include <stdio.h>
int main()
{
     int n,reverse;
     printf("Enter number: ");
     scanf("%d",&n);
    do
    {
       reverse=n%10;
       printf("%d",reverse);
       n=n/10;
    }

    while(n>0);
    return 0;
}
