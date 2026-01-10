#include <stdio.h>

int main() {
    float height, base, area;
    printf("Input height and base of triangle in order : ");
    scanf("%f%f", &height, &base);
    area = (height*base)/2;
    printf("Area : %.2f\n", area);

    return 0;
}