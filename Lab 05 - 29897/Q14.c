#include <stdio.h>
int main()
{
    int i,arr[10],evenc=0;
    for(i=0;i<10;i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
            evenc++;
    }
    printf("\nCount of even numbers %d \n",evenc);
    return 0;
}
