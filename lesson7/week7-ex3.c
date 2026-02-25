#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("lesson7/output.txt", "r");
    if ( fp != NULL )
    {
        printf("File opened successfully.\n");
    }
    else
    {
        printf("Error opening file.\n");
    }

    char str[1024];
    int b;
    fscanf(fp, "%s %d", str, &b);

    fclose(fp);
    printf("%s %d\n", str, b);
}