/*现要求你编写一个稳赢不输的程序，根据对方的出招，给出对应的赢招。但是！为了不让对方输得太惨，你需要每隔K次就让一个平局。
输入格式：
输入首先在第一行给出正整数K（≤10），即平局间隔的次数。随后每行给出对方的一次出招：
ChuiZi代表“锤子”、JianDao代表“剪刀”、Bu代表“布”。End代表输入结束，这一行不要作为出招处理。
输出格式：
对每一个输入的出招，按要求输出稳赢或平局的招式。每招占一行。*/

#include<stdio.h>
int main()
{
    int k,count=0,x,y;
    char p[8];
    scanf("%d",&k);
    while(1)
    {
        scanf("%s",p);
        if(p[0]=='E')
            break;
        count++;
        if(count<k+1)
        {
            switch(p[0])
            {
                case 'C':
                    puts("Bu");
                    break;
                case 'J':
                    puts("ChuiZi");
                    break;
                case 'B':
                    puts("JianDao");
                    break;
            }
        }
        else if(count==k+1)
        {
            count=0;
            printf("%s\n",p);
        }
    }
    return 0;
}