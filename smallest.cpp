#include<stdio.h>
using namespace std;
int smallest(int arr[],int n){
  int smallest=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]<smallest){
      smallest=arr[i];
    }
  }
  return smallest;

}
int main(){
  int arr[5]={1,2,9,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("smallest element in an array is %d",smallest(arr,n));
}