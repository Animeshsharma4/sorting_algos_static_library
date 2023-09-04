#include<stdio.h>
void swap(int *arr,int n1,int n2){
  arr[ n1]^=arr[n2];
  arr[ n2]^=arr[n1];
  arr[n1]^=arr[n2];



}

void bubblesort(int *arr,int n){
	 for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
         swap(arr,i,j);


      }}}



}

