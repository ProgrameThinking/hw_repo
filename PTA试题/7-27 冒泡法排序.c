/*将N个整数按从小到大排序的冒泡排序法是这样工作的：从头到尾比较相邻两个元素，如果前面的元素大于其紧随的后面元素，则交换它们。
通过一遍扫描，则最后一个元素必定是最大的元素。然后用同样的方法对前N−1个元素进行第二遍扫描。依此类推，最后只需处理两个元素，就完成了对N个数的排序。
本题要求对任意给定的K（<N），输出扫描完第K遍后的中间结果数列。
输入格式：
输入在第1行中给出N和K（1≤K<N≤100），在第2行中给出N个待排序的整数，数字间以空格分隔。
输出格式：
在一行中输出冒泡排序法扫描完第K遍后的中间结果数列，数字间以空格分隔，但末尾不得有多余空格。*/

#include<stdio.h>

void inchange(int * x,int * y);

int main()
{
    int N,K,x,y,m,a,b;
    scanf("%d%d",&N,&K);
    int number[N];
    for(m=0;m<N;m++)
    {
        scanf("%d",&number[m]);
    }
    for(x=0;x<K;x++)
    {
        for(y=0;y<N-1;y++)
        {
            inchange(&number[y],&number[y+1]);
        }
    }
    for(y=0;y<N;y++)
    {
        if(y>0)
        {
            printf(" %d",number[y]);
        }
        else
        {
            printf("%d",number[y]);
        }
    }
    return 0;
}

void inchange(int * x,int * y)
{
    int temp;
    if(*y<*x)
    {
        temp=*y;
        *y=*x;
        *x=temp;
    }
    return;
}