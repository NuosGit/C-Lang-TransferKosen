#include <stdio.h>

int main()
{
    FILE *fp;

    char buff[128];
    int tall, weight, age;
    char blood;

    fp = fopen("lesson7/profile.txt", "r");
    if ( fp != NULL )
    {
        while (fgets(buff, 128, fp) != NULL)
        {
            sscanf(buff, "%d %d %d %c", &tall, &weight, &age, &blood);
            printf("Tall: %d cm, ", tall);
            printf("Weight: %d kg, ", weight);
            printf("Age: %d years, ", age);
            printf("Blood type: %c\n", blood);
            printf("--------------------\n");
        }
        fclose(fp);
    }
    else
    {
        printf("Error opening file.\n");
    }
    return 0;
}