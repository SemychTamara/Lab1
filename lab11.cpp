#include <stdio.h>
#include <math.h>

 int main()

{
	
	 float a1, b1, c1;
	 double a2, b2, c2;
	
	printf("number a(for float):\n");
	scanf("%f" , &a1);
	printf("number b(for float):\n");
	scanf("%f" , &b1);
	
	c1 = (pow((a1-b1),3)-(pow(a1,3)-3*a1*a1*b1))/(pow(b1,3)-3*a1*b1*b1);
	
	printf("c(for float) is %f\n", c1);
	
		printf("number a(for double):\n");
	    scanf("%lf" , &a2);
	    printf("number b(for double):\n");
	    scanf("%lf" , &b2);
	
	    c2 = (pow((a2-b2),3)-(pow(a2,3)-3*a2*a2*b2))/(pow(b2,3)-3*a2*b2*b2);
	
	    printf("c(for double) is %lf\n", c2);
	
		return 0;	
	
}
