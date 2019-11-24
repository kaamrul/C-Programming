#include<stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Input Value of terms: ");
    scanf("%d", &n);
    printf("\nThe first %d natural number is : ", n);
    for( i = 1; i <= n; i++)
    {
        printf("%d", i);
        sum = sum + i;
    }
    printf("\n\nThe Sum of Natural Number up to 7 terms : %d ", sum);
    printf("\n\n");
}

