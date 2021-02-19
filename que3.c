// 3. WAP to convert temperature from degree centigrade to Fahrenheit

// 0 degree centigrade = 32 degree fahrenheit

// (0 C * 9/5) + 32 = 32 F

#include <stdio.h>
int main()
{
    float deg, fah;

    printf("Enter degree centigrde\n");
    scanf("%f", &deg);
    fah = (deg * 9 / 5) + 32;
    printf("%f C = %f F\n", deg, fah);
    return 0;
}