#include<stdio.h>
int main(){
  int fact=1;
  int n;
  printf("no of which factorial is needed:");
  scanf("%d",&n);
  for(int i=n;i>0;i--){
    fact=fact*i;
    
  }
  printf("\nThe factorial of %d is %d ",n,fact);
  return 0;
  

}