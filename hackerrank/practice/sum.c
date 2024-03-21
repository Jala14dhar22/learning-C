
// Print the sum and difference of both integers separated by a space on the first line, 
// and the sum and difference of both float (scaled to  decimal place) 
// separated by a space on the second line

#include <stdio.h>



int main()
{int a,b;
float x,y;
scanf("%d",&a);
scanf("%d",&b);
scanf("%f %f",&x,&y);


printf("%d %d\n",a+b,a-b);
	printf("%.1f %.1f\n",x+y,x-y);
    
    return 0;
}
