#include<stdio.h>
int main()
{
    float R1,R2,R3,R4,V,I,Rs1,Rs2,RT,Rp1,Rp2,Iv,i1,i2,I2,VRp1,VRp2,VR2;

    printf(" R1=6kohm, R2=12kohm, R3=14kohm, R4=35kohm, V=9V, I=6mA \n");
    R1=6,R2=12,R3=14,R4=35,V=9,I=6;
    Rs1= R1+R2;
    Rs2= R3+R4;
    RT= (Rs1*Rs2)/(Rs1+Rs2);
    Iv= V/RT;
    i1= V/Rs1;

    Rp1= (R1*R2)/(R1+R2);
    Rp2= (R3*R4)/(R3+R4);
    VRp1= VR2=I*Rp1;
    VRp2= I*Rp2;
    i2= VR2/R2;
    I2= i1+i2;

    printf("\nthe value I2 current is : %.2f mA\n ", I2);

    return 0;
}
