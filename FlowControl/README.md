# Flow Control 

#### 01. Write a program called Time Table to produce the multiplication table of 1 to 5 as shown using two nested for-loops:
```
   * |   1   2   3   4   5  
---------------------------
   1 |   1   2   3   4   5  
   2 |   2   4   6   8  10 
   3 |   3   6   9  12  15 
   4 |   4   8  12  16  20  
   5 |   5  10  15  20  25
```
```.c
#include<stdio.h>
int main()
{
    printf("Time Table Using Nested for loop !\n");
    int i, j, n=5, k;
    printf("\n   * |");
    for(k=1; k<=n; k++)
            printf("%4d", k);
    printf("\n");
    printf("---------------------------\n");

    for(i=1; i<=n; i++)
    {
        printf("%4d |", i);
        for(j=1; j<=n; j++)
                printf("%4d",i*j);
        printf("\n");
    }
    return 0;
}
```

#### 02. Write a program called CozaLozaWoza which prints the numbers 1 to 110, 11 numbers per line. The program shall print "Coza" in place of the numbers which are multiples of 3, "Loza" for multiples of 5, "Woza" for multiples of 7, "CozaLoza" for multiples of 3 and 5, and so on.
  
**The output shall look like:**
1 2 Coza 4 Loza Coza Woza 8 Coza Loza 11 Coza 13 Woza CozaLoza 
16 17 Coza 19 Loza CozaWoza 22 23 Coza Loza 26 Coza Woza 29 
CozaLoza 31 32 Coza...

```.c
#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=110; i++)
    {
        if(i%3==0 && i%5==0 && i%7==0)
            printf("CozaLozaWoza ");
        else if(i%3==0 && i%5==0)
            printf("CozaLoza ");
        else if(i%3==0 && i%7==0)
            printf("CozaWoza ");
        else if(i%3==0)
            printf("Coza ");
        else if(i%5==0)
            printf("Loza ");
        else if(i%7==0)
            printf("Woza ");
        else if(i%3!=0 && i%5!=0 && i%7!=0)
            printf("%d ", i);
        if(i%11==0){
            printf("\n");}
    }
}
```
