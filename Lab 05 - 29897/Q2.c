#include <stdio.h>

int main()
{
    int marks[10],total=0;
    float avg;

    for(int i=0;i<10;i++)
    {
        printf("Enter %d mark : ",i+1);
        scanf("%d",&marks[i]);
        total+= marks[i];
    }
    printf("Total:%d \n",total);
    printf("Average:%.2f \n",(float)total/10);

    avg=(float)total/10;

    if(avg>50)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}
