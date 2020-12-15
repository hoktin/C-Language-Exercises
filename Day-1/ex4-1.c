/*
Write a C program to print the following characters in a reverse way.
Test Characters: 'X', 'M', 'L'

-----------Expected Output-----------
The reverse of XML is LMX
-------------------------------------
*/
#include <stdio.h>
 int main()
 {
    char char1 = 'X';
    char char2 = 'M';
    char char3 = 'L';
    char tmp = ' ';
    
    tmp = char3;
    char3 = char1;
    char1 = tmp;

    printf("The reverse is %c%c%c\n",
        char1, char2, char3);

    return(0);
}
