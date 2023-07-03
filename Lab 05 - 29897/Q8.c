#include <stdio.h>
int main()
{
    int n,arms=0,r,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arms=(r*r*r)+arms;
        n=n/10;
    }
    if(c==arms)
    printf("Armstrong Number\n");
    else
    printf("Not an Armstrong Number\n");

    return 0;
}
