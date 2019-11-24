#include<stdio.h>
int main()
{
    int i, j, n, mul;
    printf("Enter the expected number that you want :");
    scanf("%d", &n);
    for(j=1; j<=n; j++)
    {
        for(i =1; i<=10; i++)
    {
        mul = j*i;
        printf("\n%d * %d = %d", j, i, mul);
    }
    printf("\n");
    }
}
