/*本题要求实现一个常用圆形体体积的计算器。计算公式如下：
输入格式：
在每次计算之前，要求输出如下界面：
1-Ball
2-Cylinder
3-Cone
other-Exit
Please enter your command:
然后从标准输入读进一个整数指令。
输出格式：
如果读入的指令是1或2或3，则执行相应的体积计算；如果是其他整数，则程序结束运行。
当输入为1时，在计算球体体积之前，打印Please enter the radius:，然后读入球体半径，完成计算；
当输入为2时，在计算圆柱体体积之前，打印Please enter the radius and the height:，然后读入底圆半径和高，完成计算；
当输入为3时，在计算圆锥体体积之前，打印Please enter the radius and the height:，然后读入底圆半径和高，完成计算。
计算结果在一行内输出，保留小数点后两位。*/

#include<stdio.h>
#define pi 3.1415926535

void menu(void);

int main()
{
    long command;
    float radius,height,v1,v2,v3;
    menu();
    while(1)
    {
        scanf("%ld",&command);
        if(command==1)
        {
            printf("Please enter the radius:\n");
            scanf("%f",&radius);
            v1=4*(pi*radius*radius*radius)/3;
            printf("%.2f\n",v1);
            menu();
        }
        else if(command==2)
        {
            printf("Please enter the radius and the height:\n");
            scanf("%f %f",&radius,&height);
            v2=pi*radius*radius*height;
            printf("%.2f\n",v2);
            menu();
        }
        else if(command==3)
        {
            printf("Please enter the radius and the height:\n");
            scanf("%f %f",&radius,&height);
            v3=pi*radius*radius*height/3;
            printf("%.2f\n",v3);
            menu();
        }
        else
            break;
    }
    return 0;
}

void menu(void)
{
    printf("1-Ball\n");
    printf("2-Cylinder\n");
    printf("3-Cone\n");
    printf("other-Exit\n");
    printf("Please enter your command:\n");
    return;
}