#include <stdio.h>

int main()
{
    float c, f;
    printf("Input Celcius (Convert to Farenheit) : ");
    scanf("%f", &c);
    f = ((9*c)/5)+32;
    printf("Farenheit : %.2f\n", f);

    return 0;
}