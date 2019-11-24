#include<stdio.h>
int main()
{
    int i, n, mul;
    printf("Enter the expected number that you want :");
    scanf("%d", &n);
    for(i =1; i<=10; i++)
    {
        mul = n*i;
        printf("\n%d * %d = %d", n, i, mul);
    }
    printf("\n");
}
