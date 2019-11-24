#include<stdio.h>
#include<math.h>
int main()
{
    int i, n, x, y, r;
    int sum = 0;
    printf("Input the value of X :");
    scanf("%d", &x);
    printf("Input number of terms :");
    scanf("%d", &n);
    printf("The values of the series are : ");
    for(i=1; i<=n; i++)
    {
        r = 2*i-1;
        y = pow(x, r);
        printf("%d + ", y);
        sum = sum + y;
    }
    printf("\nSum of the Series are : %d", sum);
}
