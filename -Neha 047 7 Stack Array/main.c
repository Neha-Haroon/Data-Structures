#include <stdio.h>
int top = 0, stack[10];

main()
{
    int key;

    printf("STACK ARRAY \n\n\n");
    while (1)
    {
        printf("\n\n\n\n\OPTIONS : \n 1. Push\n 2. Pop\n 3. Display \n 4. Exit\n\n\n  ENTER KEY : ");
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
                printStack();
                break;
            }
            case 4:
            {
                exit(0);
            }
        }
    }
}
push()
{
    int input;
    if (top == 10)
        printf("\nCannot Enter STACK OVERFLOW");
    for (top = 0; top <= 10; top++)
    {
        printf("\nEnter Value to Push (ZERO TO STOP): ");
        scanf("%d", &input);
        stack[top] = input;
    };
    for (int i; i <= 10; i++)
    {
        printf("\n%d", stack[i]);
    };
}
pop()
{
    if(top == 0)
        printf("Cant Pop STACK UNDERFLOW");
    else
    {
        printf("\n\nTo Be Deleted : %d", stack[top]);
        stack[top] = stack[top + 1];
        top--;
    }
    for (int i; i <= 10; i++)
    {
        printf("\n%d", stack[i]);
    };
}
printStack()
{
    for (int i; i <= 10; i++)
    {
        printf("%d", stack[i]);
    };
}
