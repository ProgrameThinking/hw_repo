/*一群人坐在一起，每人猜一个 100 以内的数，谁的数字最接近大家平均数的一半就赢。本题就要求你找出其中的赢家。
输入格式：
输入在第一行给出一个正整数N（≤10000）。随后 N 行，每行给出一个玩家的名字（由不超过8个英文字母组成的字符串）和其猜的正整数（≤ 100）。
输出格式：
在一行中顺序输出：大家平均数的一半（只输出整数部分）、赢家的名字，其间以空格分隔。题目保证赢家是唯一的。*/

#include<stdio.h>
#include<math.h>
typedef struct
{
    char name[9];
    int number;
}mumber;

int main()
{
    int n,x,average=0,min;
    scanf("%d",&n);
    mumber a[n];
    for(x=0;x<n;x++)
        scanf("%s %d",a[x].name,&a[x].number);
    for(x=0;x<n;x++)
        average+=a[x].number;
    average/=n*2;
    min=fabs(a[0].number-average);
    for(x=0;x<n;x++)
    {
        if(min>=fabs(a[x].number-average))
            min=fabs(a[x].number-average);
    }
    for(x=0;x<n;x++)
    {
        if(min==(a[x].number-average))
            break;
    }
    printf("%d %s",average,a[x].name);
    return 0;
}