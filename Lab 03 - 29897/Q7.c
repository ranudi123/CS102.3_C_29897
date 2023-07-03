#include <stdio.h>
int main()
{
    float basicsalary,additionalallowance,bonus,monthlysales,grossremuneration;
    int noofyears;
    char city;

    printf("Enter basic salary: ");
    scanf("%f",&basicsalary);

    printf("Enter the no of service: ");
    scanf("%d",&noofyears);

    printf("Enter the city ('c'= Colombo, 'O'= other): ");
    scanf(" %c", &city);

    printf("Enter the monthly sales: ");
    scanf("%f",&monthlysales);

    if(noofyears>5)
        additionalallowance+=0.1*basicsalary;
    if(city=='c')
        additionalallowance+=2500;

    monthlysales=0;
    if(monthlysales>=50000)
    bonus=monthlysales*0.15;
    else if(monthlysales>=25000)
    bonus=monthlysales*0.12;
    else
    bonus=monthlysales*0.10;


    grossremuneration= basicsalary+additionalallowance+bonus;

    printf("Gross Monthly Remuneration: %2f",grossremuneration);
    return 0;
}
