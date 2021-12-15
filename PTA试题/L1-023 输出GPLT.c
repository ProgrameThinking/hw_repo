/*给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，按GPLTGPLT....这样的顺序输出，并忽略其它字符。
当然，四种字符（不区分大小写）的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按GPLT的顺序打印，直到所有字符都被输出。
输入格式：
输入在一行中给出一个长度不超过10000的、仅由英文字母构成的非空字符串。
输出格式：
在一行中按题目要求输出排序后的字符串。题目保证输出非空。*/

#include<stdio.h>
int main()
{
    char letter;
    int number[4]={0};
    int x,a=0;
    while(1)
    {
        letter=getchar();
        if(letter=='G'||letter=='g')
            number[0]++;
        else if(letter=='P'||letter=='p')
            number[1]++;
        else if(letter=='L'||letter=='l')
            number[2]++;
        else if(letter=='T'||letter=='t')
            number[3]++;
        else if(letter=='\n')
           break;
    }
    while(1)
    {
        if(number[1]<=0&&number[2]<=0&&number[0]<=0&&number[3]<=0)
            break;
        if(number[0]>0)
        {
            printf("G");
            number[0]--;
        }
        if(number[1]>0)
        {
            printf("P");
            number[1]--;
            a++;
        }
        if(number[2]>0)
        {
            printf("L");
            number[2]--;
            a++;
        }
        if(number[3]>0)
        {
            printf("T");
            number[3]--;
            a=0;
        }
    }
    return 0;
}