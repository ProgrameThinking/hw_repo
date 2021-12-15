/*本题要求对任意给定的正整数N，求方程pow(x,2)+pow(y,2)=N的全部正整数解。
输入格式：
输入在一行中给出正整数N（≤10000）。
输出格式：
输出方程pow(x,2)+pow(y,2)=N的全部正整数解，其中X≤Y。每组解占1行，两数字间以1空格分隔，按X的递增顺序输出。如果没有解，则输出No Solution。*/

#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,N;
    int t=0;
    scanf("%d",&N);
    for(X=0;X<(sqrt(N));X++)
    {
        for(Y=X;Y<(sqrt(N));Y++)
        {
            if((pow(X,2)+pow(Y,2))==N)
            {
                printf("%d %d\n",X,Y);
                t++;
            }
        }
    }
    if(t==0)
    {
        printf("No Solution");
    }
    return 0;
}