#include<stdio.h>
int main()
{
    int i, n, sum=0, k=9;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + k;
        k = k*10+9;
        printf("%d ", k);
    }
    printf("\nThe sum of the series : %d", sum);
}
