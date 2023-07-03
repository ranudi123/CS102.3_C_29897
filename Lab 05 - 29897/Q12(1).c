#include <stdio.h>
int main()
{
    int g,total=0,r;
    printf("Enter numbers : ");
    scanf("%d",&g);
    if(g==-1)
    {
        printf("\nThe total is %d",g);
    }
    else
    {
        for(r=0;r==0;)
        {
            total+=g;
            scanf("%d",&g);
            if(g==-1)
            {
                r=1;
            }
        }
        printf("\nThe total is %d\n",total);
    }
    return 0;
}
