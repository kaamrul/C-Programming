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

** 15. Write a C program to calculate the factorial of a given number **

```.c
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
```

** 16. Write a program in C to display the n terms of even natural number and their sum **

```.c
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
```

** 17. Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row **

```.c
#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of Input :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j <= n-i)
                printf(" ");
            else
                printf("%d ", i);
        }
       printf("\n");
    }
}
```

** 19. Write a program in C to display the n terms of harmonic series and their sum **

```.c
#include<stdio.h>
int main()
{
    int  n, i;
    float  x, sum = 0;
    printf("Input the number of terms :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        x = 1/(float)i;
        printf("1/%d + ", i);
        sum = sum + x;
    }
    printf("\nSum of Series up to %d terms: %f", n, sum);
}
```

** 20. Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks **

```.c
#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of input :");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=1; j<=n; j++)
            if(j<=n-i)
                printf(" ");
        for(j=1; j<=2*i-1; j++)
            if(j<=2*i-1)
                printf("*");
        printf("\n");
    }
}
```

** 21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...] **

```.c
#include<stdio.h>
int main()
{
    int i, n, sum=0, k=9;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + k;
        k = k*10+9;
        printf("%d ", k);
    }
    printf("\nThe sum of the series : %d", sum);
}
```

** 22. Write a program in C to print the Floyd's Triangle **

```.c
#include<stdio.h>
int main()
{
    int i, j, n, p, q;
    printf("Enter the expected number :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
            {
                p = 1;
                q = 0;
            }
        else
            {
                p = 0;
                q = 1;
            }
        for(j=1; j<=i; j++)
        {
            if(j%2 == 0)
                printf("%d", p);
            else
                printf("%d", q);
        }
        printf("\n");
    }
}
```