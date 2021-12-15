/*回文是指正读和反读都一样的数或文本段。例如，12321、55555、45554、11611都是回文数。输入一个长度不超过10位的整数n，判断它是否是回文数。
输入格式:
只有一个整数n，即待判断的数字。测试用例保证n可以用int存储。
输出格式:
当n为回文数时输出“Yes”，否则输出“No”。*/

#include<stdio.h>
#include<math.h>

int reserve(int N);

int main()
{
    int N;
    scanf("%d",&N);
    if(N==reserve(N))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

int reserve(int N)
{
    int x,m,y,n,t;
    int z=0;
    for(x=0;x<=10;x++)
    {
        y=pow(10,x);
        if(N%y==N)
        {
            break;
        }
    }
    for(m=0;m<=x;m++)
    {
        n=pow(10,m+1);
        t=((N%n)/pow(10,m));
        z+=t*pow(10,x-m-1);
    }
    return z;
}