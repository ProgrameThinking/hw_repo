/*本题的要求很简单，就是求N个数字的和。麻烦的是，这些数字是以有理数分子/分母的形式给出的，你输出的和也必须是有理数的形式。
输入格式：
输入第一行给出一个正整数N（≤100）。随后一行按格式a1/b1 a2/b2 ...给出N个有理数。题目保证所有分子和分母都在长整型范围内。另外，负数的符号一定出现在分子前面。
输出格式：
输出上述数字和的最简形式 —— 即将结果写成整数部分 分数部分，其中分数部分写成分子/分母，要求分子小于分母，且它们没有公因子。
如果结果的整数部分为0，则只输出分数部分。*/

#include<stdio.h>

long long gcd(long long numerator,long long denominator);
void inchange(long long * x,long long * y);

int main()
{
    long long N,x,t,m,n;              /*t为最大公约数*/
    long long y=1;                    /*通分后分母*/
    long long z=0;                    /*通分后分子*/
    scanf("%lld",&N);
    long long numerator[N];
    long long denominator[N];
    for(x=0;x<N;x++)
    {
        scanf("%lld/%lld",&numerator[x],&denominator[x]);
        t=gcd(numerator[x],denominator[x]);
        if(t!=1)
        {
            numerator[x]/=t;
            denominator[x]/=t;
        }
    }
    for(x=0;x<(N-1);x++)
    {
        y=denominator[x]*denominator[x+1];
        z=numerator[x]*denominator[x+1]+denominator[x]*numerator[x+1];
        t=gcd(y,z);
        y/=t;
        z/=t;
        denominator[x+1]=y;
        numerator[x+1]=z;
    }
    t=gcd(z,y);
    m=(y*N)/t;
    z/=t;
    if(z>=y||-z>=y)
    {
        if(z%y==0)
        {
            printf("%lld",z/y);
        }
        else
        {
            printf("%lld %lld/%lld",z/y,z%y,y);
        }
    }
    else
    {
        if(z==0)
        {
            printf("0");
        }
        else
        {
            printf("%lld/%lld",z,y);
        }
    }
    return 0;
}

long long gcd(long long numerator,long long denominator)
{
    long long x,y,z,j,result;
    x=numerator;
    y=denominator;
    inchange(&x,&y);
    if(x==0||y==0)
    {
        result=1;
    }
    else if(x%y!=0)
    {
        z=x%y;
        while(z!=0)
        {
            j=z;
            z=y%z;
            y=j;
        }
        result=j;
    }
    else if(x%y==0)
    {
        result=y;
    }
    
    return result;
}

void inchange(long long * x,long long * y)
{
    long long temp;
    if(*y>*x)
    {
        temp=*y;
        *y=*x;
        *x=temp;
    }
    return;
}