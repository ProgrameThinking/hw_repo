/*已知一个只包含0和1的二进制数，二进制数的长度不大于10。你的任务是将其转换为十进制数并打印出来。 提示：用除法和求余运算每次从右到左获取二进制整数的各位数字。
在十进制数值系统中，最右边的数字是个位，个位的左边依次是十位、百位、千位等等。
与之类似，在二进制数值系统中，最右边的数字是1位，左边的数字依次为2位、4位、8位等等。
输入格式:
为一个只包含0和1的整数n（长度不超过10位），代表二进制数。
输出格式:
为转换得到的十进制数*/

#include<stdio.h>
#include<math.h>
int main()
{
    int N,y,x,m,n,t;
    int z=0;
    scanf("%d",&N);
    for(x=0;x<=10;x++)
    {
        y=pow(10,x);
        if(N%y==N)
        {
            break;
        }
    }
    for(m=0;m<=x;m++)
    {
        n=pow(10,m+1);
        t=((N%n)/pow(10,m));
        z+=t*pow(2,m);
    }
    printf("%d",z);
    return 0;
}