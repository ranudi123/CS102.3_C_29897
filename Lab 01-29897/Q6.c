#include <stdio.h>

int main()
{
    char Name[50];
    int birthyear,currentyear,Age;

    printf("Enter Your Name : ");
    scanf("%s",&Name);

    printf("Enter Your Birth Year : ");
    scanf("%d",&birthyear);

    printf("Enter Current Year :");
    scanf("%d",&currentyear);

    Age = (currentyear-birthyear);

    printf("Name is %s and Age is %d \n ",Name,Age);

    return 0;
}
