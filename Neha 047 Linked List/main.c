#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *next;
}*start = NULL;

// ADDING VALUES TO LINKED LIST
insert()
{
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter Data:");
    scanf("%d", &temp ->data);
    //printf("%d\n", temp ->data);
    temp->next = NULL;
    if (start == NULL){
        start = temp;
        start->next = NULL;
    }
    else
    {
        struct Node * curr = start;
        while(curr -> next != NULL)
        {
            curr = curr ->next;
        }
    curr ->next = temp;
    }
}

// PRINTING LINKED LIST DATA
print_all_Nodes()
{
    if(start == NULL)
        printf("Empty Linked List");
    else
    {
        struct Node * curr = start;
        while(curr -> next != NULL)
        {
            printf("%d", curr->data);
            curr = curr->next;
        }

    }
}
// SEARCHING IN LINKED LIST
search()
{
        // Initialize
    int i;
    int data[10];
    int tosearch;
    int L, R, M;
    int flag = 0;

    // input or ARRAY
    printf("Enter Value For Array :\n ");
    for(i=0; i<10; i++){
        printf("Value  %d  :", i+1);
        scanf("%d", &data[i]);
    }
    //enter value to be searched
    printf("Enter Value To Be Searched : ");
    scanf("%d", &tosearch);


    L = 0;
    R= 10;
    // Loop TO SEARCH IF VALUE PRESENT IN GIVEN ARRAY
    while(L<=R)
    {
        M=(L+R)/2;
        if(tosearch == data[M]){
            printf("\n\tValue = %d Found, CONGRATULATIONS HURRAY!!!!\n\n", tosearch);
            flag = 1;
            break;
        }
        if(tosearch < data[M])
            R = M -1;
        else
            L = M+1;
    }
    // IF VALUE NOT PRESENT
    if (flag ==0)
        printf("\n\tValue =%d  Not Found In List\n", tosearch);
}


int main()
{
    int key, itemToDelete;
    // ADDING VALUES TO LINKED LIST
    for (int i = 0; i<10; i++)
    {
        insert();
        ////t= t+2;
        //print_all_Nodes();
    }
    while(1)
    {
        print_all_Nodes();
        printf("\n\nEnter Key :\n1. Search\n2. Print \n3.Delete");
        scanf("%d", &key);
        if(key ==1)
            // SEARCHING VALUES IN LINKED LIST
            search();
        else if(key == 2)
            // PRINTING LINKED LIST
            print_all_Nodes();
        else if(key ==3)
        {
            printf("Enter value to delete :");
            scanf("%d", &itemToDelete);
            //delete(itemToDelete);
        }
    }
}
