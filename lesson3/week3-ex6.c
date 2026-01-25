#include <stdio.h>
int main()
{
    int a[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    /*
    You can write as below (for result as above).
    int a[3][4] = {
        {0, 1, 2, 3},  // initializers for row indexed by 0
        {4, 5, 6, 7},  // initializers for row indexed by 1
        {8, 9, 10, 11} // initializers for row indexed by 2
    };
    // The nested braces{}, which indicate the intended row, are optional.
    */

    /* output each array element's value */
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("a[%d][%d] = %d\n", r, c, a[r][c]);
        }
    }

    return 0;
}
