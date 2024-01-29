#include <stdio.h>   
int main() 
{ 
    float P, R, T;
    printf("Enter the Principal Amount, Rate, Time :");
  scanf("%f %f %f",&P,&R,&T);

    float SI = (P * T * R) / 100; 

    printf("Simple Interest = %f\n", SI); 
  
    return 0; 
} 