#include<stdio.h>
int main()
{
    int i, n, sum =0, even;
    printf("The Input number of terms :");
    scanf("%d", &n);
    printf("The even numbers are: ");
    for(i=1; i<=n; i++)
    {
        even = 2*i;
        printf("%d ", even);
        sum = sum + even;
    }
    printf("\nThe Sum of even Natural Number up to %d terms : %d", n, sum);
}
