#include<stdio.h>
using namespace std;
int sum(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  return sum;
}
int main(){
  int arr[]={1,2,3,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("sum of all elements of an array is %d",sum(arr,n));


}