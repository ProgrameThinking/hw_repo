/*将整型数组内元素循环向左移若干位置。循环向左移位含义如下：
比如，原始数组a[0],a[1]...a[9]内元素依次为：1 2 3 4 5 6 7 8 9 10，循环向左移1位后，则a[0],a[1]...a[9]内元素依次为：
2 3 4 5 6 7 8 9 10 1，循环向左移2位后，则a[0],a[1]...a[9]内元素依次为：3 4 5 6 7 8 9 10 1 2。依次类推。*/


#include<stdio.h>

#define        LEN        100

//调整函数 
void distribute(int * bullets , int size , int number ) ;

int main()
{
    int        bullets[LEN] ;
    int        n , m , i ;    

    scanf("%d" , &n ) ;    //读入战士总数 
    for( i = 0 ; i < n ; i++ )
    {
        scanf("%d" , &bullets[i] ) ;//读入每个战士手中初始的子弹数 
    }
    scanf("%d" , &m ) ;//读入调整的次数（m>0) 
    distribute(bullets , n , m ) ;//调整 
    for( i = 0 ; i < n - 1 ; i++ )//输出调整后结果 
    {
        printf("%d " , bullets[i] ) ;
    }
    printf("%d\n" , bullets[i] ) ;

    return 0;    
}

void distribute(int * bullets , int size , int number ) 
{
    int y,x;
    int temp[size];
    for(y=0;y<number;y++)
    {
        for(x=0;x<size;x++)
        {
            if(bullets[x]%2==0)
            {
                temp[x]=bullets[x]/2;
                bullets[x]/=2;
            }
            else
            {
                bullets[x]++;
                temp[x]=bullets[x]/2;
                bullets[x]/=2;
            }
        }
        for(x=0;x<size;x++)
        {
            if(x<size-1)
                bullets[x+1]+=temp[x];
            else
                bullets[0]+=temp[x];
        }
    }
    return;
}