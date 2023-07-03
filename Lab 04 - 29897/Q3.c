#include <stdio.h>
int main()
{
    int choice;
    float radius, PI=3.14159;

    printf("1. Calculate the circumference of a circle\n");
    printf("2. Calculate the area of a circle\n");
    printf("3. Calculate the volume of a sphere\n");
    printf("\nEnter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter the radius: ");
    scanf("%f", &radius);

     float circumference = 2 * PI * radius;
     float area = PI * pow(radius, 2);
     float volume = (4.0 / 3.0) * PI * pow(radius, 3);

     switch (choice)
     {
        case 1:printf("The circumference of the circle is: %.2f\n", circumference);break;
        case 2:printf("The area of the circle is: %.2f\n", area);break;
        case 3:printf("The volume of the sphere is: %.2f\n", volume);break;
        default:printf("Invalid choice!\n");break;
      }

    return 0;
}

