#include<stdio.h>


void swap(int *q,int *b){
 int temp=*q;
 *q=*b;
 *b=temp;
 
}

 void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
	    int min=i;
        for(int j=i+1;j<n;j++){
	    if(arr[j]<arr[min]){
		    min=j;
	
	
	}
	
   
   }
swap(&arr[i],&arr[min]); 
 
 
 }
 }

