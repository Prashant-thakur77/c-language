#include<stdio.h>
int main(){
  float a,r;
  const float PI=3.14159;
  printf("Enter radius of circle to find it's area:");
  scanf("%f",&r);
  float areaOfCircle=PI*r*r;
  printf("\nThe area of circle:%0.2f",areaOfCircle);


  printf("\nEnter side of the square to find it's area:");
  scanf("%f",&a);
  
  float areaOfSquare=a*a;
 
 
  printf("\nThe area of square:%0.2f",areaOfSquare);

  return 0;

}