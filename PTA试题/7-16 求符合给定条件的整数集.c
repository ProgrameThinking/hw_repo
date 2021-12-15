/*给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。*/
#include<stdio.h>
int main()
{
    int n,x,y,z,judge=0;
    scanf("%d",&n);
    for(x=n;x<n+4;x++)
    {
        for(y=n;y<n+4;y++)
        {
            if(x==y)
                continue;
            for(z=n;z<n+4;z++)
            {
                if(x==z||y==z)
                    continue;
                if(judge<5)
                {
                    judge++;
                    printf("%d%d%d ",x,y,z);
                }
                else if(judge==5)
                {
                    judge++;
                    printf("%d%d%d",x,y,z);
                }
                else if(judge>5)
                {
                    judge=0;
                    printf("\n");
                    y=n;
                    z=n;
                }
            }
        }
    }
    return 0;
}