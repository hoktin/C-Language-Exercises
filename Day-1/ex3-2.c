/*
Use printf with left-justify flag (-) to create
a table format.

-----------Expected Output-----------
Name                     Title               Gross     Tax       Net       
Bob Cratchit             Clerk               15.00     2.00      13.00  
-------------------------------------
*/
#include <stdio.h>

int main()
{
    char name[15] = "Bob Cratchit";
    char title[10] = "Clerk";
    float gross = 15;
    float tax = 2;
    float net = 13;

    printf("%-25s%-20s%-10s%-10s%-10s\n", "Name", "Title", "Gross", "Tax", "Net");
    printf("%-25s%-20s%-10.2f%-10.2f%-10.2f\n", name, title, gross, tax, net);
    return 0;
}
