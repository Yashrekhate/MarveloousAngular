#include<stdio.h>
int main ()
{
	int std =0;
	
	printf("enter your standard\n");
	scanf("%d",&std);
	
	switch (std)
	{
		case 1:
		printf("your exam is 1pm\n");
		break;
		
		case 2:
		printf("your exam is 2pm\n");
		break;
		
		case 3:
		printf("your exam is 3pm\n");
		break;
		
		case 4:
		printf("your exam is 4pm\n");
		
		default:
			printf("invalid standard\n");
			
	}
	return 0;
}
