#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main()
{
    int a,b;
    while((scanf("%d %d",&a,&b))!=-1)
    {
        printf("%d\n",gcd(a,b));
    }
    return 0;
}
