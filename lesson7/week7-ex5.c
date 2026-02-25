#include <stdio.h>

int main()
{
    FILE *fp, *fp2;
    fp = fopen("lesson7/05_test.txt", "r");
    if ( fp != NULL )
    {
        printf("File opened successfully.\n");
    }
    else
    {
        printf("Error opening file.\n");
    }

    char str[1024];
    
    fp2 = fopen("lesson7/05_test2.txt", "w");
    
    while (fgets(str, 1024, fp) != NULL)
    {
        fprintf(fp2, "%s", str);
    }
    
    fclose(fp);
    fclose(fp2);

    return 0;
}