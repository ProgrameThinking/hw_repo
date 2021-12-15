/*请编写程序统计每种不同的个位数字出现的次数。例如：给定 N=100311，则有 2 个 0，3 个 1，和 1 个 3。
输入格式：
每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。
输出格式：
对 N 中每一种不同的个位数字，以 D:M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。*/

#include<stdio.h>
#define MAX 1000
int main()
{
    char number[MAX];
    int statistics[10]={0,0,0,0,0,0,0,0,0,0};
    char * ptr[MAX];
    int x=0;
    int y,z,t;

    scanf("%s",&number);
    while(x<MAX)
    {
        if(number[x]=='\0')
        {
            break;
        }
        ptr[x]=number[x];
        x++;
    }
    for(y=0;y<x;y++)
    {
        t=ptr[y];
        for(z=0;z<10;z++)
        {
            if(t-48==z)
            {
                statistics[z]++;            
            }
        }
    }
    for(z=0;z<10;z++)
    {
        if(statistics[z]!=0)
        {
            printf("%d:%d\n",z,statistics[z]);
        }
    }
    return 0;
}