#include <stdio.h>
#include <stdlib.h>
// Initialize
int i;
int array[10];
int tosearch;
int L, R, M;
int flag = 0;
int main()
{
    printf("Welcome To  Binary Search System !!!! \n");

    // input or ARRAY
    printf("Enter Value For Array :\n ");
    for(i=0; i<10; i++){
        printf("Value  %d  :", i+1);
        scanf("%d", &array[i]);
    }
    // SORT USING BUBBLE SORT
    BubbleSort();
    //enter value to be searched
    printf("Enter Value To Be Searched : ");
    scanf("%d", &tosearch);


    L = 0;
    R= 10;
    // Loop TO SEARCH IF VALUE PRESENT IN GIVEN ARRAY
    while(L<=R)
    {
        M=(L+R)/2;
        if(tosearch == array[M])
        {
            printf("\n\tValue = %d Found, CONGRATULATIONS HURRAY!!!!\n\n", tosearch);
            flag = 1;
            break;
        }
        if(tosearch < array[M])
            R = M -1;
        else
        {
           L = M+1;

        }

    }
    // IF VALUE NOT PRESENT
    if (flag ==0)
        printf("\n\tValue =%d  Not Found In List\n", tosearch);
    return 0;
}
int BubbleSort()
{
    int length = 10, table, swap, index;
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
}
