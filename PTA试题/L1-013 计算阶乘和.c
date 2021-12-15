/*输入格式：
输入在一行中给出一个不超过10的正整数N。
输出格式：
在一行中输出S的值。*/

#include<stdio.h>

int factorial(int N);

int main()
{
    int n,sum,x;
    scanf("%d",&n);
    for(x=1;x<n+1;x++)
        sum+=factorial(x);
    printf("%d",sum);
    return 0;
}

int factorial(int N)
{
    if(N==1)
        return 1;
    else
        return N*factorial(N-1);
}