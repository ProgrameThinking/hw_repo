/*本题要求实现一个函数，判断任一给定整数N是否满足条件：它是完全平方数，又至少有两位数字相同，如144、676等。*/

#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

int IsTheNumber ( const int N )
{
    int copy=N,judge=0,x;
    int number[10]={0};
    if((int)sqrt(N)*(int)sqrt(N)==N)
    {
        for(x=0;x<10;x++)
        {
            if(x==(copy%10))
            {
                number[x]++;
                copy/=10;
                x=-1;
                if(copy==0)
                    break;
            }
        }
        for(x=0;x<10;x++)
        {
            if(number[x]>1)
                judge=1;
        }
    }
    return judge;
}