#include <stdio.h>
#include <stdlib.h>
struct BTnode
{
	int data;
    struct BTnode *leftChild;
    struct BTnode *rightChild;
};
struct BTnode *root = NULL;
int main()
{
    int key, i, input;
    while (1)
        {
        printf("\n\t\t\t\tBINARY TREE ITERATIVE");
        printf("\n\nOPTIONS : \n 1. Insert Data\n 2. Search Data\n 3. Search Min Data\n 4. Search Max Data\n 5. Delete Data\n 6. Exit\n\n\n  ENTER KEY : ");
        scanf("%d", &key);

        switch (key)
        {
            case 1:
            {
                insertBT();
                break;
            }
            case 2:
            {
               BTsearch();
                break;
            }

            case 3:
            {
               BTsearchMin();
                break;
            }
        	case 4:
            {
               BTsearchMax();
                break;
            }
            case 5:
            {
                BTdelete();
                break;
            }
        	case 6:
            {
                exit(0);
                break;
            }
    	}
	}
}
void insertBT()
{
    struct BTnode *temp;
    temp = (struct BTnode*)malloc(sizeof(struct BTnode));

    printf("Enter Data : ");
    scanf("%d",&temp->data);

    temp->leftChild=NULL;
    temp->rightChild=NULL;

    if (root==NULL)
        root=temp;
    else //if root is not equal to null
    {
        struct BTnode *curr=root;
        struct BTnode *parent;
        while (curr!=NULL)
        {
            parent = curr;
            if ( temp -> data < curr -> data)
                curr = curr -> leftChild;
            else
                curr = curr -> rightChild;
        }
        if ( temp -> data < parent -> data )
            parent-> leftChild  = temp;
        else
            parent-> rightChild  = temp;
    }
}
void BTsearch()
{
    int tosearch, flag = 0;

    printf("Enter Data To Search: ");
    scanf("%d",&tosearch);
    struct BTnode *curr = root;
    while(curr != NULL)
    {
        if ( tosearch ==curr ->data)
        {
            flag = 1;
            printf("\n\t%d VALUE FOUND !!!", tosearch);
            break;
        }
        else
        {
            if ( tosearch < curr ->data)
                curr = curr -> leftChild;
            else
                curr = curr -> rightChild;
        }
    }
    if (flag == 0)
        printf("\n\t%d NOT FOUND", tosearch);
}
void BTsearchMin()
{
    struct BTnode *curr = root;
    while(curr -> leftChild!= NULL)
        curr = curr -> leftChild;
    printf("\n\tMINIMUM DATA IN TREE : %d", curr-> data);
}
void BTsearchMax()
{
    struct BTnode *curr = root;
    while(curr -> rightChild!= NULL)
        curr = curr -> rightChild;
    printf("\n\tMAXIMM DATA IN TREE : %d", curr-> data);
}
void BTdelete()
{
    int todelete, flag = 0;

    printf("Enter Data To Search: ");
    scanf("%d",&todelete);
    struct BTnode *curr = root;
//    while(curr != NULL)
//    {
//        if ( todelete ==curr ->data)
//        {
//            flag = 1;
//            printf("\n\t%d VALUE FOUND !!!", todelete);
//            break;
//        }
//    }
    if (tosearch == curr ->data)
        printf("VALUE DOESNOT EXIST");
    elseif(tosearch < curr->data)
    els
}
