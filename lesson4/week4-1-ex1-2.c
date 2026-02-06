#include <stdio.h>

int addNumber(int a,  int b) // function definition
{
    int result;
    result = a+b;
    return result; // return statement
}

int main()
{
    int n1, n2, sum;
    printf("Enters Two Numbers : ");
    scanf("%d %d", &n1, &n2);

    sum = addNumber(n1, n2); // function call
    printf("Sum : %d", sum);

    return 0;
}