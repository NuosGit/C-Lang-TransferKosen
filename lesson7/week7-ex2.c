#include <stdio.h>

int main()
{
    FILE *fp;
    int a = 100;
    fp = fopen("lesson7/output.txt", "w");
    if (fp != NULL)
    {
        printf("File opened successfully.\n");
    }
    else
    {
        printf("Error opening file.\n");
    }

    fprintf(fp,"Hello World!, %d\n", a);
    fclose(fp);
}