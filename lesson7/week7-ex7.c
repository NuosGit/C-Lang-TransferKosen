#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *fp2;
    int i = 0, j;
    char buff[1024];
    char blood_type[100][100];
    int height[100], weight[100], a_blood = 0, b_blood = 0, o_blood = 0;
    float avg_height = 0, avg_weight = 0;
    
    fp = fopen("lesson7/07_profile.txt", "r");
    if ( fp != NULL )
    {
        while(fgets(buff, 1024, fp) != NULL)
        {
            sscanf(buff, "%d %d %s", &height[i], &weight[i], blood_type[i]);
            avg_height += height[i];
            avg_weight += weight[i];
            i++;
        }
        for (int j = 0; j < i; j++)
        {
            if (blood_type[j][0] == 'A')
                a_blood++;
            else if (blood_type[j][0] == 'B')
                b_blood++;
            else if (blood_type[j][0] == 'O')
            o_blood++;
        }
        avg_height /= i;
        avg_weight /= i;
        fclose(fp);
    }
    else
    {
        printf("Error opening file.\n");
        return 1;
    }

    int count = i;
    fp2 = fopen("lesson7/07_profile2.txt", "w");
    fprintf(fp2, "Average height: %.2f cm\n", avg_height);
    fprintf(fp2, "Average weight: %.2f kg\n", avg_weight);
    fprintf(fp2, "Blood type A: %d\n", a_blood);
    fprintf(fp2, "Blood type B: %d\n", b_blood);
    fprintf(fp2, "Blood type O: %d\n", o_blood);
    fclose(fp2);

    return 0;
}