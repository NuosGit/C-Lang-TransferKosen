#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char string[20];
    char convert[20];
    printf("Input String : ");
    scanf("%s", &string);

    int length = strlen(string);

    for(int i = 0; i < length; i++)
    {
        if (islower(string[i]))
        {
            convert[i] = toupper(string[i]);
        }
        if (isupper(string[i]))
        {
            convert[i] = tolower(string[i]);
        }
    }

    printf("%s", convert);
    return 0;
}