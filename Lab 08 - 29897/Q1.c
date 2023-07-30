#include <stdio.h>
int main()
{
    int C[3][3];//matrix 1
    int D[3][3];//matrix 2
    int E[3][3];//resut matix

    int row,column;

    printf("Enter values in matrix C of size 3x3:\n ");
    for(row=0;row<3;row++)
    {
        for(column=0;column<3;column++)
        {
            scanf("%d",&C[row][column]);
        }
    }
    printf("\nEnter values in matrix D of size 3x3: \n");
    for(row=0;row<3;row++)
    {
        for(column=0;column<3;column++)
        {
            scanf("%d",&D[row][column]);
        }
    }
     for(row=0;row<3;row++)
    {
        for(column=0;column<3;column++)
        {
            E[row][column]= C[row][column]+D[row][column];
        }
    }
    printf("Sum of Matrix C+D: ");
    for(row=0;row<3;row++)
    {
        for(column=0;column<3;column++)
        {
            scanf("%d",&D[row][column]);
        }

    }

    return 0;
}
