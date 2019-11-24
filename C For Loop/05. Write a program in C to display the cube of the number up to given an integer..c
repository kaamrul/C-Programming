#include<stdio.h>
#include<math.h>
int main()
{
    int i, n, cube;
    printf("Inputs the number of terms : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        cube = pow(i,3);
        printf("\nNumber is : %d and cube of the %d is :%d ", i, i, cube);
    }
    printf("\n");
}
