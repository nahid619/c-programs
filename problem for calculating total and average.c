#include <stdio.h>

int main()
{
    int english, chemistry, computers, physics, maths, Total;
    float Average;

    printf("Please Enter the marks of five subjects: \n");
    scanf("%d%d%d%d%d", &english, &chemistry, &computers, &physics, &maths);

    Total = english + chemistry + computers + physics + maths;
    Average = Total / 5;

    printf("Total Marks = %d\n", Total);
    printf("Average Marks = %f\n", Average);

    return 0;
}

