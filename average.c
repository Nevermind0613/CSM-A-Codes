#include <stdio.h>
int main()
{
    float num1, num2, average;
    scanf("%f %f", &num1, &num2);
    average = (num1 + num2) / 2;
    printf("Average: %.2f", average);
    return 0;
}
