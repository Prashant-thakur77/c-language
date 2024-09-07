#include<stdio.h>
int main(){
  double a;
  double b;
  double c;
  printf("Enter three numbers");
  printf("\nEnter number 1:");

  scanf("%lf",&a);
  printf("\nEnter number 2:");

  scanf("%lf",&b);
  printf("\nEnter number 3:");

  scanf("%lf",&c);
  if(a>b){
    if(a>c){
      printf("\n%0.2lf is the largest among the three numbers",a);
    }
    else if(c>a){
      printf("\n%0.2lf is the largest among the three numbers",c);
    }
    else{
      printf("\n%0.2lf and %0.2lf are equal ",a,c);
    }
  }
  else if(b>a){
    if(b>c){
      printf("\n%0.2lf is the largest among the three numbers",b);
    }
    else if(c>b){
      printf("\n%0.2lf is the largest among the three numbers",c);
    }
    else{
      printf("\n%0.2lf and %0.2lf are equal ",b,c);
    }

  }
  else {
    if(c>b){
      printf("\n%0.2lf is the largest among the three numbers",c);

    }
    else{
       printf("\n%0.2lf and %0.2lf are equal ",b,a);
      

    }
    

  }


}