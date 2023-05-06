#include<stdio.h>
int main()
{
	char ch= a;
	int i=11;
	float=3.14;
	double=9,89;
	
	char *cp=&ch;
	int *ip=&i;
	float *fp=&f;
	double *dp=&d;
	
	void *vp= NULL;
	vp=&ch;
	printf("%c"*(char*)vp);
	
	vp=&i;
	
	printf("%d\n",*(int*)vp);
	
	vp=&f;
	printf("%d\n",*(float*)vp);
	
	return 0;
}
