/*一个整数“犯二的程度”定义为该数字中包含2的个数与其位数的比值。如果这个数是负数，则程度增加0.5倍；如果还是个偶数，则再增加1倍。
例如数字-13142223336是个11位数，其中有3个2，并且是负数，也是偶数，则它的犯二程度计算为：3/11×1.5×2×100%，约为81.82%。
本题就请你计算一个给定整数到底有多二。*/

#include<stdio.h>
#include<string.h>

int main()
{
    char number[52];
    float index1=1;
    float index2=1;
    int x;
    int count=0;
    float result;
    gets(number);
    if(number[0]=='-')
        index1+=0.5;
    for(x=0;number[x]!='\0';x++)
    {
        if(number[x]=='2')
            count++;
        if((int)number[x]%2==0&&number[x+1]=='\0')
            index2+=1;
    }
    //printf("%.2f\n",index);
    if(number[0]=='-')
        x--;
    result=((float)count/(float)x)*index1*100*index2;
    printf("%.2f%%",result);
    return 0;
}