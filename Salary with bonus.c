#include<stdio.h>
int main()
{
    char employee;
    double salary, sold, total_money;
    scanf("%s %lf %lf", &employee, &salary, &sold);
    total_money = salary + (sold*15) /100;
    printf("TOTAL = R$ %.2lf\n", total_money);
    return 0;
}

