#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tWelcome To  Selection Sorting System !!!! \n\n");

    int index, i, data[10],min_index, comparison_index ,temp;

    printf("Enter Value For Array :\n ");   // input of ARRAY
    for(i=0; i<10; i++){
        printf("Value  %d  :", i+1);
        scanf("%d", &data[i]);
    }

    for( index = 0 ; index < 10 ; index++ )
    {
        min_index = index;
        for(comparison_index = index+1 ; comparison_index<10 ; comparison_index++)
        {
            if(data[min_index]>data[comparison_index])
            {
                min_index = comparison_index;
            }
        }
        temp = data[index];
        data[index] = data[min_index];
        data[min_index] = temp;
    }
    for(i =0; i<10; i++)
    {       // PRINT SORTED ALGORITHM
        printf("%d ",data[i]);
    }
    return 0;
}
