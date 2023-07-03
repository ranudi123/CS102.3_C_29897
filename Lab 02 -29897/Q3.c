#include <stdio.h>

int main()
{
    int Dist,Time,Avgspeed;;
    printf("Enter Distance Travelled:");
    scanf("%d",&Dist);
    printf("Enter the Time :");
    scanf("%d",&Time);
    Avgspeed = (Dist/Time);
    printf("Average Speed is %d ",Avgspeed);
    return 0;
}
