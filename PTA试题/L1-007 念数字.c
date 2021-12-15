/*输入格式：
输入在一行中给出一个整数，如：1234。
提示：整数包括负数、零和正数。
输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。*/

#include<stdio.h>

void speak_space(int num);
void speak_clear(int num);

int main()
{
    int num,x,y=0,z=0;
    int dig[20];
    scanf("%d",&num);
    if(num<0)
    {
        printf("fu");
        num*=-1;
        z++;
    }
    if(num==0)
    {
        printf("ling");
    }
    for(x=0;x<20;x++)
    {
        dig[x]=num%10;
        num/=10;
    }
    for(x=19;x>-1;x--)
    {
        if((dig[x]!=0)||(dig[x]==0&&y>0))
        {
            if(y==0&&z==0)
            {
                speak_clear(dig[x]);
                y++;
            }
            else
            {
                speak_space(dig[x]);
                y++;
            }
        }
    }
    return 0;
}

void speak_space(int num)
{
    if(num==1)
        printf(" yi");
    if(num==2)
        printf(" er");
    if(num==3)
        printf(" san");
    if(num==4)
        printf(" si");
    if(num==5)
        printf(" wu");
    if(num==6)
        printf(" liu");
    if(num==7)
        printf(" qi");
    if(num==8)
        printf(" ba");
    if(num==9)
        printf(" jiu");
    if(num==0)
        printf(" ling");
    return;
}

void speak_clear(int num)
{
    if(num==1)
        printf("yi");
    if(num==2)
        printf("er");
    if(num==3)
        printf("san");
    if(num==4)
        printf("si");
    if(num==5)
        printf("wu");
    if(num==6)
        printf("liu");
    if(num==7)
        printf("qi");
    if(num==8)
        printf("ba");
    if(num==9)
        printf("jiu");
    if(num==0)
        printf("ling");
    return;
}