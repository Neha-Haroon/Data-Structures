#include<stdio.h>
int front=0 , rear = 0, queue[4], size =10;

int main()
{
    int key;

    printf("QUEUE ARRAY \n");
    while (1)
    {
        printf("Enter Size of Queue : ");
        scanf("%d", &size);
        while(1)
        {
            printf("\n\nOPTIONS : \n 1. Enqueue\n 2. Dequeue\n 3. Display \n 4. Exit\n\n\n  ENTER KEY : ");
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
}
int Enqueue()
{
    int input;
    if (rear == size)
        printf("\nCannot Enter STACK OVERFLOW");
    else
    {

        for (rear = 0; rear <= size; rear++)
        {
            printf("\nEnter Value to Push (ZERO TO STOP): ");
            scanf("%d", &input);
            queue[rear] = input;
        };
        for (int i; i <= size; i++)
        {
            printf("\n INDEX %d = %d",i, queue[i]);
        };
    }
}
int Dequeue()
{
    if(front == 10)
        printf("Cant Dequeue : QUEUE UNDERFLOW");
    else
    {
        printf("Deleted Value = %d", queue[front]);
        front++;
        for(int i =0; i<=size; i++)
        {
            queue[i] = queue[i+1];
        }
    }
    for (int i; i <= size ;i++)
    {
        printf("\n INDEX %d = %d",i, queue[i]);
    };
}
int printQueue()
{
    for (int i; i <= size; i++)
    {
        printf("\n INDEX %d = %d",i, queue[i]);
    };
}
