#include<stdio.h>
int main(){
  float a,b;
  printf("length of the rectangle:");
  scanf("%f",&a);
  printf("Breadth of the rectangle:");
  scanf("%f",&b);
  float area=a*b;
  float perimeter=(a+b)*2;
  printf("The perimeter of rectangle:%f",perimeter);
  printf("The area of rectangle:%f",area);

  return 0;

}