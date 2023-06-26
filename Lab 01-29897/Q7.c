#include <stdio.h>

int main()
{
    int no1,no2,no3;

    printf("Enter First Number :");
    scanf("%d",&no1);

    printf("Enter Second Number:");
    scanf("%d",&no2);

    no3 = no1;
    no1 = no2;
    no2 = no3;

    printf("After Swapping First Number : %d \n",no1);
    printf("After Swapping Second Number : %d \n",no2);

    return 0;
}
