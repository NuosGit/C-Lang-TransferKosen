#include <stdio.h>

int main()
{
    int seiseki[5] = {54, 94, 80, 75, 66};
    float max_score = 0;
    float avg_score = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max_score < seiseki[i])
        {
            max_score=seiseki[i];
        }
        avg_score+=(float)seiseki[i]/5;
    }
    printf("Maximum Score : %.2f \n", max_score);
    printf("Average Score : %.2f", avg_score);
}