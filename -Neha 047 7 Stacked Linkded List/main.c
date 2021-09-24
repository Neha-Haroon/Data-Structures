#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top = NULL;

int main()
{
    int key, input;
    while (1)
    {
        printf("OPTIONS : \n 1. Push\n 2. Pop\n 3. Display \n 4. Exit\n\n\n  ENTER KEY : ");
        scanf("%d", &key);

        switch (key)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                printList();
                break;
            }
            case 4:
            {
                exit(0);
            }
        }
    }
}
int push()
{

    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter value : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (top == NULL)
        top = temp;
       // UNDER
    else
    {
        temp->next = top;
        top = temp;
    }
}
int pop()
{
    if(top == NULL)
        printf("Stack UnderFlow");
    else
    {
        struct node *curr = top;
        top= curr->next;
        int a = curr->data;
        free(curr);
        printf("The POP value is %d", a);
    }
}
int printList()
{
  struct node *temp = top;

  //iterate the entire linked list and print the data
  while (temp != NULL)
    {
      printf ("%d->", temp->data);
      temp = temp->next;
    }
  printf ("NULL\n");
}
