// c program to convert celsius scale to fahrenheit and kelvin scales
#include <stdio.h>
int main()
{
    float c, f, k;
    printf("Enter the temperature in degree celsius\n");
    scanf("%f", &c);
    f = (c * 180) / 100 + 32; // formula for conversion
    k = c + 273;
    printf("%f celcius= %.2f F\n", c, f);
    printf("%f celsius= %.2f k\n", c, k);

    return 0;
}                             //SuzanCodes
