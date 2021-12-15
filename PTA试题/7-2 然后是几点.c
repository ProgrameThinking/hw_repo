/*有时候人们用四位数字表示一个时间，比如 1106 表示 11 点零 6 分。现在，你的程序要根据起始时间和流逝的时间计算出终止时间。
读入两个数字，第一个数字以这样的四位数字表示当前时间，第二个数字表示分钟数，计算当前时间经过那么多分钟后是几点，结果也表示为四位数字。当小时为个位数时，
没有前导的零，例如 5 点 30 分表示为 530；0 点 30 分表示为 030。注意，第二个数字表示的分钟数可能超过 60，也可能是负数。
输入格式：
输入在一行中给出 2 个整数，分别是四位数字表示的起始时间、以及流逝的分钟数，其间以空格分隔。注意：在起始时间中，当小时为个位数时，没有前导的零，
即 5 点 30 分表示为 530；0 点 30 分表示为 030。流逝的分钟数可能超过 60，也可能是负数。
输出格式：
输出不多于四位数字表示的终止时间，当小时为个位数时，没有前导的零。题目保证起始时间和终止时间在同一天内。*/

#include<stdio.h>

int time_switching(int start,int time);

int main()
{
    int start=0,end=0,time=0;
    scanf("%d%d",&start,&time);
    end=time_switching(start,time);
    if(end>=10&&end<100)
    {
        printf("0%d",end);
    }
    else if(0<end&&end<10)
    {
        printf("00%d",end);
    }
    else if(end==0)
    {
        printf("000");
    }
    else
    {
        printf("%d",end);
    }
    return 0;
}

int time_switching(int start,int time)
{
    int end=0,minute_start=0,minute_end=0,hour=0,hour_start=0;
    minute_start=start%100;
    hour_start=start/100;
    if(time>=0)
    {
        hour=(minute_start+time)/60;
        minute_end=(minute_start+time)%60;
        end=hour_start*100+100*hour+minute_end;
    }
    else if(time<0)
    {
        hour=(minute_start+time)/60;
        minute_end=(minute_start+time)%60;
        if(minute_end<0)
        {
            end=(hour_start+hour-1)*100+(60+minute_end);
        }
        else
        {
            end=hour_start*100+100*hour+minute_end;
        }
    }
    return end;
}