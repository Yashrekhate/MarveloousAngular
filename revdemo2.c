#include<stdio.h>
int multiplication(int a ,int b)
{
    int ans =0;

    ans =a*b;

    return ans;
}
int main()
{
    int no1=10;
    int no2=11;

    int ret =0;

    ret =multiplication (no1,no2);

    printf ("multiplication is : %d\n",ret);

    return 0;
}