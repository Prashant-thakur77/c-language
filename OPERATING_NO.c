#include<stdio.h>
int main(){
  double a;
  double b;
  char operator;

  printf("Type the operation you want to perform (+-*/):");
  scanf("%c",&operator);
  printf("\nnumber 1:");
  scanf("%lf",&a);
   printf("\nnumber 2:");
   scanf("%lf",&b);



  switch(operator){
    case '+':
      printf("You have entered \'+\' operator");
      double ans=a+b;
      printf("\nYour result is:%0.2lf",ans);
      break;
    case '-':
      printf("You have entered \'-\' operator");
      ans=a-b;
      printf("your result is:%0.2lf",ans);
      break;
    case '*':
      printf("You have entered \'*\' operator");
      ans=a*b;
      printf("your result is:%0.2lf",ans);
      break;

    case '/':
      printf("You have entered \'/\' operator");
      ans=a/(double)b;
      printf("your result is:%0.2lf",ans);
      break;


    

  }
  return 0;

}