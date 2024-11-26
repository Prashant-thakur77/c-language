#include<stdio.h>
int powerfunc(int a,int b){
  if(b==0) return 1;
  else return a*powerfunc(a,b-1);

}
int main(){
  int a;
  int b;
  printf("Enter the base no:");
  scanf("%d",&a);
  printf("Enter the power no:");
  scanf("%d",&b);
  printf("The result of %d to the power %d is %d",a,b,powerfunc(a,b));

 


    
  return 0;
  }
  

