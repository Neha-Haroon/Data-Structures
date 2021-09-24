#include <stdio.h>
#include <stdlib.h>
int main()
{
// DECLARE
float farr[100];
int size, d;

printf("\n\t\t\tAddtion to Input Array\n");
while(1)
{
//ARRAY SIZE
printf("Enter Length Of Array: ");
scanf("%d", &size);

// ARRAY INPUT
printf("Enter Elements Of Array: \n");
for( int i = 0; i < size ; i++){
    printf("Value %d = ", i + 1);
    scanf("%f", &farr[i]);
}
printf("Enter the No. to add to whole array: ");
scanf("%d", &d);

// ARRAY INDEX OPERATION
for(int i = 0 ; i < size ; i++){
    farr[i] = farr[i] + d;
}

// ARRAY OUTPUT
for( int i = 0 ; i < size ; i++){
    printf("Value %d = %f\n", i + 1, farr[i]);
}
return 0;
}
}
