/*乌龟与兔子进行赛跑，跑场是一个矩型跑道，跑道边可以随地进行休息。乌龟每分钟可以前进3米，兔子每分钟前进9米；兔子嫌乌龟跑得慢，觉得肯定能跑赢乌龟，
于是，每跑10分钟回头看一下乌龟，若发现自己超过乌龟，就在路边休息，每次休息30分钟，否则继续跑10分钟；而乌龟非常努力，一直跑，不休息。假定乌龟与兔子在同一起
点同一时刻开始起跑，请问T分钟后乌龟和兔子谁跑得快？
输入格式：
输入在一行中给出比赛时间T（分钟）。
输出格式：
在一行中输出比赛的结果：乌龟赢输出@_@，兔子赢输出^_^，平局则输出-_-；后跟1空格，再输出胜利者跑完的距离。*/

#include<stdio.h>
int main()
{
   int T,route,deta,loop;
   const int ra_sp=9;
   const int to_sp=3;
   scanf("%d",&T);
   deta=T%90;
   loop=T/90;
   if(0<deta&&deta<=10)
   {
       route=loop*270+deta*ra_sp;
       printf("^_^ %d",route);
   } 
   else if(10<deta&&deta<30)
   {
       route=loop*270+10*ra_sp;
       printf("^_^ %d",route);
   }
   else if(deta==30)
   {
       route=270*loop+deta*to_sp;
        printf("-_- %d",route);
   }
   else if(deta>30&&deta<45)
   {
       route=loop*270+deta*to_sp;
       printf("@_@ %d",route);
   }
   else if(deta==45)
   {
       route=270*loop+deta*to_sp;
        printf("-_- %d",route);
   }
   else if(deta>45&&deta<50)
   {
       route=loop*270+135+(deta-45)*ra_sp;
       printf("^_^ %d",route);
   }
   else if(50<=deta&&deta<60)
   {
       route=loop*270+20*ra_sp;
       printf("^_^ %d",route);
   }
   else if(deta==60)
   {
        route=270*loop+deta*to_sp;
        printf("-_- %d",route);
   }
   else if(60<deta&&deta<85)
   {
       route=loop*270+deta*to_sp;
       printf("@_@ %d",route);
   }
   if(deta==85)
   {
       route=270*loop+deta*to_sp;
        printf("-_- %d",route);
   }
   else if(85<deta&&deta<90)
   {
       route=loop*270+(deta-85)*ra_sp+225;
       printf("^_^ %d",route);
   }
   else if(deta==0)
   {
       route=270*loop+deta*to_sp;
        printf("-_- %d",route);
   }
   return 0;
}