/*通讯录中的一条记录包含下述基本信息：朋友的姓名、出生日期、性别、固定电话号码、移动电话号码。 本题要求编写程序，录入N条记录，并且根据要求显示任意某条记录。
输入格式：
输入在第一行给出正整数N（≤10）；随后N行，每行按照格式姓名 生日 性别 固话 手机给出一条记录。其中姓名是不超过10个字符、
不包含空格的非空字符串；生日按yyyy/mm/dd的格式给出年月日；性别用M表示“男”、F表示“女”；固话和手机均为不超过15位的连续数字，前面有可能出现+。
在通讯录记录输入完成后，最后一行给出正整数K，并且随后给出K个整数，表示要查询的记录编号（从0到N−1顺序编号）。数字间以空格分隔。
输出格式：
对每一条要查询的记录编号，在一行中按照姓名 固话 手机 性别 生日的格式输出该记录。若要查询的记录不存在，则输出Not Found。*/

#include<stdio.h>

typedef struct
{
    char name[15];
    char brithday[15];
    char sexual;
    char telephone[17];
    char mobilephone[17];
}MESSAGE;

int main()
{
    int n,x,y,m;
    scanf("%d",&n);
    MESSAGE mseeage[n];
    for(x=0;x<n;x++)
        scanf("%s %s %c %s %s",mseeage[x].name,mseeage[x].brithday,&mseeage[x].sexual,mseeage[x].telephone,mseeage[x].mobilephone);
    scanf("%d",&m);
    int search[m];
    for(x=0;x<m;x++)
        scanf("%d",&search[x]);
    for(x=0;x<m;x++)
    {
        if(search[x]>=0&&search[x]<n)
            printf("%s %s %s %c %s\n",mseeage[search[x]].name,mseeage[search[x]].telephone,mseeage[search[x]].mobilephone,mseeage[search[x]].sexual,mseeage[search[x]].brithday);
        else
            printf("Not Found\n");
    }
    return 0;
}