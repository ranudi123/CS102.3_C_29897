#include <stdio.h>
int main()
{
    int number,i;
    int factorial=1;

    printf("Enter a number: ");
    scanf("%d",&number);
        if(number<0)
    {
        printf("Not calculatable\n");
    }
    else if(number==0)
    {
        printf("Factorial of %d is %d \n",number,1);
    }
    else
    {
        for(i=1;i<=number;i++)
        {
            factorial *= i;
        }
          printf("Factorial of %d is %d \n",number,factorial);
    }

    return 0;
}
