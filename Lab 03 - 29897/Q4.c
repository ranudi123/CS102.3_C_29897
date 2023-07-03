#include <stdio.h>

int main()
{
    float radius,diameter,circumference,area;

    printf("Enter the radius of a circle: ");
    scanf("%f",&radius);

    diameter=2*radius;
    circumference=2*3.14159*radius;
    area=3.14159*radius*radius;

    printf("The diameter of circle is %f\n",diameter);
    printf("The circumference of circle is %f \n",circumference);
    printf("The area of a circle is %f \n",area);

    return 0;
}
