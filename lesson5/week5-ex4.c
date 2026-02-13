#include <stdio.h>

int main()
{
    char a[6] = "hello";
    for (int i=0;i<8;i++)
    {
        printf("Var : %c\n", a[i]);
        printf("Var Address : %p\n", &a[i]);
    }

    return 0;
}