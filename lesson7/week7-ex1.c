#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("lesson7/text.txt", "r");
    if ( fp != NULL )
    {
        printf("File opened successfully.\n");
        fclose(fp);
    }
    else
    {
        printf("Error opening file.\n");
    }
}