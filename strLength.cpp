#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
  char str[100];
  int length=0;
  printf("enter the string: ");
  scanf("%s",&str);
  while(str[length]!='\0'){
    length++;
  }
  printf("the length of string is %d",length);

}