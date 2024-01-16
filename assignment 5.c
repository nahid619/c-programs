#include<stdio.h>
int main()
{
    int w1,w2,w3,w4,w5,w6,q1,q2,q3,q4,q5,q6,h1,h2,h3,h4,h5,h6 ;
    double U1,U2,U3,U4,U5,U6,total_unit,total_amount ;

    printf("Enter the watt, quentity and hour for Ceiling fan is: "),
    scanf("%d%d%d", &w1,&q1,&h1);
    printf("Enter the watt, quentity and hour for Laptop is: "),
    scanf("%d%d%d", &w2,&q2,&h2);
    printf("Enter the watt, quentity and hour for Television is: "),
    scanf("%d%d%d", &w3,&q3,&h3);
    printf("Enter the watt, quentity and hour for Fridge is: "),
    scanf("%d%d%d", &w4,&q4,&h4);
    printf("Enter the watt, quentity and hour for Light Bulb is: "),
    scanf("%d%d%d", &w5,&q5,&h5);
    printf("Enter the watt, quentity and hour for Iron is: "),
    scanf("%d%d%d", &w6,&q6,&h6);

    U1= w1*q1*h1;
    printf("\nConsumed unit by ceiling fan per day is : %.2lf U\n", U1/1000);
    U2= w2*q2*h2;
    printf("Consumed unit by laptop per day is : %.2lf U\n", U2/1000);
    U3= w3*q3*h3;
    printf("Consumed unit by television per day is : %.2lf U\n", U3/1000);
    U4= w4*q4*h4;
    printf("Consumed unit by fridge per day is : %.2lf U\n", U4/1000);
    U5= w5*q5*h5;
    printf("Consumed unit by light bulb per day is : %.2lf U\n", U5/1000);
    U6= w6*q6*h6;
    printf("Consumed unit by iron per day is : %.2lf U\n", U6/1000);

    total_unit= (U1+U2+U3+U4+U5+U6)/1000 ;
    printf("\nTotal consumed unit per day is : %.2lf U\n", total_unit);
    printf("Total consumed unit in full month is : %.2lf U\n", total_unit*30);
    printf("Per unit price is : 7 taka\n");

    total_amount=total_unit*30*7 ;
    printf("\nTotal electric bill for a month is : %.2lf taka\n", total_amount);

    return 0;
}
