/*给定一个华氏温度F，本题要求编写程序，计算对应的摄氏温度C。计算公式：C=5×(F−32)/9。题目保证输入与输出均在整型范围内。
输入格式:
输入在一行中给出一个华氏温度。
输出格式:
在一行中按照格式“Celsius = C”输出对应的摄氏温度C的整数值。*/

#include<stdio.h>
int main()
{
    int Fahrenheit,Celsius;
    scanf("%d",&Fahrenheit);
    Celsius=5*(Fahrenheit-32)/9;
    printf("Celsius = %d",Celsius);
    return 0;
}