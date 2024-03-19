#include<stdio.h>
int main(){int a,b,i,num;
printf("enter value a :");
scanf("%d",&a);
printf("enter value b :");
scanf("%d",&b);

printf(" a+b = %d\n",a+b);
printf(" a-b = %d\n",a-b);
printf(" a*b = %d\n",a*b);
printf(" a/b = %d\n",a/b);
for(i=1;i<a;i++){printf("%d ",i);
printf("good night \n" );}
printf("choice your lacky ---- \n");
scanf("%d",&num);
switch(num){
case 10 :
    printf("this a positive number %d\n" ,num);
 break;
case 20 :printf("this a positive number %d\n" ,num);
break;
case 30 :printf("this a positive number %d\n" ,num);
break;
case 4 :printf("this a positive number %d\n",num);
break;
case 15 :printf("this a positive number %d\n",num);
break;
default :printf("pleaces valid number \n",num);
break;

}

return 0;}