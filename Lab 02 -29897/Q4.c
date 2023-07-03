#include <stdio.h>

int main()
{
    float cel,fah;

    printf("Enter Temperature Fahrenheit degree :");
    scanf("%f",&fah);

    cel = (5.0/9.0)*(fah-32);
    printf("Temperature in Celsius is %f",cel);

    return 0;
}
