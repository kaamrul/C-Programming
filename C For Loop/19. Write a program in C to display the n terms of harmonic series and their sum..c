#include<stdio.h>
int main()
{
    int  n, i;
    float  x, sum = 0;
    printf("Input the number of terms :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        x = 1/(float)i;
        printf("1/%d + ", i);
        sum = sum + x;
    }
    printf("\nSum of Series up to %d terms: %f", n, sum);
}
