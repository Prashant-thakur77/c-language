#include<stdio.h>
using namespace std;


int main(){
  int rows,cols;
  printf("enter the no of rows");
  scanf("%d",&rows);
  printf("enter the no of columns");
  scanf("%d",&cols);
  int matrix1[rows][cols],matrix2[rows][cols],result[rows][cols];
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      printf("element[%d][%d]",i+1,j+1);
      scanf("%d",&matrix1[i][j]);

    }
  }
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      printf("element[%d][%d]",i+1,j+1);
      scanf("%d",&matrix2[i][j]);

    }
  }
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      result[i][j]=matrix1[i][j]+matrix2[i][j];

    }
  }
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      printf("%d ",result[i][j]);
      
    }
    printf("\n");
  }

  
  

}