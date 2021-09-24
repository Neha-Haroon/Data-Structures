#include <stdio.h>
#include <stdlib.h>
/*void swap_func(int a, int b){
    int temp= a;
    a = b;
    b = temp;

    for (int c = 0; c < n; c++)
        printf("%d\n", array[c]);
}*/
int main()
{
/*
while(1>0){
    int i,j , data[10] , temp, a, b;
    printf("Welcome To  Bubble Sorting System !!!! \n");

    printf("Enter Value For Array :\n ");   // input of ARRAY
    for(i=0; i<10; i++){
                printf("Value  %d  :", i+1);
                scanf("%d", &data[i]);
    }
    for(i=0; i<10; i++){        // SORT TWO CONSECUTIVE VALUES OF ARRAY
        for(j = 0 ; j <  ; j++){
            if(data[i] > data[i+1]){
                    temp = data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
            }
        }
    }
    for(i =0; i<10; i++){       // PRINT SORTED ALGORITHM
        printf("%d ",data[i]);
    }
}*/
int array[100], length, table, swap, index;

printf("Welcome To  Bubble Sorting System !!!! \n");

//   ARRAY SIZE
printf("Enter number of elements\n");
scanf("%d", &length);

//  ARRAY INPUT
printf("Enter %d integers\n", length);
for (index= 0; index < length; index++)
    scanf("%d", &array[index]);

// ARRAY SORT IF A > B
for (table = 0 ; table < length - 1; table++)
{
        for (index = 0 ; index < length - table - 1; index++)
        {
            if (array[index] > array[index+1]) /* For decreasing order use '<' instead of '>' */
            {
                swap  = array[index];
                array[index] = array[index+1];
                array[index+1] = swap;
            }
        }
}

// PRINT SORTED ARRAY
printf("Sorted list in ascending order:\n");
for (index = 0; index < length; index++)
     printf("%d\n", array[index]);


return 0;

}

