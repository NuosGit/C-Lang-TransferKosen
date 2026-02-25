#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    int i = 0, j;
    char buff[1024];
    char name[100][20];
    int eng[100], math[100], science[100];
    double avg[100];
    double eng_sum = 0, math_sum = 0, science_sum = 0;
    
    fp = fopen("lesson7/06_profile.txt", "r");
    if ( fp != NULL )
    {
        while(fgets(buff, 1024, fp) != NULL)
        {
            sscanf(buff, "%s %d %d %d", name[i], &eng[i], &math[i], &science[i]);
            avg[i] = (eng[i] + math[i] + science[i]) / 3.0;
            eng_sum += eng[i];
            math_sum += math[i];
            science_sum += science[i];
            i++;
        }
        fclose(fp);
    }
    else
    {
        printf("Error opening file.\n");
        return 1;
    }
    
    int count = i;
    
    printf("-------------------------------------------------------\n");
    printf("|         | English  Math  Science | Ave.  |\n");
    printf("-------------------------------------------------------\n");
    
    for (j = 0; j < count; j++)
    {
        printf("| %8s| %6d %6d %6d | %6.2f |\n", name[j], eng[j], math[j], science[j], avg[j]);
    }
    
    printf("-------------------------------------------------------\n");
    printf("|   Ave.  | %6.2f %6.2f %6.2f |\n", eng_sum/count, math_sum/count, science_sum/count);
    printf("-------------------------------------------------------\n");
    
    return 0;
}