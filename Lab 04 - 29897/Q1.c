#include<stdio.h>
int main()
{
    int no,ans;
    printf("Enter number : ");
    scanf("%d",&no);

    switch(no%2)
    {
        case 0 :printf("%d is an even number\n",no);break;
        case 1 :printf("%d is an odd number\n",no);break;

    }


}

