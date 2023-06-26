#include <stdio.h>

int main()
{
    int num1,num2,Total;
    float Average;

    printf("Enter First Number:");
    scanf("%d",&num1);

    printf("Enter Second Number:");
    scanf("%d",&num2);

    Total = (num1+num2);

    printf("%d + %d \n",num1,num2);
    printf("Total = %d \n",Total);

    Average =(Total/2);

    printf("Average is %f ",Average);

    return 0;
}
