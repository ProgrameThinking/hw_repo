/*输入2个字符串S1和S2，要求删除字符串S1中出现的所有子串S2，即结果字符串中不能包含S2。
输入格式：
输入在2行中分别给出不超过80个字符长度的、以回车结束的2个非空字符串，对应S1和S2。
输出格式：
在一行中输出删除字符串S1中出现的所有子串S2后的结果字符串。*/

#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,k=0,z,q,p=0;
    int judge=0;
    char string1[90];
    char string2[90];
    gets(string1);
    gets(string2);
    q=strlen(string1);
    while(judge==0)
    {
        for(x=0;x<q;x++)
        {
            if(string1[x]==string2[0])
            {
                for(y=0;y<strlen(string2);y++)
                {
                    if(string1[x+y]==string2[y])
                        k++;
                    if(k==strlen(string2))
                    {
                        q-=k;
                        for(z=x;string1[z+k]!='\0';z++)
                            string1[z]=string1[z+k];
                        k=0;
                    }
                }
            }
        }
        if(q==0)
            break;
        for(x=0;x<q;x++)
        {
            if(string1[x]==string2[0])
            {
                for(y=0;y<strlen(string2);y++)
                {
                    if(string1[x+y]==string2[y])
                        p++;   
                }
            }
            if(p==strlen(string2))
            {
                judge=0;
                p=0;
                break;
            }
            else
            {
                judge=1;
                p=0;
            }
        }
    }
    for(x=0;x<q;x++)
        printf("%c",string1[x]);
    return 0;
}