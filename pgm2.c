#include <stdio.h>
int main(void)
{
    const float pi = 3.14159f;
    float r, area, circumference;

    printf("enter radius: ");
    scanf("%f",&r);

    area = pi * r * r;
    circumference = 2 * pi *r;

    printf("area = %.2f\n", area);
    printf("circumference = %2f\n", circumference);
    
    return 0;
}