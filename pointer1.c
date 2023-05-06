#include<stdio.h>
int main ()
{
    int no = 11;
    int *iptr = &no;

    char ch = 'a';
    char *cptr = &ch;

    double d = 89.89;
    double *dptr = &d;

    printf("%d",no);
    printf("%d",ch);
    printf("%d",d);
    
    printf("%d",&no);
    printf("%d",&ch);
    printf("%d",&d);

    printf("%d",&iptr);
     printf("%d",&cptr);
    printf("%d",&dptr);

    printf("%d",*iptr);
    printf("%d",*iptr); 
    printf("%d",*iptr);
return 0;
}