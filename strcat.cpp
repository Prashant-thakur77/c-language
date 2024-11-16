#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
  char string1[100],string2[100];
  printf("enter string 1: ");
  fgets(string1,sizeof(string1),stdin);
  string1[strcspn(string1,"\n")]='\0';
  printf("enter string 2: ");
  fgets(string2,sizeof(string2),stdin);
  string2[strcspn(string2,"\n")]='\0';
  strcat(string1,string2);
  printf("enter concatenated string %s",string1);
  
  
  
  
}
