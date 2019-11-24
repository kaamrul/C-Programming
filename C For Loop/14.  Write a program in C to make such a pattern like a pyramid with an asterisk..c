#include<stdio.h>
int main()
{
    int i, n, j;
    printf("Enter any expected Inputs :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j <= n-i)
                printf(" ");
            else
                printf("* ");
                //printf("%d ", i);
                //printf("%d ", i);
        }
        printf("\n");
    }
}
