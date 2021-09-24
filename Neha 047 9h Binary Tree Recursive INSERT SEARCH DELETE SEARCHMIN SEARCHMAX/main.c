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
    int key, i, value;
    while (1)
    {
        printf("\n\t\t\t\tBINARY TREE");
        printf("\n\nOPTIONS : \n 1. Insert Data\n 2. Search Data\n 3. Search Min Data\n 4. Search Max Data\n 5. Delete Data\n 6. Pre Order Traversal\n 7. Pre Order Traversal\n 8. Pre Order Traversal\n 9. Exit\n\n\n  ENTER KEY : ");
        scanf("%d", &key);

        switch (key)
        {
            case 1:
            {
                printf("Enter Data : ");
                scanf("%d",&value);
                root = BTinsert(root, value);
                break;
            }
            case 2:
            {
                int tosearch;
                printf("Enter VAlue to Search :");
                scanf("%d", &tosearch);
                BTsearch(root, tosearch);
                break;
            }

            case 3:
            {
                BTsearchMin(root);
                break;
            }
        	case 4:
            {
                BTsearchMax(root);
                break;
            }
            case 5:
            {
                int todelete;
                printf("Enter Value to Search :");
                scanf("%d", &todelete);
                BTdelete(root, todelete);
                break;
            }
        	case 6:
            {
                BTinOrderTraversal(root);
                break;
            }
            case 7 :
            {
                BTpreOrderTraversal(root);
                break;
            }
            case 8 :
            {
                BTpostOrderTraversal(root);
                break;
            }
            case 9 :
            {
                exit(0);
                break;
            }
        }
    }
}
int BTinsert(struct BTnode *node, int value)
{
    if (node == NULL)
    {
        struct BTnode *temp;
        temp = (struct BTnode*)malloc(sizeof(struct BTnode));

        temp->data = value;
        temp->leftChild=NULL;
        temp->rightChild=NULL;
        return temp;
    }
    else if(value < node ->data)
        node->leftChild = BTinsert(node->leftChild, value);
    else
        node->rightChild = BTinsert(node->rightChild, value);
    return node;
}
int BTsearchMin(struct BTnode *node)
{
    if (node -> leftChild == NULL)
    {
        printf("\n\nMix Value : %d", node ->data);
        //return node ->data;
        return;
    }
    BTsearchMin( node -> leftChild);

}
int BTsearchMax(struct BTnode *node)
{
    if (node -> rightChild == NULL)
    {
        printf("\n\nMax Value : %d", node ->data);
        //return node -> rightChild;
        return;
    }
    BTsearchMax( node -> rightChild);
}
int BTsearch(struct BTnode *node,int tosearch)
{
    if(node == NULL)
    {
        printf("\n\nSearch value : %d not Exists", tosearch);
        return;
    }
    if ( node->data == tosearch)
    {
        printf("\n\nSearch Value %d Exists ", tosearch);
        return;
    }
    else
    {
        if ( node->data < tosearch)
            BTsearch(node -> rightChild, tosearch);

        if ( node->data > tosearch)
             BTsearch(node -> leftChild, tosearch);
        return;
    }
}
int BTdelete(struct BTnode *node, int todelete)
{
    if(node == NULL)
    {
        printf("\n\t\tDATA DOES NOT EXIT\n");
        return NULL;
    }
    if( todelete < node -> data )
        node -> leftChild = BTdelete(node->leftChild , todelete);

    else if( todelete > node -> data )
        node->rightChild = BTdelete(node->rightChild , todelete);

    else if( todelete == node -> data)
    {
        if(node->leftChild == NULL)
        {
            struct BTnode *temp;
            temp= node -> leftChild;
            free(node);
            return temp;
        }
        else if(node-> rightChild == NULL)
        {
            struct BTnode *temp;
            temp= node-> rightChild;
            free(node);
            return temp;
        }
        struct BTnode *templeftMax = node->leftChild;
        while( templeftMax -> rightChild == NULL)
        {
            templeftMax= templeftMax->rightChild;
        }
        node ->data = templeftMax ->data;
        node->leftChild = BTdelete(node->leftChild , templeftMax->data);
    }
    return node;
}
int BTinOrderTraversal(struct BTnode *node)
{
    if(node != NULL)
    {
        BTinOrderTraversal(node -> leftChild);
        printf("\n%d", node ->data);
        BTinOrderTraversal(node -> rightChild);
    }
}
int BTpreOrderTraversal(struct BTnode *node)
{
    if(node != NULL)
    {
        printf("\n%d", node ->data);
        BTpreOrderTraversal(node -> leftChild);
        BTpreOrderTraversal(node -> rightChild);
    }
}
int BTpostOrderTraversal(struct BTnode *node)
{
    if(node != NULL)
    {
        BTpostOrderTraversal(node -> leftChild);
        BTpostOrderTraversal(node -> rightChild);
        printf("\n%d", node ->data);
    }
}

