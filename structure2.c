#include<stdio.h>

struct demo
{
    int i;
    float f;
    int *ip;
    float *fp;

};
int main ()
{
    struct demo obj;
    int no =90;
    float f=90.67;

    obj.i=90;
    obj.f=90.67;
    obj.ip=&no;
    obj.fp=&f;

    printf("%d\n",obj.i);
    printf("%d\n",obj.f);
    printf("%d\n",*(obj.ip));
    printf("%d\n",*(obj.fp));

    return 0;




}