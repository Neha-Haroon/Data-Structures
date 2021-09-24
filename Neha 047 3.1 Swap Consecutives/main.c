#include <stdio.h>
#include <stdlib.h>
void swap_consecutives(int *a, int *b){
    int  temp =*a;
    *a= *b;
    *b= temp;
}
int main()
{
// Q3 INPUT INT ARRAY SWAP EVERY 2 CONSECUTIVE NUMBERS
int arr[10];
// INPUT ARRAY
int i;
for(i = 0; i<10; i++){
        printf("Enter Value: ");
        scanf("%d", &arr[i]);
}

for ( i =0; i <5; i++){
        swap_consecutives(&arr[2*i], &arr[2*i+1]);
}

for(i= 0;i<10; i++){
        printf("%d\n", arr[i]);
}
return 0;
}
