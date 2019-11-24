#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of input :");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=1; j<=n; j++)
            if(j<=n-i)
                printf(" ");
        for(j=1; j<=2*i-1; j++)
            if(j<=2*i-1)
                printf("*");
        printf("\n");
    }
}
