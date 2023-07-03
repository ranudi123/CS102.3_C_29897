#include <stdio.h>
int main()
{
    int n1,n2,ch;

    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);

    printf("1. + \n");
    printf("2. - \n");
    printf("3. * \n");
    printf("4. / \n");

    printf("\nPlease enter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:printf("\n%d\n",n1+n2);break;
        case 2:printf("\n%d\n",n1-n2);break;
        case 3:printf("\n%d\n",n1*n2);break;
        case 4:printf("\n%d\n",n1/n2);break;
    }
    return 0;
}
