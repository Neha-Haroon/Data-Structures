#include <stdio.h>
#include<math.h>
#include <stdlib.h>
float arr[11];
int main()
{
    int index, lkey,qkey, i,probing_choice, input;

    for(int index = 0 ; index<10 ; index++)         // MAKE ALL ARRAY INDEX VALUES -1.0
        arr[index] = -1.0;

    printf("\n\n\t\t\t\tCLOSED HASHING");
    printf("\n\nOPTIONS : \n 1. Linear Probing\n 2. Quadratic Probing\n 3. Exit\n\n\n  ENTER KEY : ");
    scanf("%d", &probing_choice);
    switch (probing_choice)
    {
        case 1:         // LINEAR ALL
        {
            while (1)
            {
                printf("\n\nOPTIONS : \n 1. Linear Insert Data\n 2. Linear Search Data\n 3. Display\n 4. Exit\n\n\n  ENTER KEY : ");
                scanf("%d", &lkey);
                switch (lkey)
                {
                    case 1:
                    {
                        Linear_Insert();
                        Display();
                        break;
                    }
                    case 2:
                    {
                        Linear_Search();
                        break;
                    }
                    case 3:
                    {
                        Display();
                        break;
                    }
                    case 4:
                    {
                        exit(0);
                        break;
                    }
                }
            }
            break;
        }
        case 2:               // QUADRATIC ALL
        {
            while(1)
            {
                printf("\n\nOPTIONS : \n 1. Quadratic Insert Data\n 2. Quadratic Search Data\n 3. Display\n 4. Exit\n\n\n  ENTER KEY : ");
                scanf("%d", &qkey);
                switch (qkey)
                {
                    case 1:
                    {
                        Quadratic_Insert();
                        break;
                    }
                    case 2:
                    {
                        Quadratic_Search();
                        break;
                    }
                    case 3:
                    {
                        Display();
                        break;
                    }
                    case 4:
                    {
                        exit(0);
                        break;
                    }
                }
            }
            break;
        }
        case 3:
        {
            exit(0);
            break;
        }
    }
}
int Linear_Insert()
{
    int index, int_entered, linProbNum;         //DECLARE
	float entered;

	printf("Enter value : ");                  // TAKE FLOAT INPUT
    scanf("%f", &entered);

    int_entered = entered;                      // CONVERT TO INT
    index = int_entered % 10;                   // TAKE LAST DIGIT AS INDEX OR ARRAY

	if (arr[index] == -1.0)                     // IF ARRAY INDEX EMPTY INSERT
		arr[index] = entered;
    else
    {
        while(arr[index + linProbNum] != -1.0)
        {
            if( index + linProbNum == 9 )
                arr[ index + linProbNum + 1 ] = arr[0];

            if(arr[index + linProbNum] == -1.0)
            {
                arr[index + linProbNum] = entered;
                break;
            }
        }
    }

}
void Quadratic_Insert()
{
    int index, int_entered, linProbNum;
	float entered;

	printf("Enter value : ");
    scanf("%f", &entered);

    int_entered = entered;
    index = int_entered % 10;

	if (arr[index] == -1.0)
		arr[index] = entered;
    else
    {
        int quadProbNum , i;
        while(arr[index + linProbNum] != -1.0)
        {
            quadProbNum = i*i;
            if( index + quadProbNum == 9 )
                arr[ index + quadProbNum + 1 ] = arr[0];

            if(arr[index + quadProbNum] == -1.0)
            {
                arr[index + quadProbNum] = entered;
                break;
            }
        }
    }
}

int Linear_Search()
{
    int index, flag = 0;
	float tosearch;

	printf("Enter Value To Search :");
	scanf("%f", &tosearch);

    for(index = 0 ; index < 10 ; index++)
    {
        if(arr[index] == tosearch)
        {
            printf("\nValue  %f FOUND\n\n", tosearch);
            flag = 1;
        }
    }
    if(flag == 0)
        printf("\nValue = %f NOT FOUND\n\n", tosearch);
}

void Quadratic_Search()
{
    int index , probNum , flag = 0;
	float tosearch;

	printf("Enter Value To Search :");
	scanf("%f", &tosearch);

    for(index = 0 ; index < 10 ; index++)
    {
        probNum = index*index;
        if(arr[index+ probNum] == tosearch)
        {
            printf("\nValue  %f FOUND\n\n", tosearch);
            flag = 1;
        }
    }
    if(flag == 0)
        printf("\nValue = %f NOT FOUND\n\n", tosearch);
}

int Display()
{
    int i;
    for(i = 0 ; i < 10 ; i ++)
       printf("\t\t\t\t\t\tINDEX %d = %f\n", i , arr[i]);
    return 0;
}
