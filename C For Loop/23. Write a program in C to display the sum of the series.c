#include<stdio.h>
int main()
{
    float x, sum = 1, r = 1;
    int i, n;
    printf("Input the value of X : ");
    scanf("%f", &x);
    printf("Input the number of terms :");
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        r = r*x/(float)i;
        sum = sum + r;
    }
    printf("The sum is : %f", sum);
}
