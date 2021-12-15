/*二分法求函数根的原理为：如果连续函数f(x)在区间[a,b]的两个端点取值异号，即f(a)f(b)<0，则它在这个区间内至少存在1个根r，即f(r)=0。

二分法的步骤为：

检查区间长度，如果小于给定阈值，则停止，输出区间中点(a+b)/2；否则
如果f(a)f(b)<0，则计算中点的值f((a+b)/2)；
如果f((a+b)/2)正好为0，则(a+b)/2就是要求的根；否则
如果f((a+b)/2)与f(a)同号，则说明根在区间[(a+b)/2,b]，令a=(a+b)/2，重复循环；
如果f((a+b)/2)与f(b)同号，则说明根在区间[a,(a+b)/2]，令b=(a+b)/2，重复循环。
本题目要求编写程序，计算给定3阶多项式f(x)=a3*x*x*x+a2*x*x+a1*x+a0 在给定区间[a,b]内的根。*/

#include<stdio.h>

float function(float a3,float a2,float a1,float a0,float x);
int judgement(float result1,float result2,float result3);

int main()
{
    float a0,a1,a2,a3,a,b,x;
    float result1,result2,result3;
    int judge=0;

    scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
    getchar();
    scanf("%f%f",&a,&b);
    result1=function(a3,a2,a1,a0,a);
    result2=function(a3,a2,a1,a0,b);
    if(result2*result1<0)
    {
        while(judge!=1)
        {
            x=(a+b)/2;
            result3=function(a3,a2,a1,a0,x);
            if(result3>=-10e-6&&result3<=10e-6)
                result3=0;
            judge=judgement(result1,result2,result3);
            if(judge==2)
                b=x;
            else if(judge==3)
                a=x;
        }
        printf("%.2f",x);
        return 0;
    }
    else if(result2==0)
        printf("%.2f",b);
    else if(result1==0)
        printf("%.2f",a);
    return 0;
}

float function(float a3,float a2,float a1,float a0,float x)
{
    float result;
    result=a3*x*x*x+a2*x*x+a1*x+a0;
    return result;
}

int judgement(float result1,float result2,float result3)
{
    if(result3==0)
        return 1;
    if(result1*result3<0)
        return 2;
    else
        return 3;
}