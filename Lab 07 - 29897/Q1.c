#include <stdio.h>
int main()
{
    int i,arr[10],sum=0,min,max=0;
    float avg;

    //input values to the array

    for(i=0;i<10;i++)
    {
        printf("Enter Values %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    //display minimum value,maximum value,average value and reverse order of values
    min=arr[0];
    for(i=0;i<10;i++)
    {
      if(arr[i]<min)
      min=arr[i];
    }

    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
        if(arr[i]>max)
        max=arr[i];
    }

    avg=sum/10;
    printf("\nThe minimum value is %d\n",min);
    printf("The maximum value is %d\n",max);
    printf("The average value is %.2f\n",avg);

    printf("\n reverse order:\n");
    for(i=9;i>=0;i--)
    {
      printf("%d\n",arr[i]);
    }








    return 0;
}
