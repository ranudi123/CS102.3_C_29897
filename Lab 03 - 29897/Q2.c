#include <stdio.h>

int main()
{
    int n1,n2,n3,largeno,smallno;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    largeno = n1;
    smallno = n1;

    if (largeno<n2)
        largeno = n2;
    if (largeno<n3)
        largeno=n3;

    if(smallno>n2)
        smallno=n2;
    if (smallno>n3)
        smallno=n3;

    printf("The Largest number is %d and the smallest number is %d \n",largeno,smallno);
    return 0;
}
