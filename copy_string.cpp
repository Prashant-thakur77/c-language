#include<stdio.h>
#include<string.h>
int main(){
  char string1[100],copy[100];
  printf("enter the main string: ");
  scanf("%s",&string1);
  strcpy(copy,string1);
  printf("the copied string is %s",copy);
  return 0;
}