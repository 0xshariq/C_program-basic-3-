// C program to calculate Compound Interest 
#include <stdio.h> 
  
// For using pow function we must  
// include math.h 
#include<math.h>  
  
// Driver code 
int main()  
{ 
  // Principal amount 
  double P;  
  
  // Annual rate of interest 
  double R;  
  
  // Time 
  double T;  

  //Assigning values to the variables at run time
  printf("Enter the principal amount, rate , time :");
  scanf("%lf %lf %lf", &P, &R, &T);
  
  // Calculating compound Interest 
  double Amount = principal *  
                  ((pow((1 + rate / 100),  
                    time))); 
  double CI = Amount - principal; 
   
  printf("Compound Interest is : %lf",CI); 
  return 0; 
} 