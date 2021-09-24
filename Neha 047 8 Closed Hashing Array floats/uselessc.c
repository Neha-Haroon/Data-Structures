#include <stdio.h>
#include<math.h>
#include <stdlib.h>
float arr[11];
int main()
{
    int index, int_entered, linProbNum;         //DECLARE
	float entered;

	printf("Enter value : ");                  // TAKE FLOAT INPUT
    scanf("%f", &entered);


    int_entered = entered;                      // CONVERT TO INT
    index = int_entered % 10;
    printf("%d", index);
//  int index, i, int_entered, linProbNum;         //DECLARE
//	float entered;
//    while( i = 1)
//    {
//        printf("Enter value : ");                  // TAKE FLOAT INPUT
//        scanf("%f", &entered);
//
//        int_entered = entered;                      // CONVERT TO INT
//        index = int_entered % 10;
//        
//    };
}
