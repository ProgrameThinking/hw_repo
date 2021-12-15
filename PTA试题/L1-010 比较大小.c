/*本题要求将输入的任意3个整数从小到大输出。
输入格式:
输入在一行中给出3个整数，其间以空格分隔。
输出格式:
在一行中将3个整数从小到大输出，其间以“->”相连。*/

#include<stdio.h>

void large_of(int * x,int * y);

int main()
{
    int x,y,z,max;
    scanf("%d%d%d",&x,&y,&z);
    large_of(&x,&y);
    large_of(&x,&z);
    large_of(&y,&z);
    printf("%d->%d->%d",x,y,z);
    return 0;
}

void large_of(int * x,int * y)
{
    int temp;
    if(*x>*y)
    {
        temp=*x;
        *x=*y;
        *y=temp;
    }
}