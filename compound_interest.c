// C program to calculate Compound Interest 
#include <stdio.h> 
#include<math.h>  
int main()  
{ 
  
  double P;  
  double R;  
  double T;  
  
  printf("Enter the principal amount, rate , time :");
  scanf("%lf %lf %lf", &P, &R, &T);
  
  
  double Amount = principal *  
       ((pow((1 + rate /100),time))); 
  double CI = Amount - principal; 
   
  printf("Compound Interest is : %lf",CI); 
  return 0; 
} 