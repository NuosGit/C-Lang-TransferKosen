#include <stdio.h>

int main() 
{
    int n, ans = 10;
    printf("Enter  number between 0 - 20 : ");
    scanf("%d", &n);

    while (n != ans)
    {
        if (n < 0 || n > 20) 
        {
            printf("Out of range! Please enter a number between 0 - 20 \n");
        } 
        else if (n < ans) 
        {
            printf("Too low\n");
        } 
        else if (n > ans) 
        {
            printf("Too high\n");
        }
        printf("Try again: ");
        scanf("%d", &n);
    }
    printf("Congratulations! You guessed it right.\n");
    return 0;
}