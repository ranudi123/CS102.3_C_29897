#include <stdio.h>

int main()
{
    char emname[25];
    float basicsalary,newsalary,incre;

    printf("Enter Employee name:");
    scanf("%s",&emname);

    printf("Enter Basic Salary:");
    scanf("%f",&basicsalary);

    if(basicsalary>=10000)
    incre=basicsalary*0.15;

    else if(basicsalary>=5000)
    incre=basicsalary*0.10;

    else
    incre=basicsalary*incre;

    newsalary = basicsalary+incre;

    printf("Employee name is %s and the New salary is %.2f\n",emname,newsalary);
    return 0;
}
