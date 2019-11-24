#include<stdio.h>
int main()
{
    int i, sum = 0;
    printf("Sum of The First 10 Natural Number is : ");
    for( i = 1; i <= 10; i++)
    {

        sum = sum + i;
    }
    printf("%d ", sum);
}

