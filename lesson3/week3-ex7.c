#include <stdio.h>

int main()
{
    int score[4][3] = {
        {91, 63, 78},
        {67, 72, 47},
        {89, 58, 53},
        {33, 54, 34}
    };

    const char *name[4] = {"Satou", "Takahashi", "Ito", "Watanabe"};
    const char *subject[3] = {"National Language", "English", "Math"};

    for (int r = 0; r < 4; r++)
    {
        printf("%s's\n", name[r]);

        int sum = 0;
        for (int c = 0; c < 3; c++)
        {
            printf("%s Scores: %d\n", subject[c], score[r][c]);
            sum += score[r][c];
        }

        printf("%s's Average Score: %.2f\n\n", name[r], sum / 3.0);
    }

    return 0;
}