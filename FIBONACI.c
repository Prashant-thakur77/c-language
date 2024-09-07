#include<stdio.h>
int main(){
  
  int n;
  int a=0;
  int b=1;
  int nextTerm=a+b;

  printf("range of fibonacci series needed:");
  scanf("%d",&n);
  printf("the fibonacci series for %d terms is %d,%d",n,a,b);
  for(int i=2;i<n;i++){
    printf(",%d",nextTerm);
    a=b;
    b=nextTerm;
    nextTerm=a+b;
    
  }
  
  return 0;
  
}