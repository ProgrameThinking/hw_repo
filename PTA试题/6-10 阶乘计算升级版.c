#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial ( const int N )
{
    if(N<0)
        printf("Invalid input");
    else
    {
        int result[500000]={1};
        int x,y,z,k=1;
        for(x=1;x<=N;x++)
        {
            for(y=0;y<k;y++)
                result[y]*=x;
            for(y=0;y<k;y++)
            {
                while(result[y]>9)
                {
                    result[y+1]+=result[y]/10;
                    result[y]%=10;
                    if(y+1==k)
                        k++;
                }
            }
        }
        for(z=k-1;z>=0;z--)
            printf("%d",result[z]);
    }
}