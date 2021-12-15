/*按要求编写程序，计算N个有理数的平均值。
输入格式：
输入第一行给出正整数N（≤100）；第二行中按照a1/b1 a2/b2 …的格式给出N个分数形式的有理数，其中分子和分母全是整形范围内的整数；如果是负数，则负号一定出现在最前面。
输出格式：
在一行中按照a/b的格式输出N个有理数的平均值。注意必须是该有理数的最简分数形式，若分母为1，则只输出分子。*/

#include<stdio.h>

int gcd(int numerator,int denominator);
void inchange(int * x,int * y);

int main()
{
    int N,x,t,m,n;              /*t为最大公约数*/
    int y=1;                    /*通分后分母*/
    int z=0;                    /*通分后分子*/
    scanf("%d",&N);
    int numerator[N];
    int denominator[N];
    for(x=0;x<N;x++)
    {
        scanf("%d/%d",&numerator[x],&denominator[x]);
        t=gcd(numerator[x],denominator[x]);
        if(t!=1)
        {
            numerator[x]/=t;
            denominator[x]/=t;
        }
    }                                                                      /*约分*/
    for(x=0;x<(N-1);x++)
    {
        y=denominator[x]*denominator[x+1];
        z=numerator[x]*denominator[x+1]+denominator[x]*numerator[x+1];
        t=gcd(y,z);
        y/=t;
        z/=t;
        denominator[x+1]=y;
        numerator[x+1]=z;
    }                                                                      /*分数之和*/
    t=gcd(z,(y*N));
    m=(y*N)/t;
    z/=t;
    if(m==1||z==0)
    {
        printf("%d",z);
    }
    else
    {
        printf("%d/%d",z,m);
    }
    return 0;
}

int gcd(int numerator,int denominator)
{
    int x,y,z,j,result;
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

void inchange(int * x,int * y)
{
    int temp;
    if(*y>*x)
    {
        temp=*y;
        *y=*x;
        *x=temp;
    }
    return;
}