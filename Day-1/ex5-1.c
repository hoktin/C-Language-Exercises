/*
Ref.: w3resource
Write a C program to compute the perimeter and
area of a rectangle with a height of 7 inches and width of 5 inches.

-----------Expected Output-----------
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
-------------------------------------
*/

#include <stdio.h> 
int width;          
int height;         

int area;           
int perimeter;      

int main() {
	height = 7;
	width = 5;

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

return(0);
}
