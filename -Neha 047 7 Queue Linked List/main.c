#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*rear = NULL;

int main()
{
    int key, input;

    while (1)
    {
        printf("OPTIONS : \n 1. Enqueue\n 2. Dequeue\n 3. Display \n 4. Exit\n\n\n  ENTER KEY : ");
        scanf("%d", &key);

        switch (key)
        {
            case 1:
            {
                Enqueue();
                break;
            }
            case 2:
            {
                Dequeue();
                break;
            }
            case 3:
            {
                printQueue();
                break;
            }
            case 4:
            {
                exit(0);
            }
        }
    }
}

int Enqueue()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter value : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (rear == NULL)
        rear = temp;
       // UNDER
    else
    {
        temp->next = rear;
        rear = temp;
    }
}
int Dequeue()
{
    if(rear == NULL)
        printf("Stack UnderFlow");
    else
    {
        struct node *curr = rear;
        rear= curr->next;
        int a = curr->data;
        free(curr);
        printf("The Dequeue value is %d", a);
    }
}

int printQueue()
{
  struct node *temp = rear;

  //iterate the entire linked list and print the data
  while (temp != NULL)
    {
      printf ("%d->", temp->data);
      temp = temp->next;
    }
  printf ("NULL\n");
}
