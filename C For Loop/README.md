# C For Loop 

**01. Write a program in C to display the first 10 natural numbers**

```.c
#include<stdio.h>
int main()
{
    int i;
    printf("The First 10 Natural Number is : ");
    for( i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
}
```

**02. Write a C program to find the sum of first 10 natural numbers**

```.c
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
```

**03. Write a program in C to display n terms of natural number and their sum**

```.c
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

```

**04. Write a program in C to read 10 numbers from keyboard and find their sum and average**

```.c
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
```

**05. Write a program in C to display the cube of the number up to given an integer**

```.c
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
```

**06. Write a program in C to display the multiplication table of a given integer**

```.c
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
```

** 07. Write a program in C to display the multipliaction table vertically from 1 to n **

```.c
#include<stdio.h>
int main()
{
    int i, j, n, mul;
    printf("Enter the expected number that you want :");
    scanf("%d", &n);
    for(j=1; j<=n; j++)
    {
        for(i =1; i<=10; i++)
    {
        mul = j*i;
        printf("\n%d * %d = %d", j, i, mul);
    }
    printf("\n");
    }
}
```

** 08. Write a program in C to display the n terms of odd natural number and their sum **

```.c
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
```

** 09. Write a program in C to display the pattern like right angle triangle using an asterisk **

```.c
#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of input whatever you want : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*", j);
        }
        printf("\n");
    }
}
```

** 10. Write a program in C to display the pattern like right angle triangle with a number **

```.c
#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of input whatever you want : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
```

** 11. Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row **

```.c
#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of input whatever you want : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
```

** 12. Write a program in C to make such a pattern like right angle triangle with number increased by 1 **

```.c
#include<stdio.h>
int main()
{
    int i, j, n, k=1;
    printf("Enter the number of input whatever you want : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", k);
            k = k + 1;
        }
        printf("\n");
    }
}
```

** 13. Write a program in C to make such a pattern like a pyramid with numbers increased by 1 **

```.c
#include<stdio.h>
int main()
{
    int i, j, k=1, n;
    printf("Enter the number of Inputs :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j <= n-i)
                printf(" ");
            else
                printf("%d ", k++);
        }
        printf("\n");
    }
}
```

** 14. Write a program in C to make such a pattern like a pyramid with an asterisk **

```.c
#include<stdio.h>
int main()
{
    int i, n, j;
    printf("Enter any expected Inputs :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j <= n-i)
                printf(" ");
            else
                printf("* ");
                //printf("%d ", i);
                //printf("%d ", i);
        }
        printf("\n");
    }
}
```