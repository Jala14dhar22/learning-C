#include<stdio.h>
void fer_change(float a);
void kalvin_change(float a);

double main(){float a;
a=100;
printf("change the temaperature fer and kalvin \n");
fer_change( a);
kalvin_change(a);
return 0;}

void fer_change (float a){
float far;

 far= a*(9.0/5.0)+32 ;
 printf("change far :%f\n",far);
 }

void kalvin_change(float a){
    float kalvin;
    kalvin=a+273;
    printf("change kalvin : %f\n",kalvin);

}