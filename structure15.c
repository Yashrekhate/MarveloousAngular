#include<stdio.h>
union demo
{
   int no ;
   float f;
   double d;
};
int main ()
{
    union demo obj;
    printf ("%d/n",sizeof(obj));

    obj.no=11;

    printf("%d/n",obj.no);

    obj.f=99.99;

    printf("%d/n",obj.f);

    obj.d =98.999;

    printf("%d/n",obj.d);

    return 0;


}