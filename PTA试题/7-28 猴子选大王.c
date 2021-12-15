/*一群猴子要选新猴王。新猴王的选择方法是：让N只候选猴子围成一圈，从某位置起顺序编号为1~N号。从第1号开始报数，每轮从1报到3，凡报到3的猴子即退出圈子，
接着又从紧邻的下一只猴子开始同样的报数。如此不断循环，最后剩下的一只猴子就选为猴王。请问是原来第几号猴子当选猴王？
输入格式：
输入在一行中给一个正整数N（≤1000）。
输出格式：
在一行中输出当选猴王的编号。*/

#include<stdio.h>
#define MAX 1001

int main()
{
    int monkey[MAX]={0};
    int n,x;
    int count=0,judge=0;
    scanf("%d",&n);
    for(x=1;x<n+1;x++)
        monkey[x]=1;
    for(x=1;x<n+1;x++)
    {
        if(monkey[x])
        {
            count++;
            judge++;
            //printf("%d judge\n",judge);
        }   
        if((monkey[x]==1)&&(count==3))
        {
            monkey[x]=0;
            count=0;
        }
        if(x==n&&judge==1)
            break;
        else if(x==n&&judge!=1)
        {
            x=0;
            judge=0;
        }
    }
    for(x=1;x<n+1;x++)
    {
        if(monkey[x])
            printf("%d",x);
    }
    return 0;
}