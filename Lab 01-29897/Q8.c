#include <stdio.h>

int main()
{
    printf("The color: %s\n", "blue");// "%s"shown as "blue"value

    printf("First number: %d\n", 12345); // "%d" shown as"12345"value

    printf("Second number: %04d\n", 25);//Output shows Four values

    printf("Third number: %i\n", 1234);//Output shows the same value that enterd

    printf("Float number: %3.2f\n", 3.14159);//This float number limits 2 decimals

    printf("Hexadecimal: %x\n", 255);//show the Hexadecimal value of 255

    printf("Octal: %o\n", 255);//show the octal value

    printf("Unsigned value: %u\n", 150);//show the value same as the input

    printf("Just print the percentage sign %%\n", 10);// show the % mark

    return 0;
}
