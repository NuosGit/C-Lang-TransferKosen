#include <stdio.h>

int main()
{
    float f;
    int i;
    int count_f = 0, count_i = 0;

    for (f = 0.01; f<1 ; f+=0.01)
    {
        count_f++;
        printf("%f\n", f);
    }
    for (i = 1; i<100 ; i+=1)
    {
        count_i++;
        printf("%d\n", i);
    }
    printf("float: %d int: %d", count_f, count_i);
    return 0;
}

/*
The integer loop executes as expected, but the floating-point loop does not.
This happens because decimal values like 0.01 cannot be represented exactly
in binary floating-point, so rounding errors accumulate each iteration. 
As a result, the loop condition (f < 1) may become false earlier or later than expected,
producing an incorrect iteration count (e.g., 98 or 100 instead of 99). To avoid this problem,
do not use floating-point variables as loop counters; use an integer loop and compute the floating-point value from the integer instead.
*/