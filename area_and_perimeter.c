// C program to demonstrate the area and perimeter of rectangle
#include <stdio.h>
 
int main()
{
 
    int l , b;
  printf("Enter the parameters of rectangle to calculate are and perimeter :");
  scanf("%d %d",&l,&b);
    printf("Area of rectangle is : %d", l * b);
    printf("\nPerimeter of rectangle is : %d", 2 * (l + b));
    return 0;
}