#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char s[1000];
    printf("Input String : ");
    scanf("%s", &s);
    int length = strlen(s);
    int lower = 0;
    int upper = 0;
    for(int i = 0; i < length; i++)
    {
        if (islower(s[i]))
        {
            lower++;
        }
        if (isupper(s[i]))
        {
            upper++;
        }
    }

    printf("length : %d\n Lower : %d\n Upper : %d", length, lower, upper);
    return 0;
}