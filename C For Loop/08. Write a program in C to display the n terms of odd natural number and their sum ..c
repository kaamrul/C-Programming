#include<stdio.h>
int main()
{
    int i, n, sum = 0, odd;
    printf("Input number of terms : ");
    scanf("%d", &n);
    printf("The Odd numbers are :");
    for(i=1; i<=n; i++)
    {
        odd = (2*i)-1;
        printf("%d ", odd);
        sum = sum + odd ;
    }
    printf("\nThe sum of Odd Natural Number upto %d terms : %d", n, sum);
    printf("\n");
}
