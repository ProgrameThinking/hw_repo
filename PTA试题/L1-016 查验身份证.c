/*一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：
首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；
然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：
Z：0 1 2 3 4 5 6 7 8 9 10
M：1 0 X 9 8 7 6 5 4 3 2
现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码。*/

#include<stdio.h>
#include<string.h>

void trans(char id[],int id_pre17[]);
int judge(char id[],int id_pre17[]);

int main()
{
    int n,x,y;
    int judgement=0;
    scanf("%d",&n);
    char id[19];
    char id2[19];
    int id_pre17[17];
    for(x=0;x<n;x++)
    {
        scanf("%s",id);
        strcpy(id2,id);
        trans(id2,id_pre17);
        if(judge(id,id_pre17))
        {
            printf("%s",id);
            judgement++;
        }
    }
    if(judgement==0)
        puts("All passed");
    return 0;
}

void trans(char id[],int id_pre17[])
{
    int x;
    for(x=0;x<17;x++)
        id_pre17[x]=(id[x]-'0');
    return;
}

int judge(char id[],int id_pre17[])
{
    int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char judge[12]={'1','0','X','9','8','7','6','5','4','3','2'};
    int number=0,x;
    for(x=0;x<17;x++)
        number+=(weight[x]*id_pre17[x]);
    number%=11;
    if(id[17]==judge[number])
        return 0;
    else
        return 1;
}