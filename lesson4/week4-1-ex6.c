#include <stdio.h>

int scan_print(void)
{
    int a;
    printf("Input Integer : ");
    scanf("%d", &a);
    return a;
}

int print_abc(int a)
{
    while (a <= 0)
    {
        printf("Incorrect. Please input again.\n");
        a = scan_print();
    }

    if (a % 3 == 0)
    {
        printf("A\n");
    }
    else if (a % 3 == 1)
    {
        printf("B\n");
    }
    else
    {
        printf("C\n");
    }

    return a;
}

int main()
{
    int a = scan_print();
    print_abc(a);
    return 0;
}