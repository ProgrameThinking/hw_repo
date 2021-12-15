/*输入一个字符串和一个非负整数N，要求将字符串循环左移N次。
输入格式：
输入在第1行中给出一个不超过100个字符长度的、以回车结束的非空字符串；第2行给出非负整数N。
输出格式：
在一行中输出循环左移N次后的字符串。*/

#include<stdio.h>
#include<string.h>
int main()
{
	int n,x,y;
    char string[501];
    gets(string);
    scanf("%d",&n);
    for(x=0;string[x]!='\0';x++);
    n%=x;
	for(x=n;string[x]!='\0';x++)
		printf("%c",string[x]);
    for(x=0;x<n;x++)
        printf("%c",string[x]);
    return 0;
}