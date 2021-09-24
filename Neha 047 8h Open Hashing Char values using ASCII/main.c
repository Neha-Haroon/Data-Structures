#include <stdio.h>
#include <stdlib.h>
struct node
{
	char data;
    struct node *next;
};
struct node arr[20];
const size =10;

int main()
{
    int key, i, input;

	for( i = 0; i<10 ; i++)     // INITIALIZE TO IMPOSSILE VALUE
	{
		arr[i].data = "a";
		arr[i].next = NULL;
	}

    while (1)
    {
        printf("\n\nOPTIONS : \n 1. Insert Data\n 2. Search Data\n 3. Print\n 4. Exit\n\n\n  ENTER KEY : ");
        scanf("%d", &key);

        switch (key)
        {
            case 1:
         	{
                insert();
                break;
            }
            case 2:
            {
                Search();
                break;
            }

            case 3:
            {
                print();
                break;
            }
        	case 4:
            {
                exit(0);
            }
    	}
	}
}

void insert()
{
	int index_of_arr , int_entered;
	char entered;

	printf( "Enter value : " );
    scanf("%s", &entered);

    int_entered = entered;
    index_of_arr = int_entered % 10;
    printf("%s;", entered);

	if ( arr[index_of_arr].data == "a" )
		arr[index_of_arr].data = entered;

	else
	{
		struct node *temp;
	    temp = (struct node *)malloc(sizeof(struct node));
	    temp->data = entered;
		temp->next = NULL;
	    if (arr[index_of_arr].next == NULL)
	        arr[index_of_arr].next = temp;
		else
	    {
	        struct node *curr = arr[index_of_arr].next;
	        while(curr ->next != NULL)
	        {
	        	curr= curr->next;
			}
	        curr->next = temp;
	    }

	}
}
void Search()
{

	int index_of_arr, int_search;
	float tosearch;

	printf("enter Value To Search :");
	scanf("%s", &tosearch);
	int_search = tosearch;
	index_of_arr = int_search% size;

	if(tosearch==arr[index_of_arr].data)
		printf("Value  %f found", tosearch);
	else
	{
		struct node *curr  = arr[index_of_arr].next;
		while(curr != NULL)
		{
			if( curr->data == tosearch)
            {
                printf("Value  %s found", tosearch);
                break;
            }
			curr=curr->next;
        }

    }
}

void print()
{
    int index_of_arr = 1;
    struct node *curr = arr[index_of_arr].next;
    if ( curr == NULL)
        printf("Empty List ");
    else
    {
        while(curr->next != NULL)
        {
            printf(" %s ", arr[index_of_arr].data );
            curr = curr -> next;
            index_of_arr ++;
        }
    }
}
