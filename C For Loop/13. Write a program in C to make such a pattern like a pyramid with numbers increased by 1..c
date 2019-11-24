#include<stdio.h>
int main()
{
    int i, j, k=1, n;
    printf("Enter the number of Inputs :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j <= n-i)
                printf(" ");
            else
                printf("%d ", k++);
        }
        printf("\n");
    }
}
