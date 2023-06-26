#include <stdio.h>

int main()
{
    int num1,num2,total;
    printf("Enter number:");
    scanf("%d",&num1);
    printf("Enter number:");
    scanf("%d",&num2);

    total = (num1+num2);

    printf("%d + %d \n",num1,num2);
    printf("Total = %d \n",total);

    return 0;

}
