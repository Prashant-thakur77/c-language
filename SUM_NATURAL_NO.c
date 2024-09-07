#include<stdio.h>
int main(){
  int n;
  printf("Enter up to where sum of natural no is required:");
  scanf("%d",&n);
  int sum=(n*(n+1))/2;
  printf("\nSum of n natural no:%d",sum);
  return 0;
}