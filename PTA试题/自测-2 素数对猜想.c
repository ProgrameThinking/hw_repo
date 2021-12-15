/*“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
现给定任意正整数N(<pow(10,5))，请计算不超过N的满足猜想的素数对的个数。*/


#include<stdio.h>
int isprime(int n);
int main()
{
    int n,x,y=0,count=0;
    int prime[10000]={0};
    scanf("%d",&n);
    for(x=2;x<n+1;x++)
    {
        if(isprime(x))
        {
            prime[y]=x;
            y++;
        }
    }
    for(y=0;prime[y]!=0;y++)
    {
        printf("%d y\n",prime[y]);
        if(prime[y+1]==prime[y]+2)
            count++;
    }
    printf("%d",count);
}
int isprime(int n)
{
    int prime,x;
    if(n==2)
        return prime;
    for(x=2,prime=1;x*x<=n;x++)
    {
        if(n%x==0)
            prime=0;
        if(prime==0)
            break;
    }
        return prime;
}