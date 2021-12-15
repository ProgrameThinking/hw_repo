/*当芸芸众生忙着在朋友圈中发照片的时候，总有一些人因为太帅而没有朋友。本题就要求你找出那些帅到没有朋友的人。
输入格式：
输入第一行给出一个正整数N（≤100），是已知朋友圈的个数；随后N行，每行首先给出一个正整数K（≤1000），为朋友圈中的人数，
然后列出一个朋友圈内的所有人——为方便起见，每人对应一个ID号，为5位数字（从00000到99999），ID间以空格分隔；之后给出一个正整数M（≤10000），
为待查询的人数；随后一行中列出M个待查询的ID，以空格分隔。
注意：没有朋友的人可以是根本没安装“朋友圈”，也可以是只有自己一个人在朋友圈的人。虽然有个别自恋狂会自己把自己反复加进朋友圈，
但题目保证所有K超过1的朋友圈里都至少有2个不同的人。
输出格式：
按输入的顺序输出那些帅到没朋友的人。ID间用1个空格分隔，行的首尾不得有多余空格。如果没有人太帅，则输出No one is handsome。
注意：同一个人可以被查询多次，但只输出一次。*/


#include<stdio.h>

int deal(int num[],int n);

int main()
{
    int fr[100000]={0};
    int ans[3000];
    int a=0;
    int n,x,y,k,clear,q;
    int judge=0;
    scanf("%d",&n);
    for(x=0;x<n;x++)
    {
        scanf("%d",&k);
        if(k==1)
            scanf("%d",&clear);
        else
        {
            for(y=0;y<k;y++)
            {
                scanf("%d",&clear);
                fr[clear]=1;
            }
        }
    }
    scanf("%d",&clear);
    for(x=0;x<clear;x++)
    {
        scanf("%d",&q);
        if(fr[q]==0)
        {
            ans[a]=q;
            a++;
            judge=1;
        }
    }
    a=deal(ans,a);
    for(x=0;x<a;x++)
    {
        if(x==0)
            printf("%05d",ans[x]);
        else if(x<a-1)
            printf(" %05d",ans[x]);
        else if(x==a-1)
            printf(" %05d\n",ans[x]);
    }
    if(!judge)
        printf("No one is handsome\n");
    return 0;
}

int deal(int num[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;++i)	
	{
        for(j=i+1;j<n;++j)
            if(num[i]==num[j])
            {
                for(k=j;k<n-1;++k)
                    num[k]=num[k+1];
                --n;
    		    --j;
   	   		}
   }
    return n;
}