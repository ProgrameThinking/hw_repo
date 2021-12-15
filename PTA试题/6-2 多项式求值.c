#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;

    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}

double f( int n, double a[], double x )
{
  double result=0;
  double branch=0;
  int b,p;
  double x_power=1;
  int m=0;

  for(b=0;b<=n;b++)
  {
    p=b;
    for(m;m<b;m++)
    {
      x_power*=x;
    }

    branch=a[p]*x_power;  
    result+=branch;
  }

  return result;
}