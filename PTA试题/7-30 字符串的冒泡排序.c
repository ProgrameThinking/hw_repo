/*我们已经知道了将N个整数按从小到大排序的冒泡排序法。本题要求将此方法用于字符串序列，并对任意给定的K（<N），输出扫描完第K遍后的中间结果序列。
输入格式：
输入在第1行中给出N和K（1≤K<N≤100），此后N行，每行包含一个长度不超过10的、仅由小写英文字母组成的非空字符串。
输出格式：
输出冒泡排序法扫描完第K遍后的中间结果序列，每行包含一个字符串。*/

#include<stdio.h>
#include<string.h>
int main()
{
    int n,x,k,y;
    scanf("%d%d",&n,&k);
    char string[n][11];
    char temp[11];
    for(x=0;x<n;x++)
        scanf("%s",&string[x]);
    for(y=0;y<k;y++)
    {
        for(x=0;x<n-1;x++)
        {
            if(strcmp(string[x],string[x+1])>0)
            {
                strcpy(temp,string[x]);
                strcpy(string[x],string[x+1]);
                strcpy(string[x+1],temp);
            }
        }
    }
    for(x=0;x<n;x++)
        printf("%s\n",string[x]);
    return 0;
}