// C program to implement 
// the above approach 
#include <stdio.h> 
  
// Driver code 
int main() 
{ 
    // We can change values here for 
    // different inputs 
    float P, R, T; 
    // Assigning the values at run time
    printf("Enter the Principal Amount, Rate, Time :");
  scanf("%f %f %f",&P,&R,&T);
    // Calculate simple interest 
    float SI = (P * T * R) / 100; 
  
    // Print Simple Interest 
    printf("Simple Interest = %f\n", SI); 
  
    return 0; 
} 