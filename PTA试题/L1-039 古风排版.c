/*中国的古人写文字，是从右向左竖向排版的。本题就请你编写程序，把一段文字按古风排版。
输入格式：
输入在第一行给出一个正整数N（<100），是每一列的字符数。第二行给出一个长度不超过1000的非空字符串，以回车结束。
输出格式：
按古风格式排版给定的字符串，每列N个字符（除了最后一列可能不足N个）。*/

#include<stdio.h>
#define MAX 2000
int main()
{
    char letter[MAX];
    int col,row,total,x,y,q=0,z;
    scanf("%d",&row);
    getchar();
    gets(letter);
    for(total=0;letter[total]!='\0';total++);
    if(total%row==0)
        col=total/row;
    else
        col=total/row+1;
    char output[row][col];
    for(y=col-1;y>=0;y--)
    {
        for(z=0;z<row;z++)
        {
            output[z][y]=letter[q];
            q++;
            if(q>total)
                 output[z][y]=' ';
        }
    }
    for(x=0;x<row;x++)
    {
        for(y=0;y<col;y++)
        {
            printf("%c",output[x][y]);
        }
        printf("\n");
    }
    return 0;
}