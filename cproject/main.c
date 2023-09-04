#include <stdio.h>
#include "header.h"


int main(){
int arr[29]={5,4,25,2,1,45,6,42,6,6,9,2,4,1,4,2,5,23,5,6,5,8,9,5,3,32,2,2,2};

timetaken(bubblesort,arr,29);

for(int i=0;i<29;i++){
  printf("%d ",arr[i]);
}

}
