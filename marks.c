#include<stdio.h>
int main(){
    int marks[3];
    printf("enter the mathematics \n",marks[0]);
    scanf("%d/n",&marks[0]);
 printf("enter the physics \n ",marks[1]);
    scanf("%d/n",&marks[1]);
     printf("enter the chemistry \n",marks[2]);
    scanf("%d/n",&marks[2]);
    printf("mathematics=%d,    physics=%d,    chemistry=%d \n",marks[0],marks[1],marks[2]);
    int sum;
    sum=marks[0]+marks[1]+marks[2];
    printf("total marks : %d \n",sum);
   float per;
    per=sum/3;
    printf("percentage =%f \n",per);
return 0;}