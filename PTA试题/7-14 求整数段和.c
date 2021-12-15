/*给定两个整数A和B，输出从A到B的所有整数以及这些数的和。
输入格式：
输入在一行中给出2个整数A和B，其中−100≤A≤B≤100，其间以空格分隔。
输出格式：
首先顺序输出从A到B的所有整数，每5个数字占一行，每个数字占5个字符宽度，向右对齐。最后在一行中按Sum = X的格式输出全部数字的和X。*/

#include<stdio.h>
int main()
{
    int A,B,m;
    int sum=0;
    int judge=0;
    scanf("%d%d",&A,&B);
    for(m=A;m<=B;m++)
    {
        printf("%5d",m);
        judge++;
        sum+=m;
        if(judge==5&&m!=B)
        {
            printf("\n");
            judge=0;
        }
    }
    printf("\nSum = %d",sum);
}