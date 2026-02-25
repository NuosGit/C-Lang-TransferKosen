#include <stdio.h>

struct Profile
{
    float height;
    float weight;
    char blood_type;
    int age;
    float bmi;
};

int main()
{
    struct Profile watashi = {170.0, 60.0, 'A', 20, 0.0};
    watashi.bmi = watashi.weight / ((watashi.height/100) * (watashi.height/100));
    printf("Height: %.1f cm\n", watashi.height);
    printf("Weight: %.1f kg\n", watashi.weight);
    printf("Blood type: %c\n", watashi.blood_type);
    printf("Age: %d years old\n", watashi.age);
    printf("BMI: %.2f\n", watashi.bmi);

    return 0;
}