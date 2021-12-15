/*一个数组A中存有N（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移M（≥0）个位置，（最后M个数循环移至最前面的M个位置）。
如果需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？
输入格式:
每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；第2行输入N个整数，之间用空格分隔。
输出格式:
在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。*/

#include<stdio.h>
int main()
{
    int n,m,x;
    scanf("%d%d",&n,&m);
    if(m>=n)
        m%=n;
    int number[n+m];
    for(x=0;x<n;x++)
        scanf("%d",&number[x+m]);
    for(x=0;x<m;x++)
        number[x]=number[n+x];
    for(x=0;x<n;x++)
    {
        if(x==0)
            printf("%d",number[x]);
        else
            printf(" %d",number[x]);
    }
    return 0;
}