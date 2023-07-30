#include <stdio.h>
int main()
{
    int s,i,v;
    printf("The size of the array :");
    scanf("%d",&s);

    int arrA[s],arrB[s],arrC[s],ssA=0,ssB=0;
    for(int i=0;i<s;i++)
    {
        printf("\nEnter a value for arrA[%d]:",i);
        scanf("%d",&arrA[i]);
        ssA+=arrA[i];

        printf("Enter a value for arrB[%d]:",i);
        scanf("%d",&arrB[i]);
        ssB+=arrB[i];

        arrC[i]=arrA[i]+arrB[i];



    }

    printf("\nscalar sum of array A : %d\n",ssA);
    printf("scalar sum of array B : %d\n",ssB);
    printf("\nVector sum:",arrC);

    return 0;
}
