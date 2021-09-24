#include <stdio.h>
#include <stdlib.h>
int add(int a)
{
    if(a!= 1)
        return a + add(a-1);
    else
        return 1;
}

int factorial(int a)
{
    if(a != 1)
        return a * factorial(a-1);
    else
        return 1;
}

int power(int b, int p)
{
    if(p != 0)
        return b * power(b, p-1);
    else
        return 1;
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}
int main()
{
int i, fact, operator, sum, prod, p;
printf("\n\t\t\tRECURSIVES \n");
while(1)
{
    printf("\n\n\n\nEnter Operation(by key):");
    printf("\n1. +\n2. !\n3. **\n4. FABONACCI\n5. Exit\nKEY: ");

    scanf("%d", &operator);
    if (operator ==1 || operator == 2 || operator == 4)
    {
        printf("Enter Number: ");
        scanf("%d", &i);
    }
    switch (operator)
    {
        case 1:
            {
            sum = add(i);
            printf("Summation of %d CONSECUTIVE NATURAL NUMBERS = %d\n\n",i, sum);
            break;
            }
        case 2:
            {
            fact = factorial(i);
            printf("Factorial = %d\n\n", fact);
            break;
            }
        case 3:
            {
                printf("Enter Base, Power: ");
                scanf("%d %d", &i, &p);
                prod = power(i, p);
                printf("Product = %d", prod);
                break;
            }
        case 4:
            {
                printf("%d TERM IN FABONACHI SERIES : %d \n",i, fibonacci(i));
                break;
            }
        case 5:
            {
                exit(0);
                break;
            }

        default:
            {
                printf("Invalid Input");
            }
    }
    return 0;
}
}
