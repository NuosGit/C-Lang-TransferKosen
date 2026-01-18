#include <stdio.h>

int main()
{
    int guess, ans;
    ans = 50;
    printf("Guess the number (between 1 and 100): ");
    scanf("%d", &guess);
    while (guess != ans)
    {
        if (guess < 1 || guess > 100)
        {
            printf("Out of range! Please guess a number between 1 and 100 : ");
        }
        else
        {
            if (guess < ans)
            {
                printf("Too low. \nTry again: ");
            }
            else
            {
                printf("Too high. \nTry again: ");
            }
        }
        scanf("%d", &guess);
    }
    printf("Congratulations! You guessed the number %d correctly.\n", ans);
    return 0;
}