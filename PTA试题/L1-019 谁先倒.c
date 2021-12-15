/*划拳是古老中国酒文化的一个有趣的组成部分。酒桌上两人划拳的方法为：每人口中喊出一个数字，同时用手比划出一个数字。
如果谁比划出的数字正好等于两人喊出的数字之和，谁就输了，输家罚一杯酒。两人同赢或两人同输则继续下一轮，直到唯一的赢家出现。
下面给出甲、乙两人的酒量（最多能喝多少杯不倒）和划拳记录，请你判断两个人谁先倒。
输入格式：
输入第一行先后给出甲、乙两人的酒量（不超过100的非负整数），以空格分隔。下一行给出一个正整数N（≤100），随后N行，每行给出一轮划拳的记录，格式为：
甲喊 甲划 乙喊 乙划
其中喊是喊出的数字，划是划出的数字，均为不超过100的正整数（两只手一起划）。
输出格式：
在第一行中输出先倒下的那个人：A代表甲，B代表乙。第二行中输出没倒的那个人喝了多少杯。题目保证有一个人倒下。注意程序处理到有人倒下就终止，后面的数据不必处理。*/

#include<stdio.h>

void judge(int chart[4],int * max_a,int * max_b);

int main()
{
    int chart[4];
    int x,y,c,d,turn;
    int * max_a;
    int * max_b;
    scanf("%d%d%d",&c,&d,&turn);
    max_a=c;
    max_b=d;
    for(x=0;x<turn;x++)
    {
        for(y=0;y<4;y++)
        {
            scanf("%d",&chart[y]);
        }
        judge(chart,&max_a,&max_b);
        if((int)max_a==-1||(int)max_b==-1)
        {
            break;
        }
    }
    if((int)max_a==-1)
    {
        printf("A\n");
        printf("%d",d-(int)max_b);
    }
    else if((int)max_b==-1)
    {
        printf("B\n");
        printf("%d",c-(int)max_a);
    }
    return 0;
}

void judge(int chart[4],int * max_a,int * max_b)
{
    int a;
    a=chart[0]+chart[2];
    if(a==chart[1]&&a==chart[3])
    {
        return;
    }
    else if(a==chart[1])
    {
        *max_a-=1;
    }
    else if(a==chart[3])
    {
        *max_b-=1;
    }
    return;
}