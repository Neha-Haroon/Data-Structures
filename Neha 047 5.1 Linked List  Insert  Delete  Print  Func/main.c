#include<stdlib.h>
#include<stdio.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *start = NULL;
void printList()
{
  struct node *temp = start;

  //iterate the entire linked list and print the data
  while (temp != NULL)
    {
      printf ("%d->", temp->data);
      temp = temp->next;
    }
  printf ("NULL\n");
}

void insert (int d)
{
  struct node *temp = (struct node *) malloc (sizeof (struct node));
  temp->next = NULL;
  temp->data = d;
  if (start == NULL)
  {
    start = temp;
  }
  else
  {
    struct node *curr = start;
    while (curr->next != NULL)
      {
	curr = curr->next;
      }
    curr->next = temp;
  }
}

void del_node(int dele_item)
{
    struct node *curr =start;
    if(start->data==dele_item)
    {
        start=start->next;
        free(curr);
    }
    else
    {
        curr=start->next;
       struct node  *prev = start;
        while(curr->next != dele_item)
        {
            if(curr->data==dele_item)
            {
                prev->next=curr->next;
                free(curr);
                printf("\n\ndeleted\n\n");
                break;
            }
            curr=curr->next;
            prev=prev->next;
        }
        printList();
    }

}
int main ()
{
    int lenghOfLinkedList , value , key , i , itemToDelete;                      // LENGTH OF LIST INPUT
    printf("Enter the length of List:");
    scanf("%d", &lenghOfLinkedList);

    for(i = 0 ; i<lenghOfLinkedList ; i++){
        printf("\n\nEnter Value At Index %d : ", i);
        scanf("%d", &value);
        insert(value);

    };
    printList();
    while(1)
    {
        printf("\n\nEnter The Key :\n 1. Print Linked List \n 2. Delete A Node");
        scanf("%d", &key);

        if ( key == 1 )
           printList();
        else if ( key == 2 )
        {
            printf("\n\nEnter Value From List To Delete : ");
            scanf("%d", itemToDelete);
            del_node(itemToDelete);
            printList();
        };
    };

}
