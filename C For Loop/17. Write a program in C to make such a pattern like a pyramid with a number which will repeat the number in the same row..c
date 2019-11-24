#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of Input :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j <= n-i)
                printf(" ");
            else
                printf("%d ", i);
        }
       printf("\n");
    }
}
