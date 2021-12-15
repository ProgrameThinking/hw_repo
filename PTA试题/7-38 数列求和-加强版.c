/*给定某数字A（1≤A≤9）以及非负整数N（0≤N≤100000），求数列之和S=A+AA+AAA+⋯+AA⋯A（N个A）。例如A=1, N=3时，S=1+11+111=123。
输入格式：
输入数字A与非负整数N。
输出格式：
输出其N项数列之和S的值。*/

#include<stdio.h>
int main()
{
    int A,N,t,i;
    int judge=0;
    scanf("%d%d",&A,&N);
    int data[N+1];
    if(N==0)
    {
        printf("0");
    }
    else
    {
        for(i=0;i<(N+1);i++)
        {
            data[i]=0;
        }
        for(i=0;i<N;i++)
        {
            data[i]+=(A*(N-i))%10;
            t=data[i]/10;
            data[i]%=10;
            data[i+1]+=((A*(N-i))/10+t);
            printf("%d  %d\n",data[i],data[i+1]);
        }
        for(i=N;i>=0;i--)
        {
            if(data[i]!=0)
            {
                judge=1;
            }
            if(judge==1)
            {
                printf("%d",data[i]);
            }
        }
    }
    return 0;
}