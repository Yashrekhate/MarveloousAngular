#include<stdio.h>
union demo
{
    int i;
    float f;
    double d;
};

int main ()
{
    union demo obj ;
    printf("%d/n",sizeof (obj));
     
     obj.i=11;
     printf("%d/n",obj.i);

     obj.f=21.22;
     printf("%f/n",obj.f);

     return 0;
}
