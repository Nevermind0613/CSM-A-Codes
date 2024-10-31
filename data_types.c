#include <stdio.h>
int main()
{
    int a = 5;
    float b = 3.14;
    char c = 'A';
    double d = 9.87654321;

    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    printf("Double: %.8lf\n", d);

    return 0;
}
