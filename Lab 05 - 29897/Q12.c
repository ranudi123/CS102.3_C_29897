#include <stdio.h>
int main()
{
    int no,counter;
    printf("Enter a number to find factors: ");
    scanf("%d",&no);
    printf("Factors of %d are: \n",no);
    for(counter=1;counter<=no;counter++)
    {
        if (no%counter==0)
        printf("%d\n",counter);

    }

    return 0;
}
