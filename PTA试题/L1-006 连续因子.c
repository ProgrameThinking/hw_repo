/*一个正整数 N 的因子中可能存在若干连续的数字。例如 630 可以分解为 3×5×6×7，其中 5、6、7 就是 3 个连续的数字。
给定任一正整数 N，要求编写程序求出最长连续因子的个数，并输出最小的连续因子序列。
输入格式：
输入在一行中给出一个正整数 N（1<N<2e31）。
输出格式：
首先在第 1 行输出最长连续因子的个数；然后在第 2 行中按 因子1*因子2*……*因子k 的格式输出最小的连续因子序列，其中因子按递增顺序输出，1 不算在内。*/

#include<stdio.h>
#include<math.h>

long IsPrime(long number);

int main()
{
    long number;
    long x,y,z,a,b;
    long end=0;
    long judge=0;
    long max=1;
    long first=1;
    scanf("%ld",&number);
    if(IsPrime(number))
    {
        printf("1\n");
        printf("%ld",number);
    }
    else
    {
        for(x=2;x<14;x++)
        {
            z=x;
            if(number%z==0)
            {
                judge=1;
                for(y=x+1;y<14;y++)
                {
                    z*=y;
                    if(number%z==0)
                    {
                        judge++;
                    }
                    else if(number%z!=0)
                    {
                        if(max<judge)
                        {
                            max=judge;
                            if(first==1)
                            {
                                end=y;
                            }
                            if(end<=y)
                            {
                                end=y;
                            }
                        }
                        judge=0;
                        first++;
                        break;
                    }
                }
            }
        }
        printf("%d\n",max);
        if(max!=1)
        {
            z=(end-1)*(end-2);
            for(a=end-2;a>0;a--)
            {
                if(number%z==0)
                {
                    z*=(a-1);
                }
                else
                {
                    break;
                }
            }
            b=a+1;
            if(b!=1)
                printf("%d",b);
            b++;
            for(b;b<end;b++)
            {
                if(b==2)
                {
                    printf("%d",b);
                }
                else
                    printf("*%d",b);
            }
        }
        else
        {
            for(x=2;x<sqrt(number);x++)
            {
                if(number%x==0)
                    printf("%d",x);
            }
        }
    }
    return 0;
}

long IsPrime(long number)
{
    long Prime,n;
    for(n=2,Prime=1;n<=sqrt(number);n++)
    {
        if(number%n==0)
        {
            Prime=0;
        }
    }
    if(Prime==0)
    {
        return 0;
    }
    else if(Prime==1)
    {
        return 1;
    }
}