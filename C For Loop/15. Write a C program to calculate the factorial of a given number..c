#include<stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Input the number of Factorial :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    printf("The Factorial of %d is %d: ", n, fact);
    getch();
}
