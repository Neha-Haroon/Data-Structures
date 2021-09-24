#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, b;
printf("\n\t\t Arithmetic Operations Two Integers: \n\n");

printf("Enter TWO Integers :\n");
scanf("%d \n %d \n", &a, &b);

int add = a + b;
int subs = a - b;
int product = a * b;
int ratio = a / b;
int sqa =a * a;
int sqb = b * b;

printf("Sum = %d \n", add);
printf("Substration = %d \n", subs);
printf("Product = %d \n", product);
printf("Ratio = %d \n", ratio);
printf("Sqr of %d = %d \n" ,a , sqa);
printf("Sqr of %d = %d \n" , b, sqb);
return 0;
}
