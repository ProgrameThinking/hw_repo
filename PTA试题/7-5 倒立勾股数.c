/*写一段程序计算出在某个范围内共有多少组倒立勾股数。
输入格式:
只有一行，为两个用空格分隔的正整数,依次为m,n(0<m<n<=1000)。
输出格式:
只有一个整数，代表m和n之间倒立勾股数的组数
提示：
1、要x,y和z均满足大于等于m且小于等于n才计数。
2、15 20 12 与 20 15 12 是一组，不能算成2组。
3、虽然m,n均小于1001，但要考虑运算过程中整数是否溢出。*/

#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,x,y,z;
    int q=0;
    long a,b,c;
    scanf("%d %d",&m,&n);
    for(x=m;x<=n;x++)
    {
        for(y=x+1;y<=n;y++)
        {
            for(z=y+1;z<=n;z++)
            {
                a=x*x;
                b=y*y;
                c=z*z;
                if((a*(b+c))==(b*c)||b*(a+c)==a*c||c*(a+b)==a*b)
                {
                    q++;
                }
            }
        }
    }
    printf("%d",q);
    return 0;
}