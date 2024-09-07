#include<stdio.h>
int main(){
  int a;
  int flag=0;
  printf("Enter the positive no to be checked for prime or not:");
  scanf("%d",&a);
  if(a==1 || a==0){
    flag=1;
  }
  for(int i=2;i<=a/2;i++){
    if(a%i==0){
      flag=1;
    }
  }
  if(flag==0){
    printf("\n%d is a prime no",a);
  }
  else{
    printf("\n%d is not a prime no",a);
  }

}