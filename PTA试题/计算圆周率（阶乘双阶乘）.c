/*根据下面关系式，求圆周率的值，直到最后一项的值小于给定阈值。
pi/2=Σ n!/n!!;
输入格式：
输入在一行中给出小于1的阈值。

输出格式：
在一行中输出满足阈值条件的近似圆周率，输出到小数点后6位。*/


#include<stdio.h>

double factorial(double N);
double double_factorial(float N);

int main()
{
    double error,branch;
    double pi=0;
    double N=0;
    scanf("%lf",&error);
    do
    {
        N++;
        branch=factorial(N)/double_factorial(N);
        pi+=branch;
    }while(branch>error);
    printf("%f",2*pi);
    return 0;
}

double factorial(double N)
{
    double n;
    double result=1;
    for(n=0;n<N;n++)
    {
        if(n==0)
        {
            result=1;
        }
        else
        {
        result*=n;
        }
    }
    return result;
}

double double_factorial(float N)
{
    double n;
    double even=1;
    double result=1;
    for(n=0;n<N;n++)
    {
        even=2*n+1;
        result*=even;
    }
    return result;
}