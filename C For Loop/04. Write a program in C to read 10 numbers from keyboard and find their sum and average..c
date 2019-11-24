#include<stdio.h>
int main()
{
    int i, sum = 0;
    float n, average;
    printf("Input The number what you want :");
    scanf("%f", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of given number is : %d", sum);
    average = sum / n;
    printf("\nThe Average is : %.2f", average);
    printf("\n");
}
