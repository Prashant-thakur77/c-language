#include<stdio.h>
using namespace std;
int largest(int arr[],int n){
  int largest=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
  return largest;

}
int main(){
  int arr[5]={1,2,9,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("largest element in an array is %d",largest(arr,n));
}