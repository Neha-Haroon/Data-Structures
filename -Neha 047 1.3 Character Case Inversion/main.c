#include <stdio.h>
#include <stdlib.h>

int main()
{
// DECLARE
char char_arr[100];

printf("\n\t\t\t\tSTRING CASE INVERSION\n");

while(1)
{
//  INPUT STRING , ENTER IN CHAR ARRAY using gets(s) function.
printf("Enter The String :");
gets(char_arr);


//2) Now convert the small letter character into a capital letter and vice-versa.
//  FOR loop iterates through the string with the structure for(i=0;s[i];i++)
for (int i = 0 ; char_arr[i] ; i++){
//a) If the ASCII value of the character s[i] is in between 65 to 90 then convert the character into the small letter by adding
//32 to its ASCII value.
    if (char_arr[i] >= 65 && char_arr[i] <= 90)
        char_arr[i] += 32;
//b) If the ASCII value of the character s[i] is in between 97 to 122 then convert the character into the capital letter by
//subtracting 32 from its ASCII value.
    else if(char_arr[i] >= 97 && char_arr[i] <= 122)
    char_arr[i] -= 32;
}

//  PRINT ARRAY
printf("After Case Inversion = %s", char_arr);
return 0;
}
}
