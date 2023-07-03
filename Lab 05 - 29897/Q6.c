#include <stdio.h>
int main()
{
    int f,q,c=1;
    printf("Enter a value: ");
    scanf("%d",&f);
    printf("Now enter the power of it: ");
    scanf("%d",&q);

    if(q==0)
    {
        c=1;
    }
    else
    {
        for(q;q>0;q--)
        {
            c=c*f;
        }
    }
    printf("The answer is %d\n",c);
    return 0;
}
