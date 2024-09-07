#include<stdio.h>
int main(){
  int a;
  printf("Enter integer to check if it is positive or negative:");
  scanf("%d",&a);

  if(a>0){
    printf("\n%d is positive integer",a);
  }
  else if(a==0){
    printf("\n%d is neither positive integer nor a negative integer",a);
  }
  else{
    printf("\n%d is negative integer",a);

  }
  return 0;

}