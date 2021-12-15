/*一条蠕虫长1寸，在一口深为N寸的井的底部。已知蠕虫每1分钟可以向上爬U寸，但必须休息1分钟才能接着往上爬。在休息的过程中，蠕虫又下滑了D寸。
就这样，上爬和下滑重复进行。请问，蠕虫需要多长时间才能爬出井？
这里要求不足1分钟按1分钟计，并且假定只要在某次上爬过程中蠕虫的头部到达了井的顶部，那么蠕虫就完成任务了。初始时，蠕虫是趴在井底的（即高度为0）。
输入格式：
输入在一行中顺序给出3个正整数N、U、D，其中D<U，N不超过100。
输出格式：
在一行中输出蠕虫爬出井的时间，以分钟为单位。*/

#include<stdio.h>
int main()
{
    int N,D,U;
    int m=0;
    int spare_time=0;
    int climbing_time=1;
    int route;
    scanf("%d%d%d",&N,&U,&D);
    route=N;
    for(climbing_time;route-U>0;climbing_time++)
    {
        route-=U;
        if(route==0)
        {
            continue;
        }
        route+=D;
        spare_time++;
    }
    printf("%d\n",spare_time+climbing_time);
    return 0;
}