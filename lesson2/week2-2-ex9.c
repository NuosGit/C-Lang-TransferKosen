#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    int A;
    
    while (1)
    {
        printf("Input : ");
        scanf("%s", input);
        if (strcmp(input, "*") == 0)
        {
            break;
        }
        int result = sscanf(input, "%d", &A);
        
        if (result != 1)
        {
            printf("Error: Invalid input. Please enter an integer or '*' to exit.\n");
            continue;
        }
        int mod = A % 5;
        printf("Output : ");
        switch(mod)
        {
            case 0:
                printf("Super Lucky\n");
                break;
            case 1:
                printf("Lucky\n");
                break;
            case 2:
                printf("Normal\n");
                break;
            case 3:
                printf("Bad\n");
                break;
            case 4:
                printf("Super Bad\n");
                break;
        }
    }
    
    return 0;
}