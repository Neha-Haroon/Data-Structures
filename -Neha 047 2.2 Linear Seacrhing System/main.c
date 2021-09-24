#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int data[10];

    int tosearch;
    int flag = 0;

    for(i=0; i<10; i++){
    printf("Enter 10 values for an array");
        scanf("%d", &data[i]);
    }
    printf("Enter Value To Be Searched : ");
    scanf("%d", &tosearch);

    for(i =0; i<10; i++){
        if (tosearch == data[i]){
            printf("Value Found");
            flag =1;
            break;
        }
    }
    if (flag ==0){
        printf("Value Not Found");
    }
    return 0;
}
