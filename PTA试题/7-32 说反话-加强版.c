/*给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。  
输入格式： 测试输入包含一个测试用例，在一行内给出总长度不超过500 000的字符串。字符串由若干单词和若干空格组成，
其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用若干个空格分开。  
输出格式： 每个测试用例的输出占一行，输出倒序后的句子，并且保证单词间只有1个空格。*/

#include<stdio.h>
int main()
{
    char s[500001];
    int space=1,word=1,y=0,x;
    int b[250000];
    gets(s);
    for(x=0;s[x]!='\0';x++)
    {
        if(s[x]==' ')
        {
            space=1;
            word=0;
        }
        else if(s[x]!=' '&&space==1)
        {
            space=0;
            word=1;
            b[y]=x;
            y++;
        }
    }
    for(y--;y>=1;y--)
    {
        while(s[b[y]]!=' '&&s[b[y]]!='\0')
        {
            printf("%c",s[b[y]]);
            b[y]++;
        }
        printf(" ");
    }
    while(s[b[y]]!=' '&&s[b[y]]!='\0')
    {
        printf("%c",s[b[0]]);
        b[y]++;
    }
    return 0;
}