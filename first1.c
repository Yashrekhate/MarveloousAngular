#include<stdio.h>
main()
{
	float r,cir,area;
	printf("enter the radius of circle\t");
	scanf("%f",r);
	cir=2*22.0/7*r;
	area=22.0/7*r*r;
	printf("circumference of circle is %6.2f\n",cir);
	printf("area of circle is %6.2f\n",area);
}
