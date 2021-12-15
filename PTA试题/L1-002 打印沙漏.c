/*本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印
*****
 ***
  *
 ***
*****
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。
给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。
输入格式:
输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。
输出格式:
首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。*/

#include<stdio.h>
int main()
{
    int N,n,m,t,q;
    int x=1;
    int y=1;
    char letter;
    scanf("%d",&N);
    getchar();
    letter=getchar();
    if(N<=6)
    {
        printf("%c\n",letter);
        printf("%d",N-1);
    }
    else
    {
        while(1)
        {
            y+=2;
            x+=2*y;
            if((x+2*(y+2))>N)
            {
                break;
            }
        }
        while(1)
        {
            for(n=y;n>=1;n-=2)
            {
                m=n;
                t=0.5*(y-m);
                for(t;t>0;t--)
                {
                    printf(" ");
                }
                for(m;m>0;m--)
                {
                    printf("%c",letter);
                }
                printf("\n");
            }
            for(n=3;n<=y;n+=2)
            {
                m=n;
                q=m;
                t=0.5*(y-m);
                for(t;t>0;t--)
                {
                    printf(" ");
                }
                for(m;m>0;m--)
                {
                    printf("%c",letter);
                }
                printf("\n");
            }
            break;
        }
        printf("%d",N-x);
    }
    return 0;
}